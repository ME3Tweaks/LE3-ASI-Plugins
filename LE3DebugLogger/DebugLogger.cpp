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


// Logs a message from a source
void logMessage(const wchar_t* logSource, wchar_t* formatStr, void* param1, void* param2)
{
	// Todo: Log to disk.
	fwprintf_s(stdout, L"%s: ", logSource);
	fwprintf_s(stdout, formatStr, param1, param2);
	fwprintf_s(stdout, L"\n");
}

#pragma region LogInternal

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





// Hooks logging functions
bool hookLoggingFunctions(ISharedProxyInterface* InterfacePtr)
{
	// Allows logging LogInternal() calls (even user ones)
	INIT_FIND_PATTERN_POSTHOOK(LogInternal, /*"40 57 48 83 ec */"40 48 c7 44 24 20 fe ff ff ff 48 89 5c 24 50 48 89 74 24 60 48 8b da 33 f6 48 89 74 24 28 48 89 74 24 30");
	INIT_HOOK_PATTERN(LogInternal);

	// WarnInternal seems like it prints to the debug output so I don't think it needs hooked
	// appAssertFailed writes to debug output

	INIT_FIND_PATTERN_POSTHOOK(FOutputDeviceLogf, /*4c 89 44 24 18*/ "4c 89 4c 24 20 55 57 48 83 ec 58 83 79 08 00 48 8b ea 48 8b f9 0f 85 c6 00 00 00 83 79 0c 00 74 0d 83 3d 13 c6 6c 01 00 0f 85 b3 00 00 00");
	INIT_HOOK_PATTERN(FOutputDeviceLogf);

	INIT_FIND_PATTERN_POSTHOOK(FErrorOutputDeviceLogf, /*48 89 54 24 10*/ "4c 89 44 24 18 4c 89 4c 24 20 57 48 83 ec 50 83 79 08 00 48 8b f9 0f 85 c1 00 00 00 83 79 0c 00 74 0d 83 3d 22 c5 6c 01 00 0f 85 ae 00 00 00");
	INIT_HOOK_PATTERN(FErrorOutputDeviceLogf);

}







#pragma region PackageLoading


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

	if (auto rc = InterfacePtr->InstallHook("OutputDebugStringW", (void*)OutputDebugStringW, (void*)OutputDebugStringW_Hook, (void**)&OutputDebugStringW_Orig);
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to hook OutputDebugStringW: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}

	LoadCommonClassPointers(InterfacePtr);

	// CreateImport
	INIT_FIND_PATTERN_POSTHOOK(CreateImport, /*"48 8b c4 55 41*/ "54 41 55 41 56 41 57 48 8b ec 48 83 ec 70 48 c7 45 d0 fe ff ff ff 48 89 58 10 48 89 70 18 48 89 78 20 4c 63 e2");
	INIT_HOOK_PATTERN(CreateImport);

	// OBJECT PRELOAD (called on every object in a package file, can be used for seekfree)
	INIT_FIND_PATTERN_POSTHOOK(LinkerLoadPreload, /*"40 55 56 57 41*/ "54 41 55 41 56 41 57 48 8d 6c 24 d9 48 81 ec 90 00 00 00 48 c7 45 e7 fe ff ff ff");
	INIT_HOOK_PATTERN(LinkerLoadPreload);

	// SYNC LOAD PACKAGE
	INIT_FIND_PATTERN_POSTHOOK(LoadPackage, /*"48 8b c4 44 89*/"40 18 48 89 48 08 53 56 57 41 56 41 57 48 83 ec 50 48 c7 40 b8 fe ff ff ff");
	INIT_HOOK_PATTERN(LoadPackage);

	// ASYNC LOAD PACKAGE
	INIT_FIND_PATTERN_POSTHOOK(LoadPackageAsyncTick, /*"48 8b c4 55 56*/ "57 41 54 41 55 41 56 41 57 48 81 ec 80 00 00 00 48 c7 40 90 fe ff ff ff");
	INIT_HOOK_PATTERN(LoadPackageAsyncTick);


	// Logging functions to hook up for writing to disk
	hookLoggingFunctions(InterfacePtr);
	
	//INIT_FIND_PATTERN_POSTHOOK(ProcessEvent, LE_PATTERN_POSTHOOK_PROCESSEVENT);
	//INIT_HOOK_PATTERN(ProcessEvent);

	writeln(L"Initialized DebugLogger");

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