#include <stdio.h>
#include <io.h>
#include <string>
#include <fstream>
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

SPI_IMPLEMENT_ATTACH
{
    Common::OpenConsole();
    writeln(L"Initializing DebugLogger...");

    if (auto rc = InterfacePtr->InstallHook("OutputDebugStringW", (void*)OutputDebugStringW, (void*)OutputDebugStringW_Hook, (void**)&OutputDebugStringW_Orig);
        rc != SPIReturn::Success)
    {
        writeln(L"Attach - failed to hook OutputDebugStringW: %d / %s", rc, SPIReturnToString(rc));
        return false;
    }
    writeln(L"Initialized DebugLogger");


    auto _ = SDKInitializer::Instance();
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