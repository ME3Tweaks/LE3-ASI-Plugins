#include <stdio.h>
#include <io.h>
#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <ostream>
#include <streambuf>
#include <sstream>
#include "../LE3-SDK/Interface.h"
#include "../LE3-SDK/Common.h"
#include "../LE3-SDK/ME3TweaksHeader.h"

#define MYHOOK "LinkerPrinter_"

SPI_PLUGINSIDE_SUPPORT(L"LinkerPrinter", L"1.0.0", L"ME3Tweaks", SPI_GAME_LE3, SPI_VERSION_ANY);
SPI_PLUGINSIDE_POSTLOAD;
SPI_PLUGINSIDE_ASYNCATTACH;

ME3TweaksASILogger logger("Linker Printer v1", "LinkerPrinter.log");

bool CanPrint = true;

// ======================================================================
// SetLinker hook
// ======================================================================
map<std::string, std::wstring> NodePathToFileNameMap;


typedef void (*tSetLinker)(UObject* Context, ULinkerLoad* Linker, int LinkerIndex);
tSetLinker SetLinker = nullptr;
tSetLinker SetLinker_orig = nullptr;
void SetLinker_hook(UObject* Context, ULinkerLoad* Linker, int LinkerIndex)
{
	if (Context->Linker)
	{
		NodePathToFileNameMap.insert_or_assign(std::string(Context->GetFullPath()), std::wstring(Context->Linker->Filename.Data));
	}
	SetLinker_orig(Context, Linker, LinkerIndex);
}



// ProcessEvent hook (for non-native .Activated())
// ======================================================================

typedef void (*tProcessEvent)(UObject* Context, UFunction* Function, void* Parms, void* Result);
tProcessEvent ProcessEvent = nullptr;

tProcessEvent ProcessEvent_orig = nullptr;

void PrintLinkers()
{
	CanPrint = false;
	wchar_t buffer[1024];
	for (auto const& [key, val] : NodePathToFileNameMap)
	{
		swprintf(buffer, 1024, L"%hs -> %s\n", key.c_str(), val.c_str());
		logger.writeWideToLog(buffer);
	}
	logger.writeWideLineToLog(L"------------------------------");
	CanPrint = true;
}


void ProcessEvent_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
{
	if (CanPrint && !strcmp(Function->GetFullName(), "Function SFXGame.BioHUD.PostRender"))
	{
		// Toggle drawing/not drawing
		if ((GetKeyState('O') & 0x8000) && (GetKeyState(VK_CONTROL) & 0x8000)) {
			if (CanPrint) {
				PrintLinkers();
				writeln("Printed linkers to log");
			}
		}
	}
	ProcessEvent_orig(Context, Function, Parms, Result);
}


SPI_IMPLEMENT_ATTACH
{
	Common::OpenConsole();

	auto _ = SDKInitializer::Instance();

	INIT_FIND_PATTERN_POSTHOOK(SetLinker, /*"4c 8b 51 2c 4c"*/ "8b c9 4d 85 d2 74 39 48 85 d2 74 1c 48 8b c1");
	if (const auto rc = InterfacePtr->InstallHook(MYHOOK "SetLinker", SetLinker, SetLinker_hook, reinterpret_cast<void**>(&SetLinker_orig));
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to hook SetLinker: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}


	// Hook ProcessEvent for input combo
	INIT_FIND_PATTERN_POSTHOOK(ProcessEvent, LE_PATTERN_POSTHOOK_PROCESSEVENT);
	if (auto rc = InterfacePtr->InstallHook(MYHOOK "ProcessEvent", ProcessEvent, ProcessEvent_hook, (void**)&ProcessEvent_orig);
		rc != SPIReturn::Success)
	{
		writeln(L"Attach - failed to hook ProcessEvent: %d / %s", rc, SPIReturnToString(rc));
		return false;
	}

	writeln("LinkerPrinter: Press CTRL + O to dump all objects that have loaded and their source.");
	return true;
}

SPI_IMPLEMENT_DETACH
{
	Common::CloseConsole();
	logger.flush();
	return true;
}
