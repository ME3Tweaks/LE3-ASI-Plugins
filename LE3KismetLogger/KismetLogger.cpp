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
//#include "../LE3-SDK/ME3TweaksHeader.h"
#include "../LE3-SDK/SdkHeaders.h"

#define MYHOOK "KismetLogger_"

SPI_PLUGINSIDE_SUPPORT(L"KismetLogger", L"1.0.0", L"HenBagle", SPI_GAME_LE3, SPI_VERSION_ANY);
SPI_PLUGINSIDE_POSTLOAD;
SPI_PLUGINSIDE_ASYNCATTACH;

//ME3TweaksASILogger logger("Kismet Logger v1", "KismetLog.txt");



// ProcessEvent hook
// ======================================================================
#define LE3PATT_PROCESSEVENT   /*"40 55 41 56 41*/ "57 48 81 EC 90 00 00 00 48 8D 6C 24 20 48 C7 45 50 FE FF FF FF 48 89 9D 90 00 00 00 48 89 B5 98 00 00 00 48 89 BD A0 00 00 00 4C 89 A5 A8 00 00 00 48 8B"
typedef void (*tProcessEvent)(UObject* Context, UFunction* Function, void* Parms, void* Result);
tProcessEvent ProcessEvent = nullptr;
tProcessEvent ProcessEvent_orig = nullptr;
void ProcessEvent_hook(UObject* Context, UFunction* Function, void* Parms, void* Result)
{
	/*if (!strcmp(Function->GetFullName(), "Function Engine.SequenceOp.Activated"))
	{
		const auto op = reinterpret_cast<USequenceOp*>(Context);
		char* fullInstancedPath = op->GetFullPath();
		char* className = op->Class->Name.GetName();
		logger.writeToLog(string_format("%s %s\n", className, fullInstancedPath), true);
	}
	else
	{
		logger.writeToConsole(string_format("%s", Function->GetFullName()), true);
	}*/
	ProcessEvent_orig(Context, Function, Parms, Result);
}


SPI_IMPLEMENT_ATTACH
{
	Common::OpenConsole();

	INIT_CHECK_SDK();
	INIT_FIND_PATTERN(ProcessEvent, LE3PATT_PROCESSEVENT);
	INIT_HOOK_PATTERN(ProcessEvent);

	return true;
}

SPI_IMPLEMENT_DETACH
{
	Common::CloseConsole();
	return true;
}
