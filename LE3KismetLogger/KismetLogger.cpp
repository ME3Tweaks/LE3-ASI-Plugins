#include <stdio.h>
#include <io.h>
#include <string>
#include <fstream>
#include <iostream>
#include <ostream>
#include <streambuf>
#include <sstream>
#include "../LE3-SDK/Common.h"
#include "../LE3-SDK/Interface.h"
#include "../LE3-SDK/ME3TweaksHeader.h"
//#include "../LE3-SDK/SdkHeaders.h"

#define MYHOOK "KismetLogger_"

SPI_PLUGINSIDE_SUPPORT(L"KismetLogger", L"1.0.0", L"HenBagle", SPI_GAME_LE3, SPI_VERSION_ANY);
SPI_PLUGINSIDE_POSTLOAD;
SPI_PLUGINSIDE_ASYNCATTACH;

ME3TweaksASILogger logger("Kismet Logger v1", "KismetLog.txt");

// ProcessEvent hook
// ======================================================================
typedef void (*tProcessEvent)(UObject* Context, UFunction* Function, void* Parms, void* Result);
tProcessEvent ProcessEvent = nullptr;
tProcessEvent ProcessEvent_orig = nullptr;
void ProcessEvent_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
{
	if (!strcmp(Function->GetFullName(), "Function Engine.SequenceOp.Activated"))
	{
		const auto op = reinterpret_cast<USequenceOp*>(Context);
		char* fullInstancedPath = op->GetFullPath();
		char* className = op->Class->Name.GetName();
		logger.writeToLog(string_format("%s %s\n", className, fullInstancedPath), true);
	}
	ProcessEvent_orig(Context, Function, Parms, Result);
}


SPI_IMPLEMENT_ATTACH
{
	Common::OpenConsole();

	INIT_CHECK_SDK();
	INIT_FIND_PATTERN_POSTHOOK(ProcessEvent, LE_PATTERN_POSTHOOK_PROCESSEVENT);
	INIT_HOOK_PATTERN(ProcessEvent);

	return true;
}

SPI_IMPLEMENT_DETACH
{
	Common::CloseConsole();
	return true;
}
