#include <stdio.h>
#include <io.h>
#include <string>
#include <fstream>
#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <set>

#include "../LE3-SDK/Interface.h"
#include "../LE3-SDK/Common.h"
#include "../LE3-SDK/ME3TweaksHeader.h"
//#include "LoggingHooks.h"

#define MYHOOK "DebugLogger_"

SPI_PLUGINSIDE_SUPPORT(L"DebugLogger", L"2.0", L"ME3Tweaks", SPI_GAME_LE3, SPI_VERSION_LATEST);
SPI_PLUGINSIDE_PRELOAD;
SPI_PLUGINSIDE_SEQATTACH;

ME3TweaksASILogger logger("DebugLogger v2", "DebugLogger.txt");

// Original Func
typedef void (WINAPI* tOutputDebugStringW)(LPCWSTR lpcszString);
tOutputDebugStringW OutputDebugStringW_Orig = nullptr;

// Our replacement
void WINAPI OutputDebugStringW_Hook(LPCWSTR lpcszString)
{
	OutputDebugStringW_Orig(lpcszString);
	writeMsg(L"%s", lpcszString); // string already has a newline on the end
	logger.writeWideToLog(std::wstring_view{ lpcszString });
	logger.flush();
}


// ProcessEvent hook
typedef void (*tProcessEvent)(UObject* Context, UFunction* Function, void* Parms, void* Result);
tProcessEvent ProcessEvent = nullptr;
tProcessEvent ProcessEvent_orig = nullptr;

void ProcessEvent_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
{
	// LOGGING OTHER STUFF
	auto funcFullName = Function->GetFullName();
	if (!strcmp(funcFullName, "Function GameFramework.GameAIController.AILog_Internal"))
	{
		auto rparms = reinterpret_cast<AGameAIController_eventAILog_Internal_Parms*>(Parms);
		writeln(L"AILog: [%hs] %s", rparms->LogCategory.GetName(), rparms->LogText.Data);
		logger.writeWideLineToLog(wstring_format(L"AILog: [%hs] %s", rparms->LogCategory.GetName(), rparms->LogText.Data));
	}
	/*else if (!isPartOf(funcFullName, "Blaze") && isPartOf(funcFullName, "Log"))
	{
		writeln("%hs", funcFullName);
	}*/
	ProcessEvent_orig(Context, Function, Parms, Result);

}

typedef UObject* (*tCreateImport)(ULinkerLoad* Context, int UIndex);
tCreateImport CreateImport = nullptr;
tCreateImport CreateImport_orig = nullptr;
UObject* CreateImport_hook(ULinkerLoad* Context, int i)
{
	UObject* object = CreateImport_orig(Context, i);
	if (object == nullptr)
	{
		FObjectImport importEntry = Context->ImportMap(i);
		writeln("Could not resolve #%d: %hs (%hs) in file: %s", -i - 1, importEntry.ObjectName.GetName(), importEntry.ClassName.GetName(), Context->Filename.Data);
		logger.writeWideLineToLog(wstring_format(L"Could not resolve #%d: %hs (%hs) in file: %s", -i - 1, importEntry.ObjectName.GetName(), importEntry.ClassName.GetName(), Context->Filename.Data));
		logger.flush();
	}
	return object;
}

typedef UObject* (*tLoadPackagePersistent)(int64 param1, const wchar_t* param2, uint32 param3, int64* param4, uint32* param5);
tLoadPackagePersistent LoadPackagePersistent = nullptr;
tLoadPackagePersistent LoadPackagePersistent_orig = nullptr;
void LoadPackagePersistent_hook(int64 param1, const wchar_t* packageName, uint32 param3, int64* param4, uint32* param5)
{
	writeln("PERSISTENTPACKAGELOAD: %s", (void*)packageName, packageName);
	LoadPackagePersistent_orig(param1, packageName, param3, param4, param5);
	//std::this_thread::sleep_for(std::chrono::seconds(1000));

	/*UObject* object = CreateImport_orig(Context, i);
	if (object == nullptr)
	{
		FObjectImport importEntry = Context->ImportMap(i);
		writeln("Could not resolve #%d: %hs (%hs) in file: %s", -i - 1, importEntry.ObjectName.GetName(), importEntry.ClassName.GetName(), Context->Filename.Data);
		logger.writeWideLineToLog(wstring_format(L"Could not resolve #%d: %hs (%hs) in file: %s", -i - 1, importEntry.ObjectName.GetName(), importEntry.ClassName.GetName(), Context->Filename.Data));
		logger.flush();
	}*/
}

typedef UObject* (*tLoadPackage)(int64 param1, short* param2, void* param3, void* param4, void* param5, void* param6);
tLoadPackage LoadPackage = nullptr;
tLoadPackage LoadPackage_orig = nullptr;
void LoadPackage_hook(int64 param1, short* param2, void* param3, wchar_t* param4, void* param5, void* param6)
{
	//std::this_thread::sleep_for(std::chrono::seconds(8));
	writeln("PACKAGELOAD %s", param4);


	LoadPackage_orig(param1, param2, param3, param4, param5, param6);
	//writeln("PACKAGELOAD: %s", (void*)packageName, packageName);
	//LoadPackage_orig(param1, packageName, param3, param4, param5);

	/*UObject* object = CreateImport_orig(Context, i);
	if (object == nullptr)
	{
		FObjectImport importEntry = Context->ImportMap(i);
		writeln("Could not resolve #%d: %hs (%hs) in file: %s", -i - 1, importEntry.ObjectName.GetName(), importEntry.ClassName.GetName(), Context->Filename.Data);
		logger.writeWideLineToLog(wstring_format(L"Could not resolve #%d: %hs (%hs) in file: %s", -i - 1, importEntry.ObjectName.GetName(), importEntry.ClassName.GetName(), Context->Filename.Data));
		logger.flush();
	}*/
}

typedef void (*tAppAssertFailed)(char* logFuncName, char* sourceFileName, short errorCode, wchar_t* message);
tAppAssertFailed appAssertFailed = nullptr;
tAppAssertFailed appAssertFailed_orig = nullptr;
void appAssertFailed_Hook(char* logFuncName, char* sourceFileName, short errorCode, wchar_t* message)
{
	//std::this_thread::sleep_for(std::chrono::seconds(8));
	writeln("Assert Failed %hs %hs %hi %s", logFuncName, sourceFileName, errorCode, message);
	appAssertFailed_orig(logFuncName, sourceFileName, errorCode, message);
}

struct OutParmInfo
{
	UProperty* Prop;
	BYTE* PropAddr;
	OutParmInfo* Next;
};

struct LE3FFrame
{
	void* vtable; // 0x8
	//int unks[3]; // 0x1C 0x20 0x24
	UStruct* Node; // 0x2C
	UObject* Object; // 0x34
	BYTE* Code; // 0x3C
	BYTE* Locals; // 0x44
	LE3FFrame* PreviousFrame; // 0x4C
	OutParmInfo* OutParms; // 0x54
};

struct LE3FFrameHACK
{
	void* vtable; // 0x0
	int unknown[6]; // 0x08 0x0C 0x10 0x14 0x18 0x1C
	UObject* Object; // 0x20
	BYTE* Code; // 0x28
	// No idea what this other stuff is
};

typedef void (*tNativeFunction) (UObject* Context, LE3FFrame* Stack, void* Result);
tNativeFunction* GNatives = (tNativeFunction*)0x7ff74c084bb0; // monkaS

typedef wchar_t* (*tLogInternalNative)(UObject* callingObject, LE3FFrameHACK* param2);
tLogInternalNative LogInternal = nullptr;
tLogInternalNative LogInternal_orig = nullptr;
void LogInternal_hook(UObject* callingObject, LE3FFrameHACK* stackFrame)
{
	// 0x20 = Object?
	// 0x28 = Code?
	// 0x2C = ??
	// 0x38 = PreviousFrame?
	//BYTE* originalCodePointer = ((BYTE*)stackFrame + 0x28);//->Code;
	//BYTE nativeIndex = **(BYTE**)((BYTE*)stackFrame + 0x28);
	//*((BYTE*)stackFrame + 0x28) = *((BYTE*)stackFrame + 0x28) + 1;
	////stackFrame->Code++;
	//FString stringArg;
	//UObject* sfObject = (UObject*)((BYTE*)stackFrame + 0x20);
	//GNatives[nativeIndex](sfObject, (LE3FFrame*)stackFrame, &stringArg);

	////log stringArg somehow
	//writeln(L"LogInternal() from %hs: %s", callingObject->GetFullName(), stringArg.Data);

	////restore the code pointer so LogInternal executes normally.
	////stackFrame->Code = originalCodePointer;
	//*((BYTE*)stackFrame + 0x28) = *originalCodePointer;
	//LogInternal_orig(callingObject, stackFrame);

	BYTE* originalCodePointer = stackFrame->Code;
	BYTE nativeIndex = *originalCodePointer++;
	FString stringArg;
	UObject* sfObject = stackFrame->Object;
	GNatives[nativeIndex](sfObject, (LE3FFrame*)stackFrame, &stringArg);

	//log stringArg somehow
	writeln(L"LogInternal() from %hs: %s", callingObject->GetFullName(), stringArg.Data);

	//restore the code pointer so LogInternal executes normally.
	//stackFrame->Code = originalCodePointer;
	stackFrame->Code = originalCodePointer;
	LogInternal_orig(callingObject, stackFrame);
}

// A prototype of UFunction::Bind method used to
// bind UScript functions to native implementations.
typedef void(__thiscall* tUFunctionBind)(void* pFunction);
tUFunctionBind UFunctionBind = nullptr;
tUFunctionBind UFunctionBind_orig = nullptr;

set<void*> nativeSet;

void HookedUFunctionBind(UFunction* functionObj)
{
	UFunctionBind_orig(functionObj);
	if (functionObj->FunctionFlags & 0x400) { // NATIVE
		auto retVal = nativeSet.insert(functionObj->Func);
		if (retVal.second) {
			// Not really sure how to get the parent name...
			auto name = functionObj->GetFullName();
			auto finalAddr = (unsigned long long)functionObj->Func;
			writeln(L"%hs = 0x%p", name, finalAddr);
			logger.writeToLog(string_format("%s = 0x%p", name, finalAddr), false, true);
		}
	}
	else
	{
		writeln(L"NOT NATIVE: %hs", functionObj->GetFullName());
	}
}








SPI_IMPLEMENT_ATTACH
{
	Common::OpenConsole();
	writeln(L"Initializing DebugLogger...");

	INIT_CHECK_SDK();

	// HOOK UFUNCTION BIND FOR TESTING

	//writeln(L"Initializing UFunction::Bind hook...");
	//if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&UFunctionBind), "48 8B C4 55 41 56 41 57 48 8D A8 78 F8 FF FF 48 81 EC 70 08 00 00 48 C7 44 24 50 FE FF FF FF 48 89 58 10 48 89 70 18 48 89 78 20 48 8B ?? ?? ?? ?? ?? 48 33 C4 48 89 85 60 07 00 00 48 8B F1 E8 ?? ?? ?? ?? 48 8B F8 F7 86");
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Attach - failed to find UFunction::Bind pattern: %d / %s", rc, SPIReturnToString(rc));
	//	return false;
	//}
	//if (auto const rc = InterfacePtr->InstallHook(MYHOOK "UFunction::Bind", UFunctionBind, HookedUFunctionBind, reinterpret_cast<void**>(&UFunctionBind_orig));
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Attach - failed to hook UFunction::Bind: %d / %s", rc, SPIReturnToString(rc));
	//	return false;
	//}
	//writeln(L"Hooked UFunction::Bind");



	if (auto rc = InterfacePtr->InstallHook("OutputDebugStringW", (void*)OutputDebugStringW, (void*)OutputDebugStringW_Hook, (void**)&OutputDebugStringW_Orig);
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to hook OutputDebugStringW: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}
	writeln(L"Initialized DebugLogger");

	writeln(L"Initializing CreateImport hook...");
	if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&CreateImport), "48 8b c4 55 41 54 41 55 41 56 41 57 48 8b ec 48 83 ec 70 48 c7 45 d0 fe ff ff ff 48 89 58 10 48 89 70 18 48 89 78 20 4c 63 e2");
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to find CreateImport pattern: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}
	if (auto const rc = InterfacePtr->InstallHook(MYHOOK "CreateImport", CreateImport, CreateImport_hook, reinterpret_cast<void**>(&CreateImport_orig));
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to hook CreateImport: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}
	writeln(L"Hooked CreateImport");

	// LOAD PACKAGE PERSISTENT ----------------------------------------------------------------
	writeln(L"Initializing LoadPackagePersistent hook...");
	if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&LoadPackagePersistent), "40 53 56 57 41 54 41 55 41 56 41 57 48 81 ec e0 02 00 00 48 c7 84 24 b8 00 00 00");
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to find LoadPackagePersistent pattern: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}

	if (auto const rc = InterfacePtr->InstallHook(MYHOOK "LoadPackagePersistent", LoadPackagePersistent, LoadPackagePersistent_hook, reinterpret_cast<void**>(&LoadPackagePersistent_orig));
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to hook LoadPackagePersistent: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}
	writeln(L"Hooked LoadPackagePersistent");


	// LOAD PACKAGE VTABLE ----------------------------------------------------------------
	//writeln(L"Initializing LoadPackage hook...");
	//if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&LoadPackage), "4c 89 4c 24 20 48 89 4c 24 08 55 56 57 41 54 41 55 41 56 41 57 48 8b ec 48 81 ec 80 00 00 00 48 c7 45 b8 fe ff ff ff" /*53 56 57 41 54 41 55 41 56 41 57 48 81 ec e0 02 00 00 48 c7 84 24 b8 00 00 00"*/);
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Attach - failed to find LoadPackage pattern: %d / %s", rc, SPIReturnToString(rc));
	//	return false;
	//}

	//if (auto const rc = InterfacePtr->InstallHook(MYHOOK "LoadPackage", LoadPackage, LoadPackage_hook, reinterpret_cast<void**>(&LoadPackage_orig));
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Attach - failed to hook LoadPackage: %d / %s", rc, SPIReturnToString(rc));
	//	return false;
	//}
	//writeln(L"Hooked LoadPackage");

	// appAssertFailedHook ----------------------------------------------------------------
	//writeln(L"Initializing appAsssertFailedHook...");
	//if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&appAssertFailed), "4c 89 4c 24 20 53 55 56 57 b8 78 22 00 00 e8 dd 19 eb 00 48 2b e0 48 c7 44 24 30 fe ff ff ff");
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Attach - failed to find appAssertFailed pattern: %d / %s", rc, SPIReturnToString(rc));
	//	return false;
	//}

	//if (auto const rc = InterfacePtr->InstallHook(MYHOOK "appAssertFailed", appAssertFailed, appAssertFailed_Hook, reinterpret_cast<void**>(&appAssertFailed_orig));
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Attach - failed to hook appAssertFailed: %d / %s", rc, SPIReturnToString(rc));
	//	return false;
	//}
	//writeln(L"Hooked appAssertFailed");


	//	writeln(L"Initializing appAsssertFailedHook...");
	//if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&appAssertFailed), "4c 89 4c 24 20 53 55 56 57 b8 78 22 00 00 e8 dd 19 eb 00 48 2b e0 48 c7 44 24 30 fe ff ff ff");
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Attach - failed to find appAssertFailed pattern: %d / %s", rc, SPIReturnToString(rc));
	//	return false;
	//}

	//if (auto const rc = InterfacePtr->InstallHook(MYHOOK "appAssertFailed", appAssertFailed, appAssertFailed_Hook, reinterpret_cast<void**>(&appAssertFailed_orig));
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Attach - failed to hook appAssertFailed: %d / %s", rc, SPIReturnToString(rc));
	//	return false;
	//}
	//writeln(L"Hooked appAssertFailed");


	INIT_FIND_PATTERN_POSTHOOK(LogInternal, /*"40 57 48 83 ec */"40 48 c7 44 24 20 fe ff ff ff 48 89 5c 24 50 48 89 74 24 60 48 8b da 33 f6 48 89 74 24 28 48 89 74 24 30");
	INIT_HOOK_PATTERN(LogInternal);

	// ==============================================================
	// FConfig::CombineFromBuffer
	// ==============================================================
	//writeln(L"Locating FConfig::CombineFromBuffer...");
	//if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&FConfigCombineFromBuffer), "40 55 56 57 41 54 41 55 41 56 41 57 48 8d ac 24 e0 fe ff ff 48 81 ec 20 02 00 00 48 c7 85 b8 00 00 00 fe ff ff ff");
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Failed to find FConfig::CombineFromBuffer pattern: %d / %s", rc, SPIReturnToString(rc));
	//	//return false;
	//}
	//else if (auto const rc = InterfacePtr->InstallHook(MYHOOK "FConfigCombineFromBuffer", FConfigCombineFromBuffer, FConfigCombineFromBuffer_hook, reinterpret_cast<void**>(&FConfigCombineFromBuffer_orig));
	//	rc != SPIReturn::Success)
	//{
	//	writeln(L"Attach - failed to hook FConfigCombineFromBuffer: %d / %s", rc, SPIReturnToString(rc));
	//	//return false;
	//}
	//else
	//{
	//	writeln(L"Hooked FConfigCombineFromBuffer");
	//}

	INIT_FIND_PATTERN_POSTHOOK(ProcessEvent, LE_PATTERN_POSTHOOK_PROCESSEVENT);
	INIT_HOOK_PATTERN(ProcessEvent);

	return true;
}


SPI_IMPLEMENT_DETACH
{
	//DebugActiveProcessStop(GetCurrentProcessId());
	Common::CloseConsole();
	logger.close();
	return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  reason, LPVOID) {
	if (reason == DLL_PROCESS_DETACH)
	{
		logger.close();
	}

	return TRUE;
}