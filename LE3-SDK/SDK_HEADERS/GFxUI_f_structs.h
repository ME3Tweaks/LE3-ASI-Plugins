/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: GFxUI_f_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/


#pragma once
#include <Windows.h>
#include <cstdio>
#include "../SdkInitializer.h"



#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Function Structs
# ========================================================================================= #
*/

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] ( FUNC_Event )
struct UGFxFSCmdHandler_eventFSCommand_Parms
{
	class UGFxMovie*                                   movie;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Cmd;                                              		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Arg;                                              		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxGameViewportClient.Init
// [0x00420802] ( FUNC_Event )
struct UGFxGameViewportClient_eventInit_Parms
{
	struct FString                                     OutError;                                         		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             oldlen;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyPlayerRemoved_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                RemovedPlayer;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyPlayerAdded_Parms
{
	int                                                PlayerIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ULocalPlayer*                                AddedPlayer;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execNotifyGameSessionEnded_Parms
{
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execGetFocusMovie_Parms
{
	class UGFxMovie*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxInteraction.SetFocusMovie
// [0x00020400] ( FUNC_Native )
struct UGFxInteraction_execSetFocusMovie_Parms
{
	struct FString                                     MovieName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      captureInput;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.UnregisterGFxValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execUnregisterGFxValue_Parms
{
	class UGFxValue*                                   i_val;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.RegisterGFxValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execRegisterGFxValue_Parms
{
	class UGFxValue*                                   i_val;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptSetFunction_Parms
{
	class UGFxValue*                                   Obj;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.ActionScriptObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptObject_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.ActionScriptString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptString_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.ActionScriptFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptFloat_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.ActionScriptInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptInt_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.ActionScriptVoid
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execActionScriptVoid_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.GetPC
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execGetPC_Parms
{
	class APlayerController*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetLP
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execGetLP_Parms
{
	class ULocalPlayer*                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetExternalInterface
// [0x00020002] 
struct UGFxMovie_execSetExternalInterface_Parms
{
	class UObject*                                     H;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetFsCmdHandler
// [0x00020002] 
struct UGFxMovie_execSetFsCmdHandler_Parms
{
	class UGFxFSCmdHandler*                            H;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetVariableObject
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableObject_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   Value;                                            		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.GetVariableObject
// [0x00024400] ( FUNC_Native )
struct UGFxMovie_execGetVariableObject_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.CreateArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execCreateArray_Parms
{
	class UGFxValue*                                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.CreateObject
// [0x00024400] ( FUNC_Native )
struct UGFxMovie_execCreateObject_Parms
{
	struct FString                                     ASClass;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetVariableStringArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableStringArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FString>                      Arg;                                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetVariableFloatArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableFloatArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<float>                               Arg;                                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetVariableIntArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableIntArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<int>                                 Arg;                                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetVariableArray
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FASValue>                     Arg;                                              		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariableStringArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableStringArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FString>                      Arg;                                              		// 0x0014 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariableFloatArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableFloatArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<float>                               Arg;                                              		// 0x0014 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariableIntArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableIntArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<int>                                 Arg;                                              		// 0x0014 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariableArray
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execGetVariableArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Index;                                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FASValue>                     Arg;                                              		// 0x0014 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetVariableString
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableString_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     S;                                                		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.SetVariableNumber
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableNumber_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              F;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetVariableBool
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariableBool_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      B;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetVariable
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetVariable_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    Arg;                                              		// 0x0010 (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.GetVariableString
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariableString_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.GetVariableNumber
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariableNumber_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariableBool
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariableBool_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.GetVariable
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execGetVariable_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x0010 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.PublishDataStoreValues
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execPublishDataStoreValues_Parms
{
};

// Function GFxUI.GFxMovie.RefreshDataStoreBindings
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execRefreshDataStoreBindings_Parms
{
};

// Function GFxUI.GFxMovie.Invoke
// [0x00420400] ( FUNC_Native )
struct UGFxMovie_execInvoke_Parms
{
	struct FString                                     method;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FASValue>                     Args;                                             		// 0x0010 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x0020 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxMovie.SetTimingMode
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetTimingMode_Parms
{
	unsigned char                                      mode;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.Pause
// [0x00024400] ( FUNC_Native )
struct UGFxMovie_execPause_Parms
{
	unsigned long                                      pauseplay;                                        		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxMovie.Advance
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execAdvance_Parms
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetExternalTexture
// [0x00020400] ( FUNC_Native )
struct UGFxMovie_execSetExternalTexture_Parms
{
	struct FString                                     Resource;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UTexture*                                    Texture;                                          		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.FlushPlayerInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execFlushPlayerInput_Parms
{
	unsigned long                                      capturekeysonly;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.ClearFocusIgnoreKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execClearFocusIgnoreKeys_Parms
{
};

// Function GFxUI.GFxMovie.AddFocusIgnoreKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execAddFocusIgnoreKey_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.ClearCaptureKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execClearCaptureKeys_Parms
{
};

// Function GFxUI.GFxMovie.AddCaptureKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execAddCaptureKey_Parms
{
	struct FName                                       Key;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetFocus
// [0x00024400] ( FUNC_Native )
struct UGFxMovie_execSetFocus_Parms
{
	unsigned long                                      captureInput;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      Focus;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxMovie.SetSceneDPG
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetSceneDPG_Parms
{
	unsigned char                                      NewDPG;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetPerspective3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetPerspective3D_Parms
{
	struct FMatrix                                     matPersp;                                         		// 0x0000 (0x0040) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GFxUI.GFxMovie.SetView3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetView3D_Parms
{
	struct FMatrix                                     matView;                                          		// 0x0000 (0x0040) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GFxUI.GFxMovie.GetVisibleFrameRect
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execGetVisibleFrameRect_Parms
{
	float                                              x0;                                               		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              y0;                                               		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              X1;                                               		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Y1;                                               		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function GFxUI.GFxMovie.SetAlignment
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetAlignment_Parms
{
	unsigned char                                      A;                                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetViewScaleMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetViewScaleMode_Parms
{
	unsigned char                                      sm;                                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.SetViewport
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execSetViewport_Parms
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Width;                                            		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Height;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.GetGameViewportClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxMovie_execGetGameViewportClient_Parms
{
	class UGameViewportClient*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxMovie.SetMovieInfo
// [0x00020002] 
struct UGFxMovie_execSetMovieInfo_Parms
{
	class UGFxMovieInfo*                               Data;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxMovie.OnClose
// [0x00020800] ( FUNC_Event )
struct UGFxMovie_eventOnClose_Parms
{
};

// Function GFxUI.GFxMovie.Close
// [0x00024400] ( FUNC_Native )
struct UGFxMovie_execClose_Parms
{
	unsigned long                                      Unload;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxMovie.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
struct UGFxMovie_eventStart_Parms
{
	unsigned long                                      StartPaused;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.ActionScriptSetFunctionOn
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptSetFunctionOn_Parms
{
	class UGFxValue*                                   Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.ActionScriptSetFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptSetFunction_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.ActionScriptArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptArray_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<class UGFxValue*>                    ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.ActionScriptObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptObject_Parms
{
	struct FString                                     Path;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.ActionScriptString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptString_Parms
{
	struct FString                                     method;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.ActionScriptFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptFloat_Parms
{
	struct FString                                     method;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.ActionScriptInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptInt_Parms
{
	struct FString                                     method;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.ActionScriptVoid
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execActionScriptVoid_Parms
{
	struct FString                                     method;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.SetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementMemberString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     S;                                                		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.SetElementMemberNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementMemberNumber_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              F;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementMemberBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      B;                                                		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElementMemberObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementMemberObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   val;                                              		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementMember_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    Arg;                                              		// 0x0014 (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.GetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementMemberString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0014 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.GetElementMemberNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementMemberNumber_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementMemberBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetElementMemberObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementMemberObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementMember_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     member;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x0014 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.SetElementColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementColorTransform_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FASColorTransform                           cxform;                                           		// 0x0004 (0x0020) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElementPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementPosition_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              X;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElementVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementVisible_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      visible;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementDisplayMatrix_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMatrix                                     M;                                                		// 0x0010 (0x0040) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementDisplayInfo_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FASDisplayInfo                              D;                                                		// 0x0004 (0x002C) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     S;                                                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.SetElementNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementNumber_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              F;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      B;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElementObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElementObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UGFxValue*                                   val;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetElement_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FASValue                                    Arg;                                              		// 0x0004 (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.GetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementDisplayMatrix_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMatrix                                     ReturnValue;                                      		// 0x0010 (0x0040) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementDisplayInfo_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FASDisplayInfo                              ReturnValue;                                      		// 0x0004 (0x002C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementString_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.GetElementNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementNumber_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementBool_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetElementObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElementObject_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      Type;                                             		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x000C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetElement_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FASValue                                    ReturnValue;                                      		// 0x0004 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.SetMemberObjectText
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetMemberObjectText_Parms
{
	struct FString                                     sMember;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sText;                                            		// 0x0010 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	unsigned long                                      bIsHTML;                                          		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxValue.SetText
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	unsigned long                                      bIsHTML;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxValue.GetText
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetText_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.CastTo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execCastTo_Parms
{
	class UClass*                                      Type;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000D80]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
};

// Function GFxUI.GFxValue.AttachMovie
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execAttachMovie_Parms
{
	struct FString                                     symbolname;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     InstanceName;                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Depth;                                            		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      Type;                                             		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x002C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.CreateEmptyMovieClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execCreateEmptyMovieClip_Parms
{
	struct FString                                     InstanceName;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Depth;                                            		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UClass*                                      Type;                                             		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GotoAndStopI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGotoAndStopI_Parms
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.GotoAndStop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGotoAndStop_Parms
{
	struct FString                                     frame;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.GotoAndPlayI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGotoAndPlayI_Parms
{
	int                                                frame;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.GotoAndPlay
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGotoAndPlay_Parms
{
	struct FString                                     frame;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.SetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetColorTransform_Parms
{
	struct FASColorTransform                           cxform;                                           		// 0x0000 (0x0020) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetPosition_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetVisible_Parms
{
	unsigned long                                      visible;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetDisplayMatrix3D_Parms
{
	struct FMatrix                                     M;                                                		// 0x0000 (0x0040) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetDisplayMatrix_Parms
{
	struct FMatrix                                     M;                                                		// 0x0000 (0x0040) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetDisplayInfo
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetDisplayInfo_Parms
{
	struct FASDisplayInfo                              D;                                                		// 0x0000 (0x002C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function GFxUI.GFxValue.GetPosition
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetPosition_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetColorTransform_Parms
{
	struct FASColorTransform                           ReturnValue;                                      		// 0x0000 (0x0020) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetDisplayMatrix_Parms
{
	struct FMatrix                                     ReturnValue;                                      		// 0x0000 (0x0040) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetDisplayInfo_Parms
{
	struct FASDisplayInfo                              ReturnValue;                                      		// 0x0000 (0x002C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.SetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetString_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     S;                                                		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.SetNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetNumber_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              F;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetBool_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      B;                                                		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetFunction_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UObject*                                     Context;                                          		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       fname;                                            		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.SetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSetObject_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UGFxValue*                                   val;                                              		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxValue.Set
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execSet_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    Arg;                                              		// 0x0010 (0x001C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.GetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetString_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.GetNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetNumber_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetBool_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.GetObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGetObject_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UClass*                                      Type;                                             		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UGFxValue*                                   ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxValue.Get
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execGet_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x0010 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxValue.Invoke
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxValue_execInvoke_Parms
{
	struct FString                                     member;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FASValue>                     Args;                                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FASValue                                    ReturnValue;                                      		// 0x0020 (0x001C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
struct UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGFxFSCmdHandler_Kismet_eventFSCommand_Parms
{
	class UGFxMovie*                                   movie;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Cmd;                                              		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Arg;                                              		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue
// [0x00424400] ( FUNC_Native )
struct UGFxDataStoreSubscriber_execSaveSubscriberValue_Parms
{
	struct TArray<class UUIDataStore*>                 out_BoundDataStores;                              		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execClearBoundDataStores_Parms
{
};

// Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execGetBoundDataStores_Parms
{
	struct TArray<class UUIDataStore*>                 out_BoundDataStores;                              		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execNotifyDataStoreValueUpdated_Parms
{
	class UUIDataStore*                                SourceDataStore;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bValuesInvalidated;                               		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       PropertyTag;                                      		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UUIDataProvider*                             SourceProvider;                                   		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ArrayIndex;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execRefreshSubscriberValue_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execGetDataStoreBinding_Parms
{
	int                                                BindingIndex;                                     		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execSetDataStoreBinding_Parms
{
	struct FString                                     MarkupText;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BindingIndex;                                     		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GFxUI.GFxDataStoreSubscriber.PublishValues
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGFxDataStoreSubscriber_execPublishValues_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif