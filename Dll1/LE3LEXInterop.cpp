#include <stdio.h>
#include <io.h>
#include <string>
#include <fcntl.h>
#include <fstream>
#include <iostream>
#include <optional>
#include <ostream>
#include <streambuf>
#include <shlwapi.h>
#include <sstream>
#include <thread>

#include "Strsafe.h"
#include "../LE3-SDK/Interface.h"
#include "../LE3-SDK/Common.h"
#include "../LE3-SDK/ME3TweaksHeader.h"

#pragma comment(lib, "shlwapi.lib")

#define MYHOOK "LE3LEXInterop_"

SPI_PLUGINSIDE_SUPPORT(L"LE3 LEX Interop", L"1.0.0", L"ME3Tweaks", SPI_GAME_LE3, SPI_VERSION_ANY);
SPI_PLUGINSIDE_POSTLOAD;
SPI_PLUGINSIDE_ASYNCATTACH;

TCHAR SplashPath[MAX_PATH];
HANDLE hPipe;
LPOVERLAPPED pipeOverlap;
bool playerGPSActive;

optional<std::wstring> pendingConsoleCommand;

char* GetUObjectClassName(UObject* object)
{
	static char cOutBuffer[256];

	sprintf_s(cOutBuffer, "%s", object->Class->GetName());

	return cOutBuffer;
}

char* GetContainingMapName(UObject* object)
{
	if (object->Class && object->Outer)
	{
		class UObject* OuterObj = object->Outer;
		static std::string lastName = "Undefined";
		UINT32 lastIndex = -1;
		while (OuterObj->Class && OuterObj->Outer)
		{
			lastName = OuterObj->Outer->GetName();
			lastIndex = OuterObj->Outer->Name.Number;

			OuterObj = OuterObj->Outer;
		}
		if (lastIndex > 0) {
			lastIndex--; //Subtract 1 to match filesystem indexing
			lastName += "_" + std::to_string(lastIndex);
		}
		return (char*)lastName.c_str();
	}
	return "(null)";
}

wchar_t msgBuffer[512];
wchar_t* msgPtr;
int writePos = 0;
void WriteToMsgBuffer(const wchar_t* wstr, const int len, const bool msgStart = false) {
	if (msgStart)
	{
		if (writePos > 400)
		{
			writePos = 0;
		}
		msgPtr = msgBuffer + writePos;
	}
	else
	{
		msgBuffer[writePos] = ' ';
		writePos++;
	}
	for (auto i = 0; i < len && wstr[i] != 0 && writePos < 512; i++, writePos++)
	{
		msgBuffer[writePos] = wstr[i];
	}
}

void WriteToMsgBuffer(const FString& fstr, const bool msgStart = false) {
	WriteToMsgBuffer(fstr.Data, fstr.Count, msgStart);
}

void WriteToMsgBuffer(wstring wstr, const bool msgStart = false) {
	WriteToMsgBuffer(wstr.c_str(), wstr.length(), msgStart);
}

struct ME3ExpMsg
{
	wchar_t msg[100];
};

void SendMessageToLEX(USequenceOp* op)
{
	const auto numVarLinks = op->VariableLinks.Num();
	for (auto i = 0; i < numVarLinks; i++)
	{
		const auto& varLink = op->VariableLinks(i);
		for (auto j = 0; j < varLink.LinkedVariables.Count; ++j)
		{
			const auto seqVar = varLink.LinkedVariables(j);
			if (!_wcsnicmp(varLink.LinkDesc.Data, L"MessageName", 12) && IsA<USeqVar_String>(seqVar))
			{
				const USeqVar_String* strVar = static_cast<USeqVar_String*>(seqVar);
				WriteToMsgBuffer(strVar->StrValue, true);
			}
			else if (!_wcsnicmp(varLink.LinkDesc.Data, L"String", 7) && IsA<USeqVar_String>(seqVar))
			{
				const USeqVar_String* strVar = static_cast<USeqVar_String*>(seqVar);
				WriteToMsgBuffer(L"string", 7);
				WriteToMsgBuffer(strVar->StrValue);
			}
			else if (!_wcsnicmp(varLink.LinkDesc.Data, L"Vector", 7) && IsA<USeqVar_Vector>(seqVar))
			{
				const USeqVar_Vector* vectorVar = static_cast<USeqVar_Vector*>(seqVar);
				WriteToMsgBuffer(L"vector", 7);
				WriteToMsgBuffer(to_wstring(vectorVar->VectValue.X));
				WriteToMsgBuffer(to_wstring(vectorVar->VectValue.Y));
				WriteToMsgBuffer(to_wstring(vectorVar->VectValue.Z));
			}
			else if (!_wcsnicmp(varLink.LinkDesc.Data, L"Float", 5) && IsA<USeqVar_Float>(seqVar))
			{
				const USeqVar_Float* floatVar = static_cast<USeqVar_Float*>(seqVar);
				WriteToMsgBuffer(L"float", 6);
				WriteToMsgBuffer(to_wstring(floatVar->FloatValue));
			}
			else if (!_wcsnicmp(varLink.LinkDesc.Data, L"Int", 3) && IsA<USeqVar_Int>(seqVar))
			{
				const USeqVar_Int* intVar = static_cast<USeqVar_Int*>(seqVar);
				WriteToMsgBuffer(L"int", 4);
				WriteToMsgBuffer(to_wstring(intVar->IntValue));
			}
			else if (!_wcsnicmp(varLink.LinkDesc.Data, L"Bool", 4) && IsA<USeqVar_Bool>(seqVar))
			{
				const USeqVar_Bool* boolVar = static_cast<USeqVar_Bool*>(seqVar);
				WriteToMsgBuffer(L"bool", 5);
				WriteToMsgBuffer(to_wstring(boolVar->bValue));
			}
		}
	}
	msgBuffer[writePos] = 0;
	writePos++;
	auto handle = FindWindow(nullptr, L"Legendary Explorer");
	if (handle)
	{
		constexpr unsigned long SENT_FROM_LE1 = 0x02AC00C7;
		ME3ExpMsg msg;
		const auto len = writePos - (msgPtr - msgBuffer);
		wcsncpy_s(msg.msg, msgPtr, len);
		COPYDATASTRUCT cds;
		ZeroMemory(&cds, sizeof(COPYDATASTRUCT));
		cds.dwData = SENT_FROM_LE1;
		cds.cbData = sizeof(msg);
		cds.lpData = &msg;
		SendMessageTimeout(handle, WM_COPYDATA, NULL, reinterpret_cast<LPARAM>(&cds), 0, 10, nullptr);
	}
}

void SendStringToLEX(wstring wstr) {
	WriteToMsgBuffer(wstr, true);
	msgBuffer[writePos] = 0;
	writePos++;
	auto handle = FindWindow(nullptr, L"Legendary Explorer");
	if (handle)
	{
		constexpr unsigned long SENT_FROM_LE3 = 0x02AC00C5;
		ME3ExpMsg msg;
		const auto len = writePos - (msgPtr - msgBuffer);
		wcsncpy_s(msg.msg, msgPtr, len);
		COPYDATASTRUCT cds;
		ZeroMemory(&cds, sizeof(COPYDATASTRUCT));
		cds.dwData = SENT_FROM_LE3;
		cds.cbData = sizeof(msg);
		cds.lpData = &msg;
		SendMessageTimeout(handle, WM_COPYDATA, NULL, reinterpret_cast<LPARAM>(&cds), 0, 10, nullptr);
	}
}

TArray<UObject*> Actors;

void DumpActors(USequenceOp* const op)
{
	const auto numVarLinks = op->VariableLinks.Num();
	const auto objCount = UObject::GObjObjects()->Count;
	const auto objArray = UObject::GObjObjects()->Data;

	Actors.Count = 0; //clear the array without de-allocating any memory.
	ofstream ofs;
	ofs.open(SplashPath);
	const auto actorClass = AActor::StaticClass();
	for (auto j = 0; j < objCount; j++)
	{
		auto obj = objArray[j];
		if (obj && obj->IsA(actorClass))
		{
			auto actor = static_cast<AActor*>(obj);
			const auto name = actor->Name.GetName();
			if (strstr(name, "Default_"))// || actor->bStatic || !actor->bMovable)
			{
				continue;
			}
			Actors.Add(actor);
			ofs << GetContainingMapName(actor) << ":" << name;
			const auto index = actor->Name.Number;
			if (index > 0)
			{
				ofs << '_' << index - 1;
			}
			if (actor->bStatic || !actor->bMovable)
			{
				ofs << ":static";
			}
			ofs << endl;
		}
	}
	ofs.close();

	for (auto i = 0; i < numVarLinks; i++)
	{

		if (op->VariableLinks(i).LinkedVariables.Count == 0)
		{
			continue;
		}
		const auto seqVar = op->VariableLinks(i).LinkedVariables(0);
		if (!_wcsnicmp(op->VariableLinks(i).LinkDesc.Data, L"Length", 7) && IsA<USeqVar_Int>(seqVar))
		{
			const auto lenVar = static_cast<USeqVar_Int*>(seqVar);
			lenVar->IntValue = Actors.Count;
			break;
		}
	}
}

void AccessDumpedActorsList(USequenceOp* const op)
{
	const auto numVarLinks = op->VariableLinks.Num();
	int index = 0;
	for (auto i = 0; i < numVarLinks; i++)
	{
		if (op->VariableLinks(i).LinkedVariables.Count == 0)
		{
			continue;
		}
		const auto seqVar = op->VariableLinks(i).LinkedVariables(0);
		if (!_wcsnicmp(op->VariableLinks(i).LinkDesc.Data, L"Index", 5) && IsA<USeqVar_Int>(seqVar))
		{
			const auto idxVar = static_cast<USeqVar_Int*>(seqVar);
			index = idxVar->IntValue;
		}
		if (!_wcsnicmp(op->VariableLinks(i).LinkDesc.Data, L"Output Object", 15) && IsA<USeqVar_Object>(seqVar))
		{
			const auto outputVar = static_cast<USeqVar_Object*>(seqVar);
			if (index >= 0 && index < Actors.Count)
			{
				outputVar->ObjValue = Actors(index);
			}
			else
			{
				outputVar->ObjValue = nullptr;
			}
		}
	}
}

float ToRadians(const int unrealRotationUnits)
{
	return unrealRotationUnits * 360.0f / 65536.0f * 3.1415926535897931f / 180.0f;
}

FTPOV cachedPOV;
void GetCamPOV(USequenceOp* const op)
{
	const auto numVarLinks = op->VariableLinks.Num();
	for (auto i = 0; i < numVarLinks; i++)
	{

		if (op->VariableLinks(i).LinkedVariables.Count == 0)
		{
			continue;
		}
		const auto seqVar = op->VariableLinks(i).LinkedVariables(0);
		if (!_wcsnicmp(op->VariableLinks(i).LinkDesc.Data, L"Position", 10) && IsA<USeqVar_Vector>(seqVar))
		{
			const auto posVar = static_cast<USeqVar_Vector*>(seqVar);
			posVar->VectValue = cachedPOV.location;
		}
		else if (!_wcsnicmp(op->VariableLinks(i).LinkDesc.Data, L"Rotation", 10) && IsA<USeqVar_Vector>(seqVar))
		{
			const auto pitch = ToRadians(cachedPOV.Rotation.Pitch);
			const auto yaw = ToRadians(cachedPOV.Rotation.Yaw);
			const auto cp = cos(pitch);
			const auto sp = sin(pitch);
			const auto cy = cos(yaw);
			const auto sy = sin(yaw);
			FVector rotVect;
			rotVect.X = cp * cy;
			rotVect.Y = cp * sy;
			rotVect.Z = sp;

			auto* rotVar = static_cast<USeqVar_Vector*>(seqVar);
			rotVar->VectValue = rotVect;
		}
	}
}


// ProcessEvent hook
// ======================================================================

typedef void (*tProcessEvent)(UObject* Context, UFunction* Function, void* Parms, void* Result);
tProcessEvent ProcessEvent = nullptr;

tProcessEvent ProcessEvent_orig = nullptr;
void ProcessEvent_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
{
	//const auto className = Context->Class->Name.GetName();
	//if (!strcmp(className, "SeqAct_SendMessageToLEX"))
	//{
	//	if (!strcmp(Function->GetFullName(), "Function Engine.SequenceOp.Activated"))
	//	{
	//		const auto op = static_cast<USequenceOp*>(Context);
	//		SendMessageToLEX(op);
	//	}
	//}
	//else if (!strcmp(className, "SeqAct_LEXDumpActors"))
	//{
	//	if (!strcmp(Function->GetFullName(), "Function Engine.SequenceOp.Activated"))
	//	{
	//		const auto op = static_cast<USequenceOp*>(Context);
	//		DumpActors(op);
	//	}
	//}
	//else if (!strcmp(className, "SeqAct_LEXAccessDumpedActorsList"))
	//{
	//	if (!strcmp(Function->GetFullName(), "Function Engine.SequenceOp.Activated"))
	//	{
	//		const auto op = static_cast<USequenceOp*>(Context);
	//		AccessDumpedActorsList(op);
	//	}
	//}
	//else if (!strcmp(className, "SeqAct_LEXGetPlayerCamPOV"))
	//{
	//	if (!strcmp(Function->GetFullName(), "Function Engine.SequenceOp.Activated"))
	//	{
	//		const auto op = static_cast<USequenceOp*>(Context);
	//		GetCamPOV(op);
	//	}
	//}
	//else
	//	
		if (IsA<ABioPlayerController>(Context) && strcmp(Function->GetName(), "PlayerTick") == 0)
	{
		const auto playerController = dynamic_cast<ABioPlayerController*>(Context);
		cachedPOV = playerController->PlayerCamera->CameraCache.POV;

		// PLAYER GPS
		if (hPipe != NULL && playerGPSActive && playerController->Pawn != nullptr)
		{
			// What happens when you don't have an interpolation method
			std::wstringstream ss;
			ss << "PLAYERLOC=" << playerController->Pawn->location.X << "," << playerController->Pawn->location.Y << "," << playerController->Pawn->location.Z;
			SendStringToLEX(ss.str());

			std::wstringstream ss2;
			ss2 << "PLAYERROT=" << playerController->Pawn->Rotation.Pitch << "," << playerController->Pawn->Rotation.Yaw << "," << playerController->Pawn->Rotation.Roll;
			SendStringToLEX(ss2.str());
		}

		if (pendingConsoleCommand.has_value())
		{
			auto str = pendingConsoleCommand.value().data();
			playerController->ConsoleCommand(str, 0);
			//writeln("Ran CE!");
			pendingConsoleCommand.reset(); // Clear
		}
	}
	ProcessEvent_orig(Context, Function, Parms, Result);
}

bool startsWith(const char* pre, const char* str)
{
	size_t lenpre = strlen(pre),
		lenstr = strlen(str);
	return lenstr < lenpre ? false : memcmp(pre, str, lenpre) == 0;
}

char* substr(char* arr, int begin, int len)
{
	char* res = new char[len + 1];
	for (int i = 0; i < len; i++)
		res[i] = *(arr + begin + i);
	res[len] = 0;
	return res;
}

void ProcessCommand(char str[1024], DWORD dword)
{
	writeln("Received command:");
	printf(str);
	printf("\n");
	if (strcmp(str, "ACTIVATE_PLAYERGPS\r\n") == 0)
	{
		playerGPSActive = true;
	}
	else if (strcmp(str, "DEACTIVATE_PLAYERGPS\r\n") == 0)
	{
		playerGPSActive = false;
	}
	else if (startsWith("CAUSEEVENT ", str))
	{
		auto eventName = substr(str, 11, strlen(str) - 13); // +2 for \r\n
		printf(eventName);
		auto bioWorldInfo = reinterpret_cast<ABioWorldInfo*>(FindObjectOfType(ABioWorldInfo::StaticClass()));
		if (bioWorldInfo)
		{
			FName foundName;
			if (FName::TryFind(eventName, 0, &foundName))
			{
				auto localPlayerController = bioWorldInfo->GetLocalPlayerController();
				if (localPlayerController) {
					std::wstringstream ss;
					ss << "ce " << eventName;
					pendingConsoleCommand.emplace(ss.str());
				}
			}
			else
			{
				writeln("Name not found");
			}
		}
		else
		{
			writeln("No BioWorldInfo");
		}
	}
}


SPI_IMPLEMENT_ATTACH
{
	Common::OpenConsole();

	std::this_thread::sleep_for(std::chrono::seconds(10));
	INIT_CHECK_SDK();
	INIT_FIND_PATTERN_POSTHOOK(ProcessEvent, LE_PATTERN_POSTHOOK_PROCESSEVENT);
	INIT_HOOK_PATTERN(ProcessEvent);

	// MGAMERZ PIPIN'
	char buffer[1024];
	DWORD dwRead;


	hPipe = CreateNamedPipe(TEXT("\\\\.\\pipe\\LEX_LE3_COMM_PIPE"),
		PIPE_ACCESS_DUPLEX,
		PIPE_TYPE_BYTE | PIPE_READMODE_BYTE | PIPE_WAIT,   // FILE_FLAG_FIRST_PIPE_INSTANCE is not needed but forces CreateNamedPipe(..) to fail if the pipe already exists...
		1,
		1024 * 16,
		1024 * 16,
		NMPWAIT_USE_DEFAULT_WAIT,
		NULL);

	if (hPipe != nullptr)
		writeln("PIPED UP");
	else
		writeln("COULD NOT CREATE INTEROP PIPE");

	while (hPipe != INVALID_HANDLE_VALUE)
	{
		if (ConnectNamedPipe(hPipe, NULL) != FALSE)   // wait for someone to connect to the pipe
		{
			while (ReadFile(hPipe, buffer, sizeof(buffer) - 1, &dwRead, NULL) != FALSE)
			{
				/* add terminating zero */
				buffer[dwRead] = '\0';
				ProcessCommand(buffer, dwRead);
			}
		}

		//writeln("FLUSHING THE PIPES AWAY");
		DisconnectNamedPipe(hPipe);
	}

	return true;
}

SPI_IMPLEMENT_DETACH
{
	Common::CloseConsole();
	return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  reason, LPVOID) {
	if (reason == DLL_PROCESS_ATTACH)
	{
		GetModuleFileName(hModule, SplashPath, MAX_PATH);
		PathRemoveFileSpec(SplashPath);
		PathRemoveFileSpec(SplashPath);
		StringCchCat(SplashPath, MAX_PATH, L"\\ME3ExpActorDump.txt");
	}

	return TRUE;
}
