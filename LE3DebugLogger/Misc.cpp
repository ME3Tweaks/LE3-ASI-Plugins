// Stuff in this file is not used but is just kept here for reference purposes.

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

// =======================
// LOADPACKAGEPERSISTENT (Not 100% sure this is actually what it is)
// =======================
/*
 typedef UObject* (*tLoadPackagePersistent)(int64 param1, const wchar_t* param2, uint32 param3, int64* param4, uint32* param5);
tLoadPackagePersistent LoadPackagePersistent = nullptr;
tLoadPackagePersistent LoadPackagePersistent_orig = nullptr;
void LoadPackagePersistent_hook(int64 param1, const wchar_t* packageName, uint32 param3, int64* param4, uint32* param5)
{
	writeln("Loading persistent package: %s", packageName);
	LoadPackagePersistent_orig(param1, packageName, param3, param4, param5);
}
 */

	//INIT_FIND_PATTERN_POSTHOOK(LoadPackagePersistent, /*"40 53 56 57 41*/ "54 41 55 41 56 41 57 48 81 ec e0 02 00 00 48 c7 84 24 b8 00 00 00 fe ff ff ff");
	//INIT_HOOK_PATTERN(LoadPackagePersistent);

// =======================
// CreateLinker() has status updates it sets about last work done.
// This is attempt to make those status messages not get cleared
// More work needs to be done though.
// =======================
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

// =======================
// REGISTER TFC
// =======================

/*#pragma region TFCRegistering
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
#pragma endregion TFCRegistering*/

// With this method you can dynamically register TFCs for use
//INIT_FIND_PATTERN_POSTHOOK(RegisterTFC, 	/*48 89 5c 24 10*/ "57 48 83 ec 40 48 8b d9 48 8b 0d 4c 51 41 01 83 7b 08 00 48 8b 01 74 05 48 8b 13 eb 07 48 8d 15 db ef cb 00 4c 8b 0d e8 ae 39 01");
//INIT_HOOK_PATTERN(RegisterTFC);

// ===========================
// UWorld::TimeLimitExceeded (for loading?
// ===========================
/*
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
 */

 // Not really sure how useful this is beyond RE
 //INIT_FIND_PATTERN_POSTHOOK(UWorldIsTimeLimitExceeded, /*48 83 ec 38 0f*/ "57 c0 0f 29 74 24 20 66 0f 2e c8 0f 28 f1 75 0c 33 c0 0f 28 74 24 20 48 83 c4 38 c3 48 89 5c 24 30 48 8d 4c 24 48 33 db");
 //INIT_HOOK_PATTERN(UWorldIsTimeLimitExceeded);

// =======================================
// UFunction::NativeBind
// =======================================
/*
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
 */

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


// =======================
// Read chunk from file
// =======================
/*
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
 */

	// This is method for when chunks of a file are read from disk
	//INIT_FIND_PATTERN_POSTHOOK(UnReadFile, /*"40 53 48 83 ec*/ "30 8b 41 34 48 8d 54 24 40 89 41 58 48 8b d9 48 89 49 60");
	//INIT_HOOK_PATTERN(UnReadFile);


// =====================
// appAssertFailed
// =====================
// This writes to debugf so we don't need to use it. It's just here for signature
/*
 typedef void (*tAppAssertFailed)(char* logFuncName, char* sourceFileName, short errorCode, wchar_t* message);
tAppAssertFailed appAssertFailed = nullptr;
tAppAssertFailed appAssertFailed_orig = nullptr;
void appAssertFailed_Hook(char* logFuncName, char* sourceFileName, short errorCode, wchar_t* message)
{
	//std::this_thread::sleep_for(std::chrono::seconds(8));
	writeln("Assert Failed %hs %hs %hi %s", logFuncName, sourceFileName, errorCode, message);
	appAssertFailed_orig(logFuncName, sourceFileName, errorCode, message);
}
 */