#pragma once
#include <windows.h>
#include <TlHelp32.h>

#include <cstdio>
#include <string>


typedef unsigned char        byte;
typedef signed long          int32;
typedef unsigned long        uint32;
typedef signed long long     int64;
typedef unsigned long long   uint64;
typedef wchar_t wchar;


#define _CONCAT_NAME(A, B) A ## B
#define CONCAT_NAME(A, B) _CONCAT_NAME(A, B)


namespace Common
{
    void OpenConsole()
    {
        AllocConsole();

        freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
        freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);

        HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo;
        GetConsoleScreenBufferInfo(console, &lpConsoleScreenBufferInfo);
        SetConsoleScreenBufferSize(console, { lpConsoleScreenBufferInfo.dwSize.X, 30000 });
    }

    void CloseConsole()
    {
        FreeConsole();
    }

    // loosely based on https://stackoverflow.com/q/26572459
    byte* GetModuleBaseAddress(wchar* moduleName)
    {
        auto pid = GetCurrentProcessId();

        HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid);
        byte* baseAddress = nullptr;

        if (INVALID_HANDLE_VALUE != snapshot)
        {
            MODULEENTRY32 moduleEntry = { 0 };
                moduleEntry.dwSize = sizeof(MODULEENTRY32);

            if (Module32First(snapshot, &moduleEntry))
            {
                do
                {
                    if (0 == wcscmp(moduleEntry.szModule, moduleName))
                    {
                        baseAddress = moduleEntry.modBaseAddr;
                        break;
                    }
                } while (Module32Next(snapshot, &moduleEntry));
            }
            CloseHandle(snapshot);
        }

        return baseAddress;
    }

    void MessageBoxError(const wchar_t* title, const wchar_t* format, ...)
    {
        wchar_t buffer[1024];

        // Parse the format string.
        va_list args;
        va_start(args, format);
        int rc = _vsnwprintf_s(buffer, 1024, _TRUNCATE, format, args);
        va_end(args);

        if (rc < 0)
        {
            swprintf_s(buffer, 1024, L"MessageBoxError: error or truncation happened: %d!", rc);
        }

        // Display the message box.
        MessageBoxW(nullptr, buffer, title, MB_OK | MB_ICONERROR);
    }
}

#define writeln(msg, ...) fwprintf_s(stdout, L"" msg "\n", __VA_ARGS__)
#define errorln(msg, ...) Common::MessageBoxError(L"ASI Plugin Error", msg, __VA_ARGS__)


// SDK and hook initialization macros.
// ============================================================

///
/// Initializes the SDK. If initialization fails, the function that calls this macro will return false.
///
#define INIT_CHECK_SDK() \
    auto _ = SDKInitializer::Instance(); \
    if (!SDKInitializer::Instance()->GetBioNamePools()) \
    { \
        errorln(L"Attach - GetBioNamePools() returned NULL!"); \
        return false; \
    } \
    if (!SDKInitializer::Instance()->GetObjects()) \
    { \
        errorln(L"GetObjects() returned NULL!"); \
        return false; \
    }

///
/// Finds the address of a pattern, and returns it, subtracting 5 bytes. For this to work, give it a pattern, but exclude the first 5 bytes of the function, as they will be modified when a hook is installed.
///
#define INIT_FIND_PATTERN_POSTHOOK(VAR, PATTERN) \
    if (auto rc = InterfacePtr->FindPattern((void**)&VAR, PATTERN); rc != SPIReturn::Success) \
    { \
        errorln(L"Attach - failed to find " #VAR L" posthook pattern: %d / %s", rc, SPIReturnToString(rc)); \
        return false; \
    } \
    VAR = (decltype(VAR))((char*)VAR - 5); \
    writeln(L"Attach - found " #VAR L" posthook pattern: 0x%p", VAR);

#define INIT_FIND_PATTERN_POSTRIP(VAR, PATTERN) \
    INIT_FIND_PATTERN(VAR, PATTERN); \
    VAR = (decltype(VAR))((char*)VAR + *(DWORD*)((char*)VAR - 4)); \
    writeln(L"Attach - found " #VAR L" global variable: %#p", VAR);

///
/// Installs a hook at the specified address and redirects it to the specified function name. The origianl must end with _orig as this macro looks for a method with that name.
///
#define INIT_HOOK_PATTERN(VAR) \
    if (auto rc = InterfacePtr->InstallHook(MYHOOK #VAR, VAR, CONCAT_NAME(VAR, _hook), (void**)& CONCAT_NAME(VAR, _orig)); rc != SPIReturn::Success) \
    { \
        fwprintf_s(stdout, L"Attach - failed to hook " #VAR L": %d / %s\n", rc, SPIReturnToString(rc)); \
        return false; \
    } \
    fwprintf_s(stdout, L"Attach - hooked " #VAR L": 0x%p -> 0x%p (saved at 0x%p)\n", VAR, CONCAT_NAME(VAR, _hook), CONCAT_NAME(VAR, _orig));


// COMMON HOOK PATTERNS
// THESE SHOULD BE PREFIXED WITH THE GAME ID IN CASE FILE IS COPY/PASTED TO OTHER ASI SOLUTIONS
// =====================================================

/// Post-Signature for hooking ProcessEvent. Works on LE1/LE2/LE3.
#define LE_PATTERN_POSTHOOK_PROCESSEVENT   /*"40 55 41 56 41*/ "57 48 81 EC 90 00 00 00 48 8D 6C 24 20 48 C7 45 50 FE FF FF FF 48 89 9D 90 00 00 00 48 89 B5 98 00 00 00 48 89 BD A0 00 00 00 4C 89 A5 A8 00 00 00 48 8B"
