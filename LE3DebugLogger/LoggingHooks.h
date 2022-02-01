#pragma once
void LogF_hook(void* fOutputDevice, wchar_t* formatStr, void* param1, void* param2);
void ErrorLogF_hook(void* fOutputDevice, int* code, wchar_t* formatStr, void* param1);
void MsgF_hook(void* fOutputDevice, wchar_t* formatStr, wchar_t* param1);
void MsgFDialog_hook(int messageBoxType, wchar_t* formatStr, wchar_t* param1);