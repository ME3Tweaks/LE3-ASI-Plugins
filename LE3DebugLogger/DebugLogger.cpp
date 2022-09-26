#include <cstdio>
#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

#include "HookPrototypes.h"

SPI_PLUGINSIDE_SUPPORT(L"DebugLogger", L"4.0.0", L"ME3Tweaks", SPI_GAME_LE3, SPI_VERSION_LATEST);
SPI_PLUGINSIDE_PRELOAD;
SPI_PLUGINSIDE_ASYNCATTACH;

ME3TweaksASILogger logger("DebugLogger v4", "LE3DebugLogger.log");

// Prototype for WinAPI DebugOutput string. We don't put this
// in prototypes cause this is not part of the game
typedef void (WINAPI* tOutputDebugStringW)(LPCWSTR lpcszString);
tOutputDebugStringW OutputDebugStringW_orig = nullptr;
void WINAPI OutputDebugStringW_hook(LPCWSTR lpcszString)
{
	OutputDebugStringW_orig(lpcszString);
	//writeMsg(L"%s", lpcszString); // string already has a newline on the end
	logger.writeToLog(std::wstring_view{ lpcszString }.data(), true);
	logger.flush();
}


//void ProcessEvent_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
//{
//	ProcessEvent_orig(Context, Function, Parms, Result);
//}

UObject* CreateImport_hook(ULinkerLoad* Context, int i)
{
	UObject* object = CreateImport_orig(Context, i);
	if (object == nullptr)
	{
		FObjectImport importEntry = Context->ImportMap(i);
		logger.writeToLog(wstring_format(L"Could not resolve #%d: %hs (%hs) in file: %s\n", -i - 1, importEntry.ObjectName.GetName(), importEntry.ClassName.GetName(), Context->Filename.Data), true);
		logger.flush();
	}
	return object;
}


// Logs a message from a source
void logMessage(const wchar_t* logSource, wchar_t* formatStr, void* param1, void* param2, void* param3, void* param4)
{
	// We have to prepare the formatting string since it's an inbound parameter
	auto preString = wstring_format(L"%s: %s", logSource, formatStr);
	logger.writeToLog(wstring_format(preString.data(), param1, param2, param3, param4), true, true);
}

#pragma region LogInternal
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

	// Kinda jank way to re-use this code by making it create a string a certain way
	logMessage(L"LogInternal() from %hs", L"%s", callingObject->GetFullName(), stringArg.Data, NULL, NULL);

	//restore the code pointer so LogInternal executes normally.
	stackFrame->Code = originalCodePointer;
	LogInternal_orig(callingObject, stackFrame);
}

#pragma endregion LogInternal

#pragma region FOutputDevice::Logf
void FOutputDeviceLogf_hook(void* unknown, void* serializationFuncPtr, wchar_t* format_str, void* arg1, void* arg2, void* arg3, void* arg4)
{
	logMessage(L"appLogf", format_str, arg1, arg2, arg3, arg4);
}

#pragma endregion FOutputDevice::Logf

#pragma region FErrorOutputDevice::Logf
void FErrorOutputDeviceLogf_hook(void* outputDevice, wchar_t* formatStr, void* param1, void* param2, void* param3, void* param4)
{
	logMessage(L"appErrorLogf", formatStr, param1, param2, param3, param4);
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

	return true;
}

#pragma region PackageLoading
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

	logger.writeToLog(wstring_format(L"Loading package synchronously: %s\n", packageName), true);
	return LoadPackage_orig(param1, packageName, param3);
}


uint32 LoadPackageAsyncTick_hook(UnLinker* linker, int a2, float a3)
{
	// Logger writes after the call cause linker might be null to start with, it's populated when tick begins
	auto result = LoadPackageAsyncTick_orig(linker, a2, a3);
	logger.writeToLog(wstring_format(L"Loading package asynchronously: %s, %f%%\n", linker->PackageName, linker->EstimatedLoadPercentage), true);
	// writeln("Loading package asynchronously: %s, %f%%", linker->PackageName, linker->EstimatedLoadPercentage);
	return result;
}


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

void logAllocationFailure(UClass* instancingClass, UObject* outer, FName objClassName, long long loadFlags, UObject* archetype) {
	char* instancingClassName = instancingClass ? instancingClass->GetFullName() : nullptr;
	char* outerName = outer ? outer->GetFullName() : nullptr;
	char* objectName = objClassName.Instanced();
	char* archetypeName = archetype ? archetype->GetFullName() : nullptr;
	logger.writeToLog(L"ERROR ALLOCATING OBJECT! Some information that may help track down the problem:\n", true);
	logger.writeToLog(wstring_format(L"\tInstancing class name: %hs\n", instancingClassName), true);
	logger.writeToLog(wstring_format(L"\tOuter ('Link' in modding tools): %hs\n", outerName), true);
	logger.writeToLog(wstring_format(L"\tName of object being created: %hs\n", objectName), true);
	logger.writeToLog(wstring_format(L"\tArchetype: %hs\n", archetypeName), true);

	logger.writeToLog(L"DebugLogger: Terminating application due to crash in StaticAllocateObject(). See the DebugLogger log file.\n", true);
	logger.flush();
}

UObject* StaticAllocateObject_hook(
	UClass* instancingClass,
	UObject* outer,
	FName objClassName,
	long long loadFlags,
	UObject* archetype,
	void* errorDev, // FOutputDevice
	const wchar_t* a7, // Ghidra shows this is pretty commonly 0
	void* instancePtr, // Ghidra shows this is pretty commonly 0
	void* a9) // Ghidra shows this is pretty commonly 0
{
	__try {
		return StaticAllocateObject_orig(instancingClass, outer, objClassName, loadFlags, archetype, errorDev, a7, instancePtr, a9);
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		// We failed to allocate an object
		// Game's gonna die. Let's log it

		// This has to be in a different function since it needs unwound and
		// that can't be done in __try __except
		logAllocationFailure(instancingClass, outer, objClassName, loadFlags, archetype);
		std::this_thread::sleep_for(chrono::seconds(8));
		exit(1);
	}
}


#pragma endregion PackageLoading

SPI_IMPLEMENT_ATTACH
{
	Common::OpenConsole();
	writeln(L"Initializing DebugLogger...");

	INIT_CHECK_SDK();
	LoadCommonClassPointers(InterfacePtr);

	// Log debug output messages
	INIT_HOOK_PATTERN(OutputDebugStringW);

	// CreateImport
	INIT_FIND_PATTERN_POSTHOOK(CreateImport, /*"48 8b c4 55 41*/ "54 41 55 41 56 41 57 48 8b ec 48 83 ec 70 48 c7 45 d0 fe ff ff ff 48 89 58 10 48 89 70 18 48 89 78 20 4c 63 e2");
	INIT_HOOK_PATTERN(CreateImport);

	// OBJECT PRELOAD (called on every object in a package file, can be used for seekfree)
	//INIT_FIND_PATTERN_POSTHOOK(LinkerLoadPreload, /*"40 55 56 57 41*/ "54 41 55 41 56 41 57 48 8d 6c 24 d9 48 81 ec 90 00 00 00 48 c7 45 e7 fe ff ff ff");
	//INIT_HOOK_PATTERN(LinkerLoadPreload);

	// SYNC LOAD PACKAGE
	INIT_FIND_PATTERN_POSTHOOK(LoadPackage, /*"48 8b c4 44 89*/"40 18 48 89 48 08 53 56 57 41 56 41 57 48 83 ec 50 48 c7 40 b8 fe ff ff ff");
	INIT_HOOK_PATTERN(LoadPackage);

	// ASYNC LOAD PACKAGE (CreateLinkerAsync)
	INIT_FIND_PATTERN_POSTHOOK(LoadPackageAsyncTick, /*"48 8b c4 55 56*/ "57 41 54 41 55 41 56 41 57 48 81 ec 80 00 00 00 48 c7 40 90 fe ff ff ff");
	INIT_HOOK_PATTERN(LoadPackageAsyncTick);

	// When object instances are allocated, if there's an error
	// the game dies. This logs which object was being created
	// that the game died on
	INIT_FIND_PATTERN_POSTHOOK(StaticAllocateObject, /*"4c 89 44 24 18*/ "55 56 57 41 54 41 55 41 56 41 57 48 8d ac 24 80 fb ff ff 48 81 ec 80 05 00 00");
	INIT_HOOK_PATTERN(StaticAllocateObject);

	// Logging functions to hook up for writing to disk
	hookLoggingFunctions(InterfacePtr);
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