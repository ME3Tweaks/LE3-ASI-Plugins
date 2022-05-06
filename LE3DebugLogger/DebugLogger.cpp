#include <stdio.h>
#include <io.h>
#include <string>
#include <fstream>
#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <set>

#include "HookPrototypes.h"

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
//typedef void (*tProcessEvent)(UObject* Context, UFunction* Function, void* Parms, void* Result);
//tProcessEvent ProcessEvent = nullptr;
//tProcessEvent ProcessEvent_orig = nullptr;
//
//void ProcessEvent_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
//{
//	// LOGGING OTHER STUFF
//	auto funcFullName = Function->GetFullName();
//	if (!strcmp(funcFullName, "Function GameFramework.GameAIController.AILog_Internal"))
//	{
//		auto rparms = reinterpret_cast<AGameAIController_eventAILog_Internal_Parms*>(Parms);
//		writeln(L"AILog: [%hs] %s", rparms->LogCategory.GetName(), rparms->LogText.Data);
//		logger.writeWideLineToLog(wstring_format(L"AILog: [%hs] %s", rparms->LogCategory.GetName(), rparms->LogText.Data));
//	}
//	/*else if (!isPartOf(funcFullName, "Blaze") && isPartOf(funcFullName, "Log"))
//	{
//		writeln("%hs", funcFullName);
//	}*/
//	ProcessEvent_orig(Context, Function, Parms, Result);
//}

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

typedef void (*tVoidFunc1)(void* pointer);

// Read file chunks
tVoidFunc1 UnReadFile = nullptr;
tVoidFunc1 UnReadFile_orig = nullptr;
void UnReadFile_hook(void* pointer)
{
	DWORD* bytes = (DWORD*)((char*)pointer + 0x38);
	writeln("Read file for %i bytes", *bytes);
	UnReadFile_orig(pointer);
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

// =================
// MOVE TO A NEW FILE WHEN SOME DEV WHO KNOWS WHAT THEY'RE DOING LOOKS AT THIS
// AND ASKS WHY YOUR FILE IS SO DAMN UGLY
// =================

// Logs a message from a source
void logMessage(const wchar_t* logSource, wchar_t* formatStr, void* param1, void* param2)
{
	// Todo: Log to disk.
	fwprintf_s(stdout, L"%s: ", logSource);
	fwprintf_s(stdout, formatStr, param1, param2);
	fwprintf_s(stdout, L"\n");
}

#pragma region LogInternal
struct LE3FFrameHACK
{
	void* vtable; // 0x0
	int unknown[6]; // 0x08 0x0C 0x10 0x14 0x18 0x1C
	UObject* Object; // 0x20
	BYTE* Code; // 0x28
	// No idea what this other stuff is
};

typedef void (*tNativeFunction) (UObject* Context, LE3FFrameHACK* Stack, void* Result);
tNativeFunction* GNatives = (tNativeFunction*)0x7ff74c084bb0; // Probably shouldn't hardcode this...

typedef void (*tLogInternalNative)(UObject* callingObject, LE3FFrameHACK* param2);
tLogInternalNative LogInternal = nullptr;
tLogInternalNative LogInternal_orig = nullptr;
void LogInternal_hook(UObject* callingObject, LE3FFrameHACK* stackFrame)
{
	// 0x20 = Object?
	// 0x28 = Code?
	// 0x2C = ??
	// 0x38 = PreviousFrame?
	BYTE* originalCodePointer = stackFrame->Code;
	BYTE nativeIndex = *stackFrame->Code++;
	FString stringArg;
	UObject* sfObject = stackFrame->Object;
	GNatives[nativeIndex](sfObject, (LE3FFrameHACK*)stackFrame, &stringArg);
	writeln(L"LogInternal() from %hs: %s", callingObject->GetFullName(), stringArg.Data);

	//restore the code pointer so LogInternal executes normally.
	stackFrame->Code = originalCodePointer;
	LogInternal_orig(callingObject, stackFrame);
}

#pragma endregion LogInternal

#pragma region FOutputDevice::Logf
typedef void (*tFOutputDeviceLogF)(void* outputDevice, int* code, wchar_t* formatStr, void* param1);
tFOutputDeviceLogF FOutputDeviceLogf = nullptr;
tFOutputDeviceLogF FOutputDeviceLogf_orig = nullptr;
void FOutputDeviceLogf_hook(void* fOutputDevice, int* code, wchar_t* formatStr, void* param1)
{
	logMessage(L"appLogf", formatStr, param1, param1);
}

#pragma endregion FOutputDevice::Logf

#pragma region FErrorOutputDevice::Logf
typedef void (*tFOutputDeviceErrorLogF)(void* outputDevice, wchar_t* formatStr, void* param1, void* param2);
tFOutputDeviceErrorLogF FErrorOutputDeviceLogf = nullptr;
tFOutputDeviceErrorLogF FErrorOutputDeviceLogf_orig = nullptr;
void FErrorOutputDeviceLogf_hook(void* outputDevice, wchar_t* formatStr, void* param1, void* param2)
{
	logMessage(L"appErrorLogf", formatStr, param1, param2);
}
#pragma endrgion FErrorOutputDevice::Logf

#pragma region UWorld::IsTimeLimitExceeded
// This isn't really useful...
typedef bool (*tUWorldIsTimeLimitExceeded)(wchar_t* msgString, double time);
tUWorldIsTimeLimitExceeded UWorldIsTimeLimitExceeded = nullptr;
tUWorldIsTimeLimitExceeded UWorldIsTimeLimitExceeded_orig = nullptr;
bool UWorldIsTimeLimitExceeded_hook(wchar_t* msgString, double time)
{
	logMessage(L"UWorld::IsTimeLimitExceeded", L"%s", msgString, nullptr);
	return UWorldIsTimeLimitExceeded_orig(msgString, time);
}
#pragma endrgion UWorld::IsTimeLimitExceeded


#pragma region TFCRegistering
typedef bool (*tRegisterTFC)(FString* tfcPath);
tRegisterTFC RegisterTFC = nullptr;
tRegisterTFC RegisterTFC_orig = nullptr;

bool testRegistered = false;

bool RegisterTFC_hook(FString* tfcPath)
{
	if (!testRegistered)
	{
		testRegistered = true;
		//FString str = L"..\\..\\BioGame\\DLC\\DLC_MOD_AriaOutfitLiara\\CookedPCConsole\\Textures_DLC_MOD_AbsoluteChungus.tfc";
		//RegisterTFC_hook(&str);
	}
	logMessage(L"Registering TFC:", L"%s", tfcPath->Data, nullptr);
	return RegisterTFC_orig(tfcPath);
}
#pragma endregion TFCRegistering


// Hooks logging functions
bool hookLoggingFunctions(ISharedProxyInterface* InterfacePtr)
{
	// Works, just commented out as it prints out a ton of things.
	INIT_FIND_PATTERN_POSTHOOK(LogInternal, /*"40 57 48 83 ec */"40 48 c7 44 24 20 fe ff ff ff 48 89 5c 24 50 48 89 74 24 60 48 8b da 33 f6 48 89 74 24 28 48 89 74 24 30");
	INIT_HOOK_PATTERN(LogInternal);

	// WarnInternal seems like it prints to the debug output so I don't think it needs hooked

	INIT_FIND_PATTERN_POSTHOOK(FOutputDeviceLogf, /*4c 89 44 24 18*/ "4c 89 4c 24 20 55 57 48 83 ec 58 83 79 08 00 48 8b ea 48 8b f9 0f 85 c6 00 00 00 83 79 0c 00 74 0d 83 3d 13 c6 6c 01 00 0f 85 b3 00 00 00");
	INIT_HOOK_PATTERN(FOutputDeviceLogf);

	INIT_FIND_PATTERN_POSTHOOK(FErrorOutputDeviceLogf, /*48 89 54 24 10*/ "4c 89 44 24 18 4c 89 4c 24 20 57 48 83 ec 50 83 79 08 00 48 8b f9 0f 85 c1 00 00 00 83 79 0c 00 74 0d 83 3d 22 c5 6c 01 00 0f 85 ae 00 00 00");
	INIT_HOOK_PATTERN(FErrorOutputDeviceLogf);

	// Not really sure how useful this is beyond RE
	//INIT_FIND_PATTERN_POSTHOOK(UWorldIsTimeLimitExceeded, /*48 83 ec 38 0f*/ "57 c0 0f 29 74 24 20 66 0f 2e c8 0f 28 f1 75 0c 33 c0 0f 28 74 24 20 48 83 c4 38 c3 48 89 5c 24 30 48 8d 4c 24 48 33 db");
	//INIT_HOOK_PATTERN(UWorldIsTimeLimitExceeded);

	// With this method you can dynamically register TFCs for use
	//INIT_FIND_PATTERN_POSTHOOK(RegisterTFC, 	/*48 89 5c 24 10*/ "57 48 83 ec 40 48 8b d9 48 8b 0d 4c 51 41 01 83 7b 08 00 48 8b 01 74 05 48 8b 13 eb 07 48 8d 15 db ef cb 00 4c 8b 0d e8 ae 39 01");
	//INIT_HOOK_PATTERN(RegisterTFC);

}
// =================================
// END MOVE TO NEW FILE
// =================================



// This only works for printing native addresses
// Cannot have bink dll hook or it'll fail to bind

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


#pragma region PackageLoading
typedef UObject* (*tLoadPackagePersistent)(int64 param1, const wchar_t* param2, uint32 param3, int64* param4, uint32* param5);
tLoadPackagePersistent LoadPackagePersistent = nullptr;
tLoadPackagePersistent LoadPackagePersistent_orig = nullptr;
void LoadPackagePersistent_hook(int64 param1, const wchar_t* packageName, uint32 param3, int64* param4, uint32* param5)
{
	writeln("Loading persistent package: %s", packageName);
	LoadPackagePersistent_orig(param1, packageName, param3, param4, param5);
}

// Returns a UPackage, but we don't have that defined
typedef void* (*tLoadPackage)(void* param1, wchar_t* param2, uint32 param3);
tLoadPackage LoadPackage = nullptr;
tLoadPackage LoadPackage_orig = nullptr;
void* LoadPackage_hook(void* param1, wchar_t* packageName, uint32 param3)
{
	// FindPackageFile doesn't seem to work. Might need to figure out what parameters it really needs.
	// The below commented out code crashes the game

	/*std::this_thread::sleep_for(std::chrono::seconds(8));
	FString outName;
	wchar_t* language = L"";
	auto pFound = GPackageFileCache->FindPackageFile(param2, nullptr, outName, language, false);
	if (pFound)
	{
		writeln("Loading package synchronously: %s", outName.Data);
	}
	else
	{
		writeln("Loading package synchronously: %s", param2);
	}*/

	writeln("Loading package synchronously: %s", packageName);
	return LoadPackage_orig(param1, packageName, param3);
}

typedef uint32(*tAsyncLoadMethod)(UnLinker* linker, int a2, float a3);
tAsyncLoadMethod LoadPackageAsyncTick = nullptr;
tAsyncLoadMethod LoadPackageAsyncTick_orig = nullptr;
uint32 LoadPackageAsyncTick_hook(UnLinker* linker, int a2, float a3)
{
	auto result = LoadPackageAsyncTick_orig(linker, a2, a3);
	writeln("Loading package asynchronously: %s, %f%%", linker->PackageName, linker->EstimatedLoadPercentage);
	return result;
}

typedef void (*uLinkerPreload)(UnLinker* linker, UObject* objectToLoad);
uLinkerPreload LinkerLoadPreload = nullptr;
uLinkerPreload LinkerLoadPreload_orig = nullptr;
void LinkerLoadPreload_hook(UnLinker* linker, UObject* objectToLoad)
{

	// This prints out pretty much everything that loads
	// Not sure how to properly hook on preload here
	
	// This is used when loading the ref shader cache file, the game seems to actually be doing a
	// seek free load on the CacheObject, which loads the file via preload
	//auto fullPath = objectToLoad->GetFullPath();
	////if (isPartOf(fullPath, "CacheObject"))
	////{
	//	//std::this_thread::sleep_for(std::chrono::seconds(8));

	//	// I took this right out of Ghidra, cause I don't want to deal with a FQWORD (Isn't this just a int64?)
	//int64* objectFlags = (int64*)((int64)objectToLoad + 0xC);
	//if ((*objectFlags & 0x20000000000) != 0) {

	//	// Object needs loaded, so the file is going to be loaded.
	//	writeln("SeekFreeLoading object: %hs", objectToLoad->GetFullPath());
	//}
	////}
	LinkerLoadPreload_orig(linker, objectToLoad);
}


#pragma endregion PackageLoading

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

	LoadCommonClassPointers(InterfacePtr);

	// CreateImport
	INIT_FIND_PATTERN_POSTHOOK(CreateImport, /*"48 8b c4 55 41*/ "54 41 55 41 56 41 57 48 8b ec 48 83 ec 70 48 c7 45 d0 fe ff ff ff 48 89 58 10 48 89 70 18 48 89 78 20 4c 63 e2");
	INIT_HOOK_PATTERN(CreateImport);


	// ---------------
	// LOOKING FOR FILE READS...

	// This is method for when chunks of a file are read from disk
	//INIT_FIND_PATTERN_POSTHOOK(UnReadFile, /*"40 53 48 83 ec*/ "30 8b 41 34 48 8d 54 24 40 89 41 58 48 8b d9 48 89 49 60");
	//INIT_HOOK_PATTERN(UnReadFile);

	// PRELOAD
	INIT_FIND_PATTERN_POSTHOOK(LinkerLoadPreload, /*"40 55 56 57 41*/ "54 41 55 41 56 41 57 48 8d 6c 24 d9 48 81 ec 90 00 00 00 48 c7 45 e7 fe ff ff ff");
	INIT_HOOK_PATTERN(LinkerLoadPreload);

	// LOADPACKAGE
	INIT_FIND_PATTERN_POSTHOOK(LoadPackage, /*"48 8b c4 44 89*/"40 18 48 89 48 08 53 56 57 41 56 41 57 48 83 ec 50 48 c7 40 b8 fe ff ff ff");
	INIT_HOOK_PATTERN(LoadPackage);

	// ASYNC LOAD PACKAGE
	INIT_FIND_PATTERN_POSTHOOK(LoadPackageAsyncTick, /*"48 8b c4 55 56*/ "57 41 54 41 55 41 56 41 57 48 81 ec 80 00 00 00 48 c7 40 90 fe ff ff ff");
	INIT_HOOK_PATTERN(LoadPackageAsyncTick);

	// LOAD PACKAGE PERSISTENT
	//INIT_FIND_PATTERN_POSTHOOK(LoadPackagePersistent, /*"40 53 56 57 41*/ "54 41 55 41 56 41 57 48 81 ec e0 02 00 00 48 c7 84 24 b8 00 00 00 fe ff ff ff");
	//INIT_HOOK_PATTERN(LoadPackagePersistent);

	// Prevent CreateLinker() from wiping the last status message
	/*void* clearInstructionAddress;
	if (const auto rc = InterfacePtr->FindPattern(&clearInstructionAddress, "48 89 77 70 8b c3 48 8b 9c 24 c8 00 00 00 0f 28 74 24 70 0f 28 7c 24 60");
		rc != SPIReturn::Success)
	{
		writeln(L"Failed to find %hs pattern: %d / %s", "CreateLinkerInstructionClearLastMessage", rc, SPIReturnToString(rc));
	}
	 else
	{
		// nop it out
		// Doesn't work, but a good example of how to nop stuff out.
		DWORD oldProtection;
		VirtualProtect(clearInstructionAddress, 4, PAGE_READWRITE, &oldProtection);
		*(DWORD*)(clearInstructionAddress) = 0x90909090; // 4 nops
		VirtualProtect(clearInstructionAddress, 4, oldProtection, &oldProtection);
		writeln(L"Nop'd out last status clear");
	}*/

	// END ASYNC LOAD

	// ---------------
	// Logging functions to hook up for writing to disk
	hookLoggingFunctions(InterfacePtr);


// LOAD PACKAGE PERSISTENT ----------------------------------------------------------------
//writeln(L"Initializing LoadPackagePersistent hook...");
//if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&LoadPackagePersistent), "40 53 56 57 41 54 41 55 41 56 41 57 48 81 ec e0 02 00 00 48 c7 84 24 b8 00 00 00");
//	rc != SPIReturn::Success)
//{
//	writeln(L"Attach - failed to find LoadPackagePersistent pattern: %d / %s", rc, SPIReturnToString(rc));
//	return false;
//}
//
//if (auto const rc = InterfacePtr->InstallHook(MYHOOK "LoadPackagePersistent", LoadPackagePersistent, LoadPackagePersistent_hook, reinterpret_cast<void**>(&LoadPackagePersistent_orig));
//	rc != SPIReturn::Success)
//{
//	writeln(L"Attach - failed to hook LoadPackagePersistent: %d / %s", rc, SPIReturnToString(rc));
//	return false;
//}
//writeln(L"Hooked LoadPackagePersistent");




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

//INIT_FIND_PATTERN_POSTHOOK(ProcessEvent, LE_PATTERN_POSTHOOK_PROCESSEVENT);
//INIT_HOOK_PATTERN(ProcessEvent);


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