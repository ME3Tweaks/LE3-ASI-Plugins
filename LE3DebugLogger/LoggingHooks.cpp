//#include <cstddef>
//#include <cstdio>
//#include "../LE3-SDK/Interface.h"
//#include "../LE3-SDK/Common.h"
//
//void logMessage(const wchar_t* logSource, wchar_t* formatStr, void* param1, void* param2)
//{
//	// Todo: Log to disk.
//	fwprintf_s(stdout, L"%s: ", logSource);
//	fwprintf_s(stdout, formatStr, param1, param2);
//	fwprintf_s(stdout, L"\n");
//}
//
//// LOGF
//typedef void (*tFOutputDeviceLogF)(void* outputDevice, wchar_t* formatStr, void* param1, void* param2);
//
//
//tFOutputDeviceLogF LogF = nullptr;
//tFOutputDeviceLogF LogF_orig = nullptr;
//void LogF_hook(void* fOutputDevice, wchar_t* formatStr, void* param1, void* param2)
//{
//	logMessage(L"appLogf", formatStr, param1, param2);
//}
//
//typedef void (*tFOutputDeviceErrorLogF)(void* outputDevice, int* code, wchar_t* formatStr, void* param1);
//tFOutputDeviceErrorLogF ErrorLogF = nullptr;
//tFOutputDeviceErrorLogF ErrorLogF_orig = nullptr;
//void ErrorLogF_hook(void* fOutputDevice, int* code, wchar_t* formatStr, void* param1)
//{
//	logMessage(L"appErrorLogf", formatStr, param1, param1);
//}
//
////typedef void (*tFOutputDeviceLogF)(void* param1, wchar_t* param2, wchar_t* param3);
//tFOutputDeviceLogF MsgF = nullptr;
//tFOutputDeviceLogF MsgF_orig = nullptr;
//void MsgF_hook(void* fOutputDevice, wchar_t* formatStr, wchar_t* param1)
//{
//	// Seems dangerous.
//	logMessage(L"appMsgf", formatStr, param1, 0);
//}
//
//typedef void (*tMessageBoxF)(int messageBoxType, wchar_t* formatString, wchar_t* param3);
//tMessageBoxF MsgFDialog = nullptr;
//tMessageBoxF MsgFDialog_orig = nullptr;
//void MsgFDialog_hook(int messageBoxType, wchar_t* formatStr, wchar_t* param1)
//{
//	MessageBoxW(NULL, formatStr, L"Game message", 0x0);
//}
//
//
//
//
//
//
//
//
//
//
//
//// ====================================
//// HOOKING FUNCTION
//// ====================================
//
//// Configures the hooks for built-in logging functions that don't output anything.
//void hookLoggingFunc(ISharedProxyInterface* InterfacePtr)
//{
//	// ============================================================
//	// appLogF
//	//=============================================================
//	writeln(L"Initializing appLogf hook...");
//	if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&LogF), "48 8b c4 48 89 50 10 4c 89 40 18 4c 89 48 20 56 48 83 ec 50 83 79 08 00 48 8b f1 0f 85 bf 00 00 00");
//		rc != SPIReturn::Success)
//	{
//		writeln(L"Attach - failed to find appLogf pattern: %d / %s", rc, SPIReturnToString(rc));
//		//return false;
//	}
//	else if (auto const rc = InterfacePtr->InstallHook(MYHOOK "appLogf", LogF, LogF_hook, reinterpret_cast<void**>(&LogF_orig));
//		rc != SPIReturn::Success)
//	{
//		writeln(L"Attach - failed to hook appLogf: %d / %s", rc, SPIReturnToString(rc));
//		//return false;
//	}
//	else
//	{
//		writeln(L"Hooked appLogf");
//	}
//
//	// ============================================================
//	// appLogF (FOutputDeviceError)
//	// ============================================================
//	writeln(L"Initializing errorAppLogf hook...");
//	if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&ErrorLogF), "4c 89 44 24 18 4c 89 4c 24 20 55 56 48 83 ec 58 83 79 08 00 48 8b ea 48 8b f1 0f 85 c3 00 00 00 83 3d 91 9d 57 01 00 0f 85 b6 00 00 00");
//		rc != SPIReturn::Success)
//	{
//		writeln(L"Attach - failed to find errorAppLogf pattern: %d / %s", rc, SPIReturnToString(rc));
//		//return false;
//	}
//	else if (auto const rc = InterfacePtr->InstallHook(MYHOOK "errorAppLogf", ErrorLogF, ErrorLogF_hook, reinterpret_cast<void**>(&ErrorLogF_orig));
//		rc != SPIReturn::Success)
//	{
//		writeln(L"Attach - failed to hook errorAppLogf: %d / %s", rc, SPIReturnToString(rc));
//		//return false;
//	}
//	else
//	{
//		writeln(L"Hooked errorAppLogf");
//	}
//
//	// ============================================================
//	// appMsgf
//	//=============================================================
//	//writeln(L"Initializing appMsgf hook...");
//	//if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&MsgF), "48 89 54 24 10 4c 89 44 24 18 4c 89 4c 24 20 53 55 56 57 b8 58 80 00 00 e8 b3 f6 d7 00");
//	//	rc != SPIReturn::Success)
//	//{
//	//	writeln(L"Attach - failed to find appMsgf pattern: %d / %s", rc, SPIReturnToString(rc));
//	//	//return false;
//	//}
//	//else if (auto const rc = InterfacePtr->InstallHook(MYHOOK "appMsgf", MsgF, MsgF_hook, reinterpret_cast<void**>(&MsgF_orig));
//	//	rc != SPIReturn::Success)
//	//{
//	//	writeln(L"Attach - failed to hook appMsgf: %d / %s", rc, SPIReturnToString(rc));
//	//	//return false;
//	//}
//	//else
//	//{
//	//	writeln(L"Hooked appMsgf");
//	//}
//
//	// ==============================================================
//	// appMsgf Dialog
//	// ==============================================================
//
//	writeln(L"Initializing appMsgfDialog hook...");
//	if (auto const rc = InterfacePtr->FindPattern(reinterpret_cast<void**>(&MsgFDialog), "48 89 54 24 10 4c 89 44 24 18 4c 89 4c 24 20 55 53 56 57 41 54 41 55 41 56 41 57 48 8d ac 24 58 80 ff ff");
//		rc != SPIReturn::Success)
//	{
//		writeln(L"Attach - failed to find appMsgfDialog pattern: %d / %s", rc, SPIReturnToString(rc));
//		//return false;
//	}
//	else if (auto const rc = InterfacePtr->InstallHook(MYHOOK "appMsgfDialog", MsgFDialog, MsgFDialog_hook, reinterpret_cast<void**>(&MsgFDialog_orig));
//		rc != SPIReturn::Success)
//	{
//		writeln(L"Attach - failed to hook appMsgfDialog: %d / %s", rc, SPIReturnToString(rc));
//		//return false;
//	}
//	else
//	{
//		writeln(L"Hooked appMsgfDialog");
//	}
//}
