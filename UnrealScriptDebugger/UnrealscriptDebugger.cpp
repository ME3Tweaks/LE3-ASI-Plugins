//#define GAMELE1
//#define GAMELE2
#define GAMELE3

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
#include <shlwapi.h>
#include <psapi.h>
#include <string>
#include <fstream>
#include <ostream>
#include <streambuf>
#include <sstream>
#include <stack>

#include "BreakPointContainer.h"
#include "../../Shared-ASI/Interface.h"
#include "../../Shared-ASI/Common.h"
#include "../../Shared-ASI/ME3Tweaks/ME3TweaksHeader.h"
#include "UnrealScriptDefinitions.h"
#pragma comment(lib, "shlwapi.lib")

#define SLHHOOK "UnrealscriptDebugger_"
#define MYHOOK "UnrealscriptDebugger_"


#if defined GAMELE1
#define SPI_GAME SPI_GAME_LE1
#elif defined GAMELE2
#define SPI_GAME SPI_GAME_LE2
#elif defined GAMELE3
#define SPI_GAME SPI_GAME_LE3
#endif

SPI_PLUGINSIDE_SUPPORT(L"UnrealscriptDebugger", L"SirCxyrtyx", L"2.0.0", SPI_GAME, SPI_VERSION_LATEST);
SPI_PLUGINSIDE_POSTLOAD;
SPI_PLUGINSIDE_ASYNCATTACH;

struct DebuggerFrame
{
	FFrame* Stack;
	UStruct* Node;
	UObject* Object;
	BYTE* CodeBaseAddr;
	BYTE* Locals;
	OutParmInfo* OutParms;
	DebuggerFrame* PreviousFrame;
	UFunction* NativeFunc;
	const char* NodePath;
	const wchar_t* FileName;
	USHORT FileNameLength;
	USHORT NodePathLength;
	USHORT CurrentPosition;
};

enum PipeCommands : BYTE
{
	CMD_AttachDebugger = 1,
	CMD_DetachDebugger = 2,
	CMD_BreakImmediate = 3,
	CMD_Breakpoint = 4,
		CMD_Add = 5,
		CMD_Remove = 6,
	CMD_StepInto = 7,
	CMD_StepOver = 8,
	CMD_StepOut = 9,
	CMD_Resume = 10
};

enum class StepState
{
	Not,
	In,
	Over,
	Out
};

TCHAR logPath[MAX_PATH];

static ISharedProxyInterface* ProxyInterface;

BreakPointContainer BreakpointMap;
std::stack<DebuggerFrame*> DebuggerStack;
std::map<std::string, std::wstring> NodePathToFileNameMap;
std::map<const UStruct*, TArray<BYTE>*> NodeToOriginalDataMap;
#define currentStackDepth static_cast<int>(DebuggerStack.size())
bool pendingAttach = false;
bool pendingDetach = false;
bool IsAttached = false;
StepState steppingState = StepState::Not;
int steppingMinStackDepth = 0;
bool resume = false;


typedef void (*tNativeFunction) (UObject* Context, FFrame* Stack, void* Result);
tNativeFunction* GNatives;


struct LexMsg
{
	DebuggerFrame* currentFrame;
	FNameEntry** NamePool;
	ULONG64 msgLength;
	wchar_t msg[1024];
};

void SendMsgToLEX(const wstring& wstr, DebuggerFrame* stackFrame = nullptr) {
	if (const auto handle = FindWindow(nullptr, L"Legendary Explorer"))
	{
#if defined GAMELE1
		constexpr unsigned long SENT_FROM_DEBUGGER = 0x02AC00D7;
#elif defined GAMELE2
		constexpr unsigned long SENT_FROM_DEBUGGER = 0x02AC00D8;
#elif defined GAMELE3
		constexpr unsigned long SENT_FROM_DEBUGGER = 0x02AC00D9;
#endif
		LexMsg msg;
		msg.msgLength = wstr.length();
		wcsncpy_s(msg.msg, wstr.c_str(), msg.msgLength + 1);
		msg.currentFrame = stackFrame;
		msg.NamePool = SDKInitializer::Instance()->GetBioNamePools();
		COPYDATASTRUCT cds;
		ZeroMemory(&cds, sizeof(COPYDATASTRUCT));
		cds.dwData = SENT_FROM_DEBUGGER;
		cds.cbData = sizeof(msg);
		cds.lpData = &msg;
		SendMessageTimeout(handle, WM_COPYDATA, NULL, reinterpret_cast<LPARAM>(&cds), 0, 10, nullptr);
	}
}

static HHOOK msgHook = nullptr;
LRESULT CALLBACK wndProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	if (nCode >= HC_ACTION)
	{
		const auto msgStruct = reinterpret_cast<LPCWPSTRUCT>(lParam);
		if (msgStruct->message == WM_APP + 'R' + 'S' + 'M')
		{
			switch (msgStruct->wParam)
			{
			case CMD_StepInto:
				steppingState = StepState::In;
				break;
			case CMD_StepOver:
				steppingState = StepState::Over;
				steppingMinStackDepth = currentStackDepth;
				break;
			case CMD_StepOut:
				steppingState = StepState::Out;
				steppingMinStackDepth = currentStackDepth - 1;
				break;
			default:
				steppingState = StepState::Not;
				break;
			}
			resume = true;
			PostMessage(nullptr, WM_ACTIVATE, 1, 0);
		}
	}
	return CallNextHookEx(nullptr, nCode, wParam, lParam);
}

void breakState(const bool clearBreakPoint = false)
{
	steppingState = StepState::Not;


	SendMsgToLEX(clearBreakPoint ? L"BreakAndClear" : L"Break", DebuggerStack.top());

	msgHook = SetWindowsHookEx(WH_CALLWNDPROC, wndProc, nullptr, GetCurrentThreadId());

	MSG msg;
    BOOL bRet; 
	while ((bRet = GetMessage(&msg, nullptr, 0, 0)) != 0)
	{

		writeln(L"Break: %d", msg.message);
		if (bRet == -1 || msg.message == WM_CLOSE || msg.message == WM_QUIT || msg.message == WM_NCXBUTTONUP)
		{
			msg.message = WM_QUIT;
			pendingDetach = true;
			break;
		}
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		if (resume)
		{
			resume = false;
			break;
		}
	}
	UnhookWindowsHookEx(msgHook);
    if (msg.message == WM_QUIT)
    {
		PostQuitMessage(static_cast<int>(msg.wParam));
    }
}

void GetOriginalOpcode(const FFrame* Stack, long long& opcodePosition, BYTE& originalOpcode)
{
	const auto node = Stack->Node;
	const auto opCodeAddr = Stack->Code - 1;
	opcodePosition = opCodeAddr - node->Script.Data;
	const auto originalScriptData = NodeToOriginalDataMap.at(node)->Data;
	originalOpcode = originalScriptData[opcodePosition];
}

void ProcessStep(const FFrame* Stack)
{
	if (steppingState == StepState::In)
	{
		steppingState = StepState::Over;
		steppingMinStackDepth = currentStackDepth;
	}
	if (steppingState == StepState::Over && currentStackDepth <= steppingMinStackDepth)
	{
		if (*Stack->Code == OpCodes::BREAKPOINT)
		{
			steppingState = StepState::Not;
			return;
		}
		*Stack->Code = OpCodes::SHADOW_BREAKPOINT;
	}
}

void SetBreakPoints(const std::string& nodePath, const UStruct* node, TArray<BYTE>* originalScript)
{
	if (const auto pair = NodeToOriginalDataMap.find(node); pair != NodeToOriginalDataMap.end())
	{
		originalScript = pair->second;
		//restore the bytecode to its original state
		memcpy(node->Script.Data, originalScript->Data, originalScript->Max);
	}
	else if (originalScript == nullptr)
	{
		//should never happen, but if it does, better to not set any breakpoints than to crash
		return;
	}
	else
	{
		originalScript->Count = node->Script.Count;
		const int size = node->Script.Max;
		originalScript->Max = size;
		originalScript->Data = static_cast<BYTE*>(malloc(size));
		//save the original state of the bytecode
		memcpy(originalScript->Data, node->Script.Data, size);
		NodeToOriginalDataMap[node] = originalScript;
	}
	if (BreakpointMap.ContainsFunc(nodePath))
	{

		const auto breakPointPositions = BreakpointMap.GetBreakPoints(nodePath);

		for (const USHORT position : breakPointPositions)
		{
			node->Script.Data[position] = OpCodes::BREAKPOINT;
		}
	}
}

void execBREAKPOINT(UObject* Context, FFrame* Stack, void* Result)
{
	const auto node = Stack->Node;

	const auto nodePathString = std::string(node->GetFullPath());
	
	const auto opCodeAddr = Stack->Code - 1;
	const auto opcodePosition = opCodeAddr - node->Script.Data;
	const auto originalScriptData = NodeToOriginalDataMap.at(node)->Data;
	const auto originalOpcode = originalScriptData[opcodePosition];

	//These opcodes are checked in loop conditions instead of being executed, so the opcode must be restored, and the instruction pointer reset.
	const bool isNonExecutableOpCode = originalOpcode == OpCodes::Return || originalOpcode == OpCodes::IteratorNext || originalOpcode == OpCodes::IteratorPop;

	//There's no way to restore the breakpoint opcode at this position before it might next be hit, so if it's not a shadow breakpoint, we need to remove it for consistency
	const bool clearBreakpoint = isNonExecutableOpCode && *(Stack->Code - 1) == OpCodes::BREAKPOINT;

	if (clearBreakpoint)
	{
		BreakpointMap.RemoveBreakPoint(nodePathString, opcodePosition);
	}

	DebuggerStack.top()->CurrentPosition = opcodePosition;

	breakState(clearBreakpoint);

	//passing a nullptr is be safe since the original script must be in the map at this point
	SetBreakPoints(nodePathString, node, nullptr);
	
	if (isNonExecutableOpCode)
	{
		Stack->Code[opcodePosition] = originalOpcode;
		Stack->Code--;
		return;
	}

	//opcode is executable
	GNatives[originalOpcode](Context, Stack, Result);

	ProcessStep(Stack);
}


void execSHADOW_BREAKPOINT(UObject* Context, FFrame* Stack, void* Result)
{
	const auto node = Stack->Node;
	const auto opCodeAddr = Stack->Code - 1;
	const auto opcodePosition = opCodeAddr - node->Script.Data;
	const auto originalScriptData = NodeToOriginalDataMap.at(node)->Data;
	const auto originalOpcode = originalScriptData[opcodePosition];
	Stack->Code[opcodePosition] = originalOpcode;
	if (steppingState != StepState::Not && currentStackDepth <= steppingMinStackDepth)
	{
		execBREAKPOINT(Context, Stack, Result);
	}
	else
	{
		Stack->Code--;
	}
}

// ProcessInternal hook
// ======================================================================
typedef void (*tProcessInternal)(UObject* Context, FFrame* Stack, void* Result);
tProcessInternal ProcessInternal = nullptr;
tProcessInternal ProcessInternal_orig = nullptr;
void ProcessInternal_hook(UObject* Context, FFrame* Stack, void* Result)
{
	if (IsAttached)
	{
		const auto node = Stack->Node;
		const auto nodePathString = std::string(node->GetFullPath());

		BYTE* beginOffset = node->Script.Data;

		DebuggerFrame debugFrame;
		debugFrame.Stack = Stack;
		debugFrame.Node = node;
		debugFrame.Object = Stack->Object;
		debugFrame.Locals = Stack->Locals;
		debugFrame.OutParms = Stack->OutParms;
		debugFrame.CodeBaseAddr = beginOffset;
		debugFrame.CurrentPosition = 0;
		debugFrame.PreviousFrame = DebuggerStack.empty() ? nullptr : DebuggerStack.top();
		debugFrame.NativeFunc = nullptr;
		debugFrame.NodePath = nodePathString.c_str();
		debugFrame.NodePathLength = static_cast<USHORT>(nodePathString.length());
		if (const auto pair = NodePathToFileNameMap.find(nodePathString); pair != NodePathToFileNameMap.end())
		{
			debugFrame.FileName = pair->second.c_str();
			debugFrame.FileNameLength = static_cast<USHORT>(pair->second.length());
		}
		else
		{
			debugFrame.FileName = nullptr;
		}
		DebuggerStack.push(&debugFrame);

		TArray<BYTE> originalScript;

		SetBreakPoints(nodePathString, node, &originalScript);

		ProcessStep(Stack);

		ProcessInternal_orig(Context, Stack, Result);

		if (originalScript.Data != nullptr)
		{
			NodeToOriginalDataMap.erase(node);

			//restore the bytecode to its original state
			memcpy(node->Script.Data, originalScript.Data, originalScript.Max);
			free(originalScript.Data);
		}

		DebuggerStack.pop();
		if (steppingState == StepState::Not)
		{
			return;
		}
		if (currentStackDepth == 0)
		{
			steppingMinStackDepth = 0;
			steppingState = StepState::Over;
			return;
		}
		if (steppingState == StepState::In || steppingState == StepState::Over && currentStackDepth + 1 <= steppingMinStackDepth )
		{
			steppingState = StepState::Out;
			steppingMinStackDepth = currentStackDepth;
		}
		if (steppingState == StepState::Out && steppingMinStackDepth == currentStackDepth)
		{
			const auto debugger_frame = DebuggerStack.top();
			debugger_frame->CurrentPosition = debugger_frame->Stack->Code - debugger_frame->CodeBaseAddr;
			breakState();
			SetBreakPoints(debugger_frame->NodePath, debugger_frame->Node, nullptr);
			if (steppingState == StepState::Not || steppingState == StepState::Out)
			{
				return;
			}
			if (debugger_frame->Stack->Code[0] != OpCodes::Return)
			{
				//stepping in or over would break if we were mid-statement, but LEX won't allow that. 
				ProcessStep(debugger_frame->Stack);
			}
		}
	}
	else
	{
		ProcessInternal_orig(Context, Stack, Result);
	}
}

void AttachDebugger()
{
	GNatives[OpCodes::BREAKPOINT] = execBREAKPOINT;
	GNatives[OpCodes::SHADOW_BREAKPOINT] = execSHADOW_BREAKPOINT;
	

	SendMsgToLEX(std::wstring(L"Attached"));
	IsAttached = true;
}

void DetachDebugger()
{
	resume = false;
	BreakpointMap.ClearBreakPoints();
	SendMsgToLEX(std::wstring(L"Detached"));
	IsAttached = false;
}


// ======================================================================
// GameEngineTick hook
// ======================================================================

typedef void (*tGameEngineTick)(UGameEngine* Context, FLOAT deltaSeconds);
tGameEngineTick GameEngineTick = nullptr;
tGameEngineTick GameEngineTick_orig = nullptr;
void GameEngineTick_hook(UGameEngine* Context, FLOAT deltaSeconds)
{
	if (pendingAttach)
	{
		pendingAttach = false;
		AttachDebugger();
	}
	else if (pendingDetach)
	{
		pendingDetach = false;
		DetachDebugger();
	}
	GameEngineTick_orig(Context, deltaSeconds);
}


// ======================================================================
// SetLinker hook
// ======================================================================

typedef void (*tSetLinker)(UObject* Context, ULinkerLoad* Linker, int LinkerIndex);
tSetLinker SetLinker = nullptr;
tSetLinker SetLinker_orig = nullptr;
void SetLinker_hook(UObject* Context, ULinkerLoad* Linker, int LinkerIndex)
{
	if (Context->Linker && IsA<UFunction>(Context))
	{
		NodePathToFileNameMap.insert_or_assign(std::string(Context->GetFullPath()), std::wstring(Context->Linker->Filename.Data));
	}
	SetLinker_orig(Context, Linker, LinkerIndex);
}


template<typename T>
T Read(BYTE* ptr, const int offset)
{
	return *reinterpret_cast<T*>(ptr + offset);
}

void ProcessCommand(BYTE* str, DWORD len)
{
	switch (str[0])
	{
	case CMD_AttachDebugger:
		pendingAttach = true;
		break;
	case CMD_DetachDebugger:
		pendingDetach = true;
		steppingState = StepState::Not;
		BreakpointMap.ClearBreakPoints();
		resume = true;
		break;
	case CMD_Breakpoint:
	{
		const auto op = Read<BYTE>(str, 1);
		const auto breakOffset = Read<USHORT>(str, 2);
		const auto functionPath = reinterpret_cast<char*>(str + 4);
		if (op == CMD_Add)
		{
			BreakpointMap.AddBreakPoint(functionPath, breakOffset);
		}
		else if (op == CMD_Remove)
		{
			BreakpointMap.RemoveBreakPoint(functionPath, breakOffset);
		}
		break;
	}
	case CMD_BreakImmediate:
		steppingMinStackDepth = INT_MAX;
		steppingState = StepState::Over;
		break;
	}
}


SPI_IMPLEMENT_ATTACH
{
	//Common::OpenConsole();

	INIT_CHECK_SDK()

	ProxyInterface = InterfacePtr;

#if defined GAMELE1
	char* ExecutionLoopPattern = "4c 8d 35 5c f2 5a 01 80 38 04 74 30 0f 1f 80 00 00 00 00";
#elif defined GAMELE2
	char* ExecutionLoopPattern = "4c 8d 35 1c 08 5d 01 80 38 04 74 30 0f 1f 80 00 00 00 00";
#elif defined GAMELE3
	char* ExecutionLoopPattern = "4c 8d 35 14 f8 6f 01 80 38 04 74 29 48 8b 43 28";
#endif

	void* ExecutionLoop;
	if (const auto rc = InterfacePtr->FindPattern(&ExecutionLoop, ExecutionLoopPattern);
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to find ExecutionLoop pattern: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}
	const auto gNativesLEA = static_cast<BYTE*>(ExecutionLoop);
	GNatives = reinterpret_cast<tNativeFunction*>(gNativesLEA + 7 + *reinterpret_cast<int32_t*>(gNativesLEA + 3));

#if defined GAMELE1
	char* GameEngineTickPattern = "48 8b c4 55 53 56 57 41 54 41 56 41 57 48 8d a8 e8 fd ff ff";
#elif defined GAMELE2
	char* GameEngineTickPattern = "48 8b c4 55 56 57 41 54 41 55 41 56 41 57 48 8d a8 a8 fc ff ff";
#elif defined GAMELE3
	char* GameEngineTickPattern = "48 8b c4 55 56 57 41 54 41 55 41 56 41 57 48 8d a8 a8 fc ff ff";
#endif

	if (const auto rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&GameEngineTick), GameEngineTickPattern);
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to find GameEngineTick pattern: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}
	else if (const auto rc = InterfacePtr->InstallHook(SLHHOOK "GameEngineTick", GameEngineTick, GameEngineTick_hook, reinterpret_cast<void**>(&GameEngineTick_orig));
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to hook GameEngineTick: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}

	if (const auto rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&SetLinker), "4c 8b 51 2c 4c 8b c9 4d 85 d2 74 39 48 85 d2 74 1c 48 8b c1");
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to find SetLinker pattern: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}
	if (const auto rc = InterfacePtr->InstallHook(SLHHOOK "SetLinker", SetLinker, SetLinker_hook, reinterpret_cast<void**>(&SetLinker_orig));
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to hook SetLinker: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}

#if defined GAMELE1
	char* ProcessInternalPostHookPattern = ;
#elif defined GAMELE2
	char* ProcessInternalPostHookPattern = ;
#elif defined GAMELE3
	char* ProcessInternalPostHookPattern = /*"40 53 55 56 57*/ "48 81 ec 88 00 00 00 48 8b 05 05 62 6d 01";
#endif

	INIT_FIND_PATTERN_POSTHOOK(ProcessInternal, ProcessInternalPostHookPattern);
	INIT_HOOK_PATTERN(ProcessInternal);


#if defined GAMELE1
	auto pipeName = TEXT("\\\\.\\pipe\\LEX_LE1_SCRIPTDEBUG_PIPE");
#elif defined GAMELE2
	auto pipeName = TEXT("\\\\.\\pipe\\LEX_LE2_SCRIPTDEBUG_PIPE");
#elif defined GAMELE3
	auto pipeName = TEXT("\\\\.\\pipe\\LEX_LE3_SCRIPTDEBUG_PIPE");
#endif
	
	BYTE buffer[1024];
	DWORD numBytesRead;
	HANDLE hPipe = CreateNamedPipe(pipeName,
		PIPE_ACCESS_DUPLEX,
		PIPE_TYPE_BYTE | PIPE_READMODE_BYTE | PIPE_WAIT,   // FILE_FLAG_FIRST_PIPE_INSTANCE is not needed but forces CreateNamedPipe(..) to fail if the pipe already exists...
		1,
		1024 * 16,
		1024 * 16,
		NMPWAIT_USE_DEFAULT_WAIT,
	nullptr);

	while (hPipe != INVALID_HANDLE_VALUE)
	{
		if (ConnectNamedPipe(hPipe, nullptr) != FALSE)   // wait for someone to connect to the pipe
		{
			while (ReadFile(hPipe, buffer, sizeof(buffer) - 1, &numBytesRead, nullptr) != FALSE)
			{
				/* add terminating zero */
				buffer[numBytesRead] = '\0';
				ProcessCommand(buffer, numBytesRead);
			}
		}
		
		DisconnectNamedPipe(hPipe);
	}

	return true;
}

SPI_IMPLEMENT_DETACH
{
	//Common::CloseConsole();
	return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  reason, LPVOID) {
	if (reason == DLL_PROCESS_ATTACH)
	{
		GetModuleFileName(hModule, logPath, MAX_PATH);
	}

	return TRUE;
}