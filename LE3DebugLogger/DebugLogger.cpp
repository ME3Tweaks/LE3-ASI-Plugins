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
	} else
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

	writeln(L"Initializing UFunction::Bind hook...");
	if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&UFunctionBind), "48 8B C4 55 41 56 41 57 48 8D A8 78 F8 FF FF 48 81 EC 70 08 00 00 48 C7 44 24 50 FE FF FF FF 48 89 58 10 48 89 70 18 48 89 78 20 48 8B ?? ?? ?? ?? ?? 48 33 C4 48 89 85 60 07 00 00 48 8B F1 E8 ?? ?? ?? ?? 48 8B F8 F7 86");
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to find UFunction::Bind pattern: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}
	if (auto const rc = InterfacePtr->InstallHook(MYHOOK "UFunction::Bind", UFunctionBind, HookedUFunctionBind, reinterpret_cast<void**>(&UFunctionBind_orig));
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to hook UFunction::Bind: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}
	writeln(L"Hooked UFunction::Bind");



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
	writeln(L"Initializing appAsssertFailedHook...");
	if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&appAssertFailed), "4c 89 4c 24 20 53 55 56 57 b8 78 22 00 00 e8 dd 19 eb 00 48 2b e0 48 c7 44 24 30 fe ff ff ff");
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to find appAssertFailed pattern: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}

	if (auto const rc = InterfacePtr->InstallHook(MYHOOK "appAssertFailed", appAssertFailed, appAssertFailed_Hook, reinterpret_cast<void**>(&appAssertFailed_orig));
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to hook appAssertFailed: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}
	writeln(L"Hooked appAssertFailed");



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