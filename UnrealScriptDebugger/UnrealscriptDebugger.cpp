//#define GAME_LE1
//#define GAME_LE2
#define GAME_LE3


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

#if defined GAME_LE1
#include "../LE1-SDK/Interface.h"
#include "../LE1-SDK/Common.h"
#include "../LE1-SDK/ME3TweaksHeader.h"
#elif defined GAME_LE2
#include "../LE2-SDK/Interface.h"
#include "../LE2-SDK/Common.h"
#include "../LE2-SDK/ME3TweaksHeader.h"
#elif defined GAME_LE3
#include "../LE3-SDK/Interface.h"
#include "../LE3-SDK/Common.h"
#include "../LE3-SDK/ME3TweaksHeader.h"
#endif

#include "UnrealScriptDefinitions.h"
#pragma comment(lib, "shlwapi.lib")

#define SLHHOOK "UnrealscriptDebugger_"
#define MYHOOK "UnrealscriptDebugger_"


#if defined GAME_LE1
#define SPI_GAME SPI_GAME_LE1
#elif defined GAME_LE2
#define SPI_GAME SPI_GAME_LE2
#elif defined GAME_LE3
#define SPI_GAME SPI_GAME_LE3
#endif
SPI_PLUGINSIDE_SUPPORT(L"UnrealscriptDebugger", L"SirCxyrtyx", L"2.0.0", SPI_GAME, SPI_VERSION_LATEST);
SPI_PLUGINSIDE_POSTLOAD;
SPI_PLUGINSIDE_ASYNCATTACH;

struct OutParmInfo
{
	UProperty* Prop;
	BYTE* PropAddr;
	OutParmInfo* Next;
};

struct FFrame
{
	void* vtable;
#if defined GAME_LE1 || defined GAME_LE2
	int unks[3];
#elif defined GAME_LE3
	int unks[4];
#endif
	UStruct* Node;
	UObject* Object;
	BYTE* Code;
	BYTE* Locals;
	FFrame* PreviousFrame;
	OutParmInfo* OutParms;
};


struct DebuggerFrame
{
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


TCHAR logPath[MAX_PATH];

static ISharedProxyInterface* ProxyInterface;

BreakPointContainer BreakpointMap;
std::stack<DebuggerFrame*> DebuggerStack;
std::map<std::string, std::wstring> NodePathToFileNameMap;
#define currentStackDepth static_cast<int>(DebuggerStack.size())
bool pendingAttach = false;
bool pendingDetach = false;
bool isStepping = false;
int steppingMinStackDepth = 0;
bool resume = false;


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
#if defined GAME_LE1
		constexpr unsigned long SENT_FROM_DEBUGGER = 0x02AC00D7;
#elif defined GAME_LE2
		constexpr unsigned long SENT_FROM_DEBUGGER = 0x02AC00D8;
#elif defined GAME_LE3
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

// ======================================================================
// CallFunction hook
// ======================================================================
//typedef void (*tCallFunction) (UObject* Context, FFrame* Stack, void* Result, UFunction* Function);
//tCallFunction CallFunction = nullptr;
//tCallFunction CallFunction_orig = nullptr;
//void CallFunction_hook(UObject* Context, FFrame* Stack, void* Result, UFunction* Function)
//{
//	constexpr int FUNC_NATIVE = 1024;
//	bool needPop = false;
//	if (Function->iNative || Function->FunctionFlags & FUNC_NATIVE)
//	{
//		//Native functions will not be executed by ProcessInternal, but should still be in the call stack
//		const auto nodePathString = std::string(Function->GetFullPath());
//		DebuggerFrame debugFrame;
//		debugFrame.Node = Stack->Node;
//		debugFrame.Object = Stack->Object;
//		debugFrame.Locals = Stack->Locals;
//		debugFrame.OutParms = Stack->OutParms;
//		debugFrame.CodeBaseAddr = Stack->Code;
//		debugFrame.CurrentPosition = 0;
//		debugFrame.PreviousFrame = DebuggerStack.empty() ? nullptr : DebuggerStack.top();
//		debugFrame.NativeFunc = Function;
//		debugFrame.NodePath = nodePathString.c_str();
//		debugFrame.NodePathLength = static_cast<USHORT>(nodePathString.length());
//		if (const auto pair = NodePathToFileNameMap.find(nodePathString); pair != NodePathToFileNameMap.end())
//		{
//			debugFrame.FileName = pair->second.c_str();
//			debugFrame.FileNameLength = static_cast<USHORT>(pair->second.length());
//		}
//		else
//		{
//			debugFrame.FileName = nullptr;
//		}
//		DebuggerStack.push(&debugFrame);
//		needPop = true;
//	}
//
//	CallFunction_orig(Context, Stack, Result, Function);
//
//	if (needPop)
//	{
//		DebuggerStack.pop();
//	}
//}

void breakState()
{
	isStepping = false;

	SendMsgToLEX(L"Break", DebuggerStack.top());

	MSG msg;
    BOOL bRet; 
	while ((bRet = GetMessage(&msg, nullptr, 0, 0)) != 0)
	{
		if (bRet == -1 || msg.message == WM_CLOSE)
		{
			msg.message = WM_QUIT;
			pendingDetach = true;
			break;
		}
		if (resume)
		{
			resume = false;
			break;
		}
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
    if (msg.message == WM_QUIT)
    {
		PostQuitMessage(static_cast<int>(msg.wParam));
    }
}

__forceinline bool ShouldBreak(const std::string& nodePathString, const unsigned short location)
{
	return isStepping && currentStackDepth <= steppingMinStackDepth || BreakpointMap.HasBreakPoint(nodePathString, location);
}

// ======================================================================
// ExecutionLoop detour
// ======================================================================
typedef void (*tNativeFunction) (UObject* Context, FFrame* Stack, void* Result);
void* ExecutionLoop = nullptr;
void ExecutionLoop_hook(UObject* Context, FFrame* Stack, void* Result, const tNativeFunction* GNatives)
{
	const auto node = Stack->Node;

	const auto nodePathString = std::string(node->GetFullPath());

	BYTE* beginOffset = node->Script.Data;

	DebuggerFrame debugFrame;
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

	BYTE buff[64];
	while (*Stack->Code != (BYTE)OpCodes::Return)
	{
		if (!pendingDetach)
		{
			const auto location = static_cast<USHORT>(Stack->Code - beginOffset);
			debugFrame.CurrentPosition = location;
			if (ShouldBreak(nodePathString, location))
			{
				breakState();
			}
		}
		const int idx = *Stack->Code++;
		GNatives[idx](Context, Stack, buff);
	}
	if (!pendingDetach)
	{
		const auto location = static_cast<USHORT>(Stack->Code - beginOffset);
		debugFrame.CurrentPosition = location;
		if (ShouldBreak(nodePathString, location))
		{
			breakState();
		}
	}
	Stack->Code++; //skip Return opcode
	const int idx = *Stack->Code++;
	GNatives[idx](Context, Stack, Result); //execute statement that places return value in Result

	DebuggerStack.pop();
	if (steppingMinStackDepth < 1)
	{
		steppingMinStackDepth = 1;
	}
}

bool PatchMemory(const void* patch, const SIZE_T patchSize)
{
	//make the memory we're going to patch writeable
	DWORD  oldProtect;
	if (!VirtualProtect(ExecutionLoop, patchSize, PAGE_EXECUTE_READWRITE, &oldProtect))
		return false;

	//overwrite with our patch
	memcpy(ExecutionLoop, patch, patchSize);

	//restore the memory's old protection level
	VirtualProtect(ExecutionLoop, patchSize, oldProtect, &oldProtect);
	FlushInstructionCache(GetCurrentProcess(), ExecutionLoop, patchSize);
	return true;
}

bool AttachDebugger()
{
	//This won't work properly until LEBinkProxy has been updated
	//if (const auto rc = ProxyInterface->InstallHook(SLHHOOK "CallFunction", CallFunction, CallFunction_hook, (void**)&CallFunction_orig);
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Attach - failed to hook CallFunction: %d / %s", rc, SPIReturnToString(rc));
	//	//return false;
	//}

	BYTE patch[] = { 
#if defined GAME_LE1
					0x4c, 0x8d, 0x0d, 0x5c, 0xf2, 0x5a, 0x01, //LEA R9, [GNatives] //load the address of the native function array into the 4th argument register
#elif defined GAME_LE2
					0x4c, 0x8d, 0x0d, 0x1c, 0x08, 0x5d, 0x01, //LEA R9, [GNatives] //load the address of the native function array into the 4th argument register
#elif defined GAME_LE3
					0x4c, 0x8d, 0x0d, 0x14, 0xf8, 0x6f, 0x01, //LEA R9, [GNatives] //load the address of the native function array into the 4th argument register
#endif
					0x4C, 0x8B, 0xC5, //MOV R8, RBP //Move the Result pointer into the 3rd argument register
					0x48, 0x8B, 0xD3, //MOV RDX, RBX //Move the FFrame pointer into the 2nd argument register
					0x48, 0x89, 0xF9, //MOV RCX, RDI //Move the this pointer into the 1st argument register
					0x49, 0xBE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, //MOV R14, 0xFFFFFFFFFFFFFFFF //put address of ExecutionLoop_hook into R14 (actual address filled in at runtime) 
					0x41, 0xFF, 0xD6,  //CALL R14 //Call ExecutionLoop_hook

					//remaining bytes are NOPs of various sizes: https://stackoverflow.com/questions/43991155/what-does-nop-dword-ptr-raxrax-x64-assembly-instruction-do/50594130#50594130
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
#if defined GAME_LE1 || defined GAME_LE2
					0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
					0x0F, 0x1F, 0x44, 0x00, 0x00
#elif defined GAME_LE3
					0x0F, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00
#endif
	};

	//place the absolute address of ExecutionLoop_hook into the patch
	void* funcPtr = ExecutionLoop_hook;
	memcpy(patch + 18, &funcPtr, sizeof(funcPtr));

	return PatchMemory(patch, sizeof(patch));
}

bool DetachDebugger()
{
	//This won't work properly until LEBinkProxy has been updated
	//if (const auto rc = ProxyInterface->UninstallHook(SLHHOOK "CallFunction");
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Detach - failed to unhook CallFunction: %d / %s", rc, SPIReturnToString(rc));
	//	//return false;
	//}

#if defined GAME_LE1
	const BYTE originalExecutionLoopBytes[] = { 0x4c, 0x8d, 0x35, 0x5c, 0xf2, 0x5a, 0x01, 0x80, 0x38, 0x04, 0x74, 0x30, 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8b, 0x43, 0x24, 0x4c, 0x8d, 0x44, 0x24, 0x30, 0x48, 0x8b, 0xd3, 0x0f, 0xb6, 0x08, 0x48, 0xff, 0xc0, 0x48, 0x89, 0x43, 0x24, 0x8b, 0xc1, 0x48, 0x8b, 0x4b, 0x1c, 0x41, 0xff, 0x14, 0xc6, 0x48, 0x8b, 0x43, 0x24, 0x80, 0x38, 0x04, 0x75, 0xd7, 0x48, 0xff, 0xc0, 0x4c, 0x8b, 0xc5, 0x48, 0x89, 0x43, 0x24, 0x48, 0x8b, 0xd3, 0x0f, 0xb6, 0x08, 0x48, 0xff, 0xc0, 0x48, 0x89, 0x43, 0x24, 0x8b, 0xc1, 0x48, 0x8b, 0x4b, 0x1c, 0x41, 0xff, 0x14, 0xc6, 0x48, 0x8b, 0x43, 0x24, 0x4c, 0x8b, 0xb4, 0x24, 0x80, 0x00, 0x00, 0x00, 0x80, 0x38, 0x41, 0x75, 0x17, 0x48, 0x8b, 0x4b, 0x1c, 0x48, 0xff, 0xc0, 0x4c, 0x8b, 0xc5, 0x48, 0x89, 0x43, 0x24, 0x48, 0x8b, 0xd3, 0xff, 0x15, 0xe6, 0xf3, 0x5a, 0x01 };
#elif defined GAME_LE2
	const BYTE originalExecutionLoopBytes[] = { 0x4c, 0x8d, 0x35, 0x1c, 0x08, 0x5d, 0x01, 0x80, 0x38, 0x04, 0x74, 0x30, 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x48, 0x8b, 0x43, 0x24, 0x4c, 0x8d, 0x44, 0x24, 0x30, 0x48, 0x8b, 0xd3, 0x0f, 0xb6, 0x08, 0x48, 0xff, 0xc0, 0x48, 0x89, 0x43, 0x24, 0x8b, 0xc1, 0x48, 0x8b, 0x4b, 0x1c, 0x41, 0xff, 0x14, 0xc6, 0x48, 0x8b, 0x43, 0x24, 0x80, 0x38, 0x04, 0x75, 0xd7, 0x48, 0xff, 0xc0, 0x4c, 0x8b, 0xc5, 0x48, 0x89, 0x43, 0x24, 0x48, 0x8b, 0xd3, 0x0f, 0xb6, 0x08, 0x48, 0xff, 0xc0, 0x48, 0x89, 0x43, 0x24, 0x8b, 0xc1, 0x48, 0x8b, 0x4b, 0x1c, 0x41, 0xff, 0x14, 0xc6, 0x48, 0x8b, 0x43, 0x24, 0x4c, 0x8b, 0xb4, 0x24, 0x80, 0x00, 0x00, 0x00, 0x80, 0x38, 0x41, 0x75, 0x17, 0x48, 0x8b, 0x4b, 0x1c, 0x48, 0xff, 0xc0, 0x4c, 0x8b, 0xc5, 0x48, 0x89, 0x43, 0x24, 0x48, 0x8b, 0xd3, 0xff, 0x15, 0xa6, 0x09, 0x5d, 0x01 };
#elif defined GAME_LE3
	const BYTE originalExecutionLoopBytes[] = { 0x4c, 0x8d, 0x35, 0x14, 0xf8, 0x6f, 0x01, 0x80, 0x38, 0x04, 0x74, 0x29, 0x48, 0x8b, 0x43, 0x28, 0x4c, 0x8d, 0x44, 0x24, 0x30, 0x48, 0x8b, 0xd3, 0x0f, 0xb6, 0x08, 0x48, 0xff, 0xc0, 0x48, 0x89, 0x43, 0x28, 0x8b, 0xc1, 0x48, 0x8b, 0x4b, 0x20, 0x41, 0xff, 0x14, 0xc6, 0x48, 0x8b, 0x43, 0x28, 0x80, 0x38, 0x04, 0x75, 0xd7, 0x48, 0xff, 0xc0, 0x4c, 0x8b, 0xc5, 0x48, 0x89, 0x43, 0x28, 0x48, 0x8b, 0xd3, 0x0f, 0xb6, 0x08, 0x48, 0xff, 0xc0, 0x48, 0x89, 0x43, 0x28, 0x8b, 0xc1, 0x48, 0x8b, 0x4b, 0x20, 0x41, 0xff, 0x14, 0xc6, 0x48, 0x8b, 0x43, 0x28, 0x4c, 0x8b, 0xb4, 0x24, 0x80, 0x00, 0x00, 0x00, 0x80, 0x38, 0x41, 0x75, 0x17, 0x48, 0x8b, 0x4b, 0x20, 0x48, 0xff, 0xc0, 0x4c, 0x8b, 0xc5, 0x48, 0x89, 0x43, 0x28, 0x48, 0x8b, 0xd3, 0xff, 0x15, 0xa5, 0xf9, 0x6f, 0x01 };
#endif
	
	return PatchMemory(originalExecutionLoopBytes, sizeof(originalExecutionLoopBytes));
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
		SendMsgToLEX(std::wstring(L"Attached"));
	}
	else if (pendingDetach)
	{
		pendingDetach = false;
		resume = false;
		BreakpointMap.ClearBreakPoints();
		DetachDebugger();
		SendMsgToLEX(std::wstring(L"Detached"));
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

// ProcessEvent hook
// ======================================================================
typedef void (*tProcessEvent)(UObject* Context, UFunction* Function, void* Parms, void* Result);
tProcessEvent ProcessEvent = nullptr;
tProcessEvent ProcessEvent_orig = nullptr;
void ProcessEvent_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
{
	
	ProcessEvent_orig(Context, Function, Parms, Result);
}


template<typename T>
T Read(BYTE* ptr, const int offset)
{
	return *reinterpret_cast<T*>(ptr + offset);
}

enum PipeCommands
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

void ProcessCommand(BYTE* str, DWORD len)
{
	switch (str[0])
	{
	case CMD_AttachDebugger:
		pendingAttach = true;
		break;
	case CMD_DetachDebugger:
		pendingDetach = true;
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
		isStepping = true;
		break;

	/*
	 * BreakState commands (must only be issued if debugger is in the break state)
	 */

	case CMD_StepInto:
		steppingMinStackDepth = INT_MAX;
		isStepping = true;
		resume = true;
		break;
	case CMD_StepOver:
		steppingMinStackDepth = currentStackDepth;
		isStepping = true;
		resume = true;
		break;
	case CMD_StepOut:
		steppingMinStackDepth = currentStackDepth - 1;
		isStepping = true;
		resume = true;
		break;
	case CMD_Resume:
		resume = true;
		break;
	}
}


SPI_IMPLEMENT_ATTACH
{
	//Common::OpenConsole();

	auto _ = SDKInitializer::Instance();

	ProxyInterface = InterfacePtr;


#if defined GAME_LE1
	char* ExecutionLoopPattern = "4c 8d 35 5c f2 5a 01 80 38 04 74 30 0f 1f 80 00 00 00 00";
#elif defined GAME_LE2
	char* ExecutionLoopPattern = "4c 8d 35 1c 08 5d 01 80 38 04 74 30 0f 1f 80 00 00 00 00";
#elif defined GAME_LE3
	char* ExecutionLoopPattern = "4c 8d 35 14 f8 6f 01 80 38 04 74 29 48 8b 43 28";
#endif

	if (const auto rc = InterfacePtr->FindPattern(&ExecutionLoop, ExecutionLoopPattern);
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to find ExecutionLoop pattern: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}

#if defined GAME_LE1
	char* GameEngineTickPattern = "48 8b c4 55 53 56 57 41 54 41 56 41 57 48 8d a8 e8 fd ff ff";
#elif defined GAME_LE2
	char* GameEngineTickPattern = "48 8b c4 55 56 57 41 54 41 55 41 56 41 57 48 8d a8 a8 fc ff ff";
#elif defined GAME_LE3
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

	/*if (auto rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&CallFunction), "40 55 53 56 57 41 54 41 55 41 56 41 57 48 81 EC A8 04 00 00 48 8D 6C 24 20 48 C7 45 68 FE FF FF FF");
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to find CallFunction pattern: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}*/



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

	/*INIT_FIND_PATTERN_POSTHOOK(ProcessEvent, LE_PATTERN_POSTHOOK_PROCESSEVENT);
	INIT_HOOK_PATTERN(ProcessEvent);*/


#if defined GAME_LE1
	auto pipeName = TEXT("\\\\.\\pipe\\LEX_LE1_SCRIPTDEBUG_PIPE");
#elif defined GAME_LE2
	auto pipeName = TEXT("\\\\.\\pipe\\LEX_LE2_SCRIPTDEBUG_PIPE");
#elif defined GAME_LE3
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