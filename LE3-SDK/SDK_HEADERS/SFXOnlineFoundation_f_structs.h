/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXOnlineFoundation_f_structs.h
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

// Function SFXOnlineFoundation.SFXOnlineComponent.IsXbox360
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponent_eventIsXbox360_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsPS3
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponent_eventIsPS3_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsConsole
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponent_eventIsConsole_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetAllPendingEvents
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execGetAllPendingEvents_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<class USFXOnlineEvent*>              aPendingEvents;                                   		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsAnyEventPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execIsAnyEventPending_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.IsEventPending
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execIsEventPending_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventID;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetEvent
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execGetEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventID;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkSetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkSetObject_Parms
{
	struct TArray<class USFXOnlineEvent*>              aOnlineEventSet;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkSetType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkSetType_Parms
{
	struct TArray<unsigned char>                       aWorkUnits;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.WaitingForWorkType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execWaitingForWorkType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nEventID;                                         		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkFinishedObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkFinishedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkFinishedType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkFinishedType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                nEventID;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkStartedObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkStartedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEventType;                                       		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              TimeOut;                                          		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyWorkStartedType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyWorkStartedType_Parms
{
	unsigned char                                      eWork;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventID;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fTimeOut;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyEventObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyEventObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.NotifyEventType
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execNotifyEventType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatus;                                          		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      eOutcome;                                         		// 0x0002 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.StopWaitingForAllWork
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execStopWaitingForAllWork_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.UnsubscribeFromAllEvents
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execUnsubscribeFromAllEvents_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.UnsubscribeFromEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execUnsubscribeFromEvent_Parms
{
	unsigned char                                      oEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.SubscribeToEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponent_execSubscribeToEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnEvent
// [0x00120000] 
struct USFXOnlineComponent_execOnEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponent.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponent_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventTypeFromString
// [0x00022400] ( FUNC_Native )
struct USFXOnlineEvent_execGetEventTypeFromString_Parms
{
	struct FString                                     sEventString;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventOutcomeAsString
// [0x00022400] ( FUNC_Native )
struct USFXOnlineEvent_execGetEventOutcomeAsString_Parms
{
	unsigned char                                      oEventOutcome;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventStatusAsString
// [0x00022400] ( FUNC_Native )
struct USFXOnlineEvent_execGetEventStatusAsString_Parms
{
	unsigned char                                      eStatusStatus;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventTypeAsString
// [0x00022400] ( FUNC_Native )
struct USFXOnlineEvent_execGetEventTypeAsString_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.DumpEventInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEvent_execDumpEventInfo_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineEvent.Update
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEvent_execUpdate_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsSucceeded
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsSucceeded_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsCanceled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsCanceled_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsInError
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsInError_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsComplete
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsComplete_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsPending_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsCompleteAndSucceeded
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsCompleteAndSucceeded_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEndTime
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetEndTime_Parms
{
	float                                              CurrentTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetStartTime
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetStartTime_Parms
{
	float                                              CurrentTime;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEndTime
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetEndTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetStartTime
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetStartTime_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetTimeDifference
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetTimeDifference_Parms
{
	float                                              CurrentTime;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.HasTimedOut
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execHasTimedOut_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.IsTimeoutEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execIsTimeoutEnabled_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.DisableTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execDisableTimeout_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineEvent.EnableTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execEnableTimeout_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetTimeout_Parms
{
	float                                              fEventTimeout;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetTimeout
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetTimeout_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetErrorString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetErrorString_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetErrorString
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetErrorString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetErrorCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetErrorCode_Parms
{
	int                                                nCode;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetErrorCode
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetErrorCode_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetStatus_Parms
{
	unsigned char                                      eNewStatus;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetStatus
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetOutcome
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetOutcome_Parms
{
	unsigned char                                      eStatusFinished;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetOutcome
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetOutcome_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEventId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetEventId_Parms
{
	int                                                nNewEventId;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventId
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetEventId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.SetEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execSetEventType_Parms
{
	unsigned char                                      eNewEventType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent.GetEventType
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_execGetEventType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Integer.SetInteger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Integer_execSetInteger_Parms
{
	int                                                nInteger;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Integer.GetInteger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Integer_execGetInteger_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_String.SetStringData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_String_execSetStringData_Parms
{
	struct FString                                     sStringData;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_String.GetStringData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_String_execGetStringData_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.SetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execSetPriority_Parms
{
	int                                                nPriority;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.GetPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execGetPriority_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.SetImageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execSetImageName_Parms
{
	struct FString                                     sImageName;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEvent_Notification.GetImageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEvent_Notification_execGetImageName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetNextTimedOutEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetNextTimedOutEvent_Parms
{
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.RemoveEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execRemoveEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetAllPendingEvents
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetAllPendingEvents_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<class USFXOnlineEvent*>              PendingEvents;                                    		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.FindEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execFindEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetEventAtIndex
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetEventAtIndex_Parms
{
	int                                                nEventIndex;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.GetEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execGetEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventList.AddEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineEventList_execAddEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.GetAPIName
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.OnRelease
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponent.OnInitialize
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponent_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentAchievement_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentAchievement_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.IsGranted
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAchievement_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAchievement.Grant
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAchievement_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAPI.Idle
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAPI_execIdle_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAPI.ResetLocale
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAPI_execResetLocale_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentAPI.GetCurrentTime
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentAPI_execGetCurrentTime_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.METR_UpdateDLCEntitlements
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execMETR_UpdateDLCEntitlements_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.DecryptOfflineEntitlementInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execDecryptOfflineEntitlementInfo_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.StoreOfflineEntitlementInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execStoreOfflineEntitlementInfo_Parms
{
	struct FString                                     a_sEncryptedContent;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.DumpTestData
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execDumpTestData_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.NucleusEntitlementsRefreshOffline
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execNucleusEntitlementsRefreshOffline_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.LoadDimeConfig
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execLoadDimeConfig_Parms
{
	struct FString                                     sConfig;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.OnDimeConfigLoaded
// [0x00120000] 
struct UISFXOnlineComponentCommerce_execOnDimeConfigLoaded_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.FetchOfferDetails
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execFetchOfferDetails_Parms
{
	struct TArray<struct FBWOfferId>                   aOffers;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.OnFetchOfferDetailsComplete
// [0x00120000] 
struct UISFXOnlineComponentCommerce_execOnFetchOfferDetailsComplete_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.GetOffersList
// [0x00424800] ( FUNC_Event )
struct UISFXOnlineComponentCommerce_eventGetOffersList_Parms
{
	struct TArray<struct FBWOfferInfo>                 aOffers;                                          		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FBWOfferId>                   aOfferFilter;                                     		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.GetWalletBalance
// [0x00020000] 
struct UISFXOnlineComponentCommerce_execGetWalletBalance_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.Display1stPartyStore
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execDisplay1stPartyStore_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.PurchaseOfferId
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execPurchaseOfferId_Parms
{
	struct FBWOfferId                                  Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.OnPurchaseOfferIdResult
// [0x00120000] 
struct UISFXOnlineComponentCommerce_execOnPurchaseOfferIdResult_Parms
{
	int                                                nResult;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.OnCodeRedeemed
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execOnCodeRedeemed_Parms
{
	unsigned char                                      nResult;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.SubmitRedeemCode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execSubmitRedeemCode_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strCode;                                          		// 0x0004 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.PromptRedeemCode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execPromptRedeemCode_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.OnPromptRedeemCodeResult
// [0x00120000] 
struct UISFXOnlineComponentCommerce_execOnPromptRedeemCodeResult_Parms
{
	int                                                nResult;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.ProcessAutoGrants
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execProcessAutoGrants_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.OnProcessAutoGrantsComplete
// [0x00120000] 
struct UISFXOnlineComponentCommerce_execOnProcessAutoGrantsComplete_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.GrantEntitlementId
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execGrantEntitlementId_Parms
{
	struct FBWEntitlementId                            Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUseNucleusCheck;                                 		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.OnGrantEntitlementResult
// [0x00120000] 
struct UISFXOnlineComponentCommerce_execOnGrantEntitlementResult_Parms
{
	struct FBWEntitlementId                            Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nResult;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.ConsumeId
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execConsumeId_Parms
{
	struct FBWConsumableId                             Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCopies;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.OnConsumeResult
// [0x00120000] 
struct UISFXOnlineComponentCommerce_execOnConsumeResult_Parms
{
	struct FBWConsumableId                             Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCopies;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nResult;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.GetConsumableInfo
// [0x00420800] ( FUNC_Event )
struct UISFXOnlineComponentCommerce_eventGetConsumableInfo_Parms
{
	struct FBWConsumableId                             Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBWConsumableInfo                           oConsumable;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.GetConsumablesList
// [0x00420800] ( FUNC_Event )
struct UISFXOnlineComponentCommerce_eventGetConsumablesList_Parms
{
	struct TArray<struct FBWConsumableInfo>            aConsumables;                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.GetEntitlementInfo
// [0x00420800] ( FUNC_Event )
struct UISFXOnlineComponentCommerce_eventGetEntitlementInfo_Parms
{
	struct FBWEntitlementId                            Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBWEntitlementInfo                          oEntitlement;                                     		// 0x0004 (0x0014) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.GetEntitlementsList
// [0x00420800] ( FUNC_Event )
struct UISFXOnlineComponentCommerce_eventGetEntitlementsList_Parms
{
	struct TArray<struct FBWEntitlementInfo>           aEntitlements;                                    		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.RefreshDigitalRights
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentCommerce_execRefreshDigitalRights_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentCommerce.OnRefreshDigitalRightsResult
// [0x00120000] 
struct UISFXOnlineComponentCommerce_execOnRefreshDigitalRightsResult_Parms
{
	int                                                nResult;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.SetBaseURL
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGalaxyAtWar_eventSetBaseURL_Parms
{
	struct FString                                     BaseUrl;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.ParseTouchMessagesResult
// [0x00420800] ( FUNC_Event )
struct UISFXOnlineComponentGalaxyAtWar_eventParseTouchMessagesResult_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                numMsgs;                                          		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                errorCode;                                        		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.GetTouchMessagesHTTPRequest
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execGetTouchMessagesHTTPRequest_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.ParseGetMessagesResult
// [0x00420800] ( FUNC_Event )
struct UISFXOnlineComponentGalaxyAtWar_eventParseGetMessagesResult_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FMessageEntry>                messageEntries;                                   		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x0018 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.GetGetMessagesHTTPRequest
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execGetGetMessagesHTTPRequest_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.ParseSendMessageResult
// [0x00420800] ( FUNC_Event )
struct UISFXOnlineComponentGalaxyAtWar_eventParseSendMessageResult_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                messageId;                                        		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct TArray<int>                                 messageIds;                                       		// 0x000C (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.GetSendMessageHTTPRequest
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execGetSendMessageHTTPRequest_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     param1;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     param2;                                           		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     param3;                                           		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0034 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.ParseHTTPRatingsAssetsLevel
// [0x00420800] ( FUNC_Event )
struct UISFXOnlineComponentGalaxyAtWar_eventParseHTTPRatingsAssetsLevel_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<int>                                 updatedSecurityRatings;                           		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<int>                                 updatedWarAssets;                                 		// 0x0018 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0028 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                errorCode;                                        		// 0x002C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.GetIncreaseRatingsHTTPRequest
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execGetIncreaseRatingsHTTPRequest_Parms
{
	int                                                defaultRatingIncrease;                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FMapEntry>                    securityRatingsIncrease;                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FMapEntry>                    warAssetsIncrease;                                		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0024 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.GetRatingsHTTPRequest
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execGetRatingsHTTPRequest_Parms
{
	unsigned long                                      getAssets;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.ParseAuthenticationResult
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGalaxyAtWar_eventParseAuthenticationResult_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.GetAuthenticationHTTPRequest
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execGetAuthenticationHTTPRequest_Parms
{
	struct FString                                     token;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                tokenType;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0014 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.InvalidateSession
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGalaxyAtWar_eventInvalidateSession_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.IsSessionValid
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGalaxyAtWar_eventIsSessionValid_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.Cleanup
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execCleanup_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.TouchMessages
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execTouchMessages_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.GetMessages
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execGetMessages_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.SendMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execSendMessage_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sendMsgParam1;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ParamType;                                        		// 0x0014 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sendMsgParam3;                                    		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.IncreaseRatings
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execIncreaseRatings_Parms
{
	int                                                defaultRatingIncrease;                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FMapEntry>                    securityRatingIncrease;                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FMapEntry>                    warAssetIncrease;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.GetRatings
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGalaxyAtWar_execGetRatings_Parms
{
	unsigned long                                      getWarAssets;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCached;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.OnTouchMessagesComplete
// [0x00120000] 
struct UISFXOnlineComponentGalaxyAtWar_execOnTouchMessagesComplete_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.OnGetMessagesComplete
// [0x00120000] 
struct UISFXOnlineComponentGalaxyAtWar_execOnGetMessagesComplete_Parms
{
	struct TArray<struct FMessageEntry>                Messages;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.OnSendMessageComplete
// [0x00120000] 
struct UISFXOnlineComponentGalaxyAtWar_execOnSendMessageComplete_Parms
{
	int                                                messageId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<int>                                 messageIds;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.OnIncreaseRatingsComplete
// [0x00120000] 
struct UISFXOnlineComponentGalaxyAtWar_execOnIncreaseRatingsComplete_Parms
{
	struct TArray<int>                                 updatedSecurityRatings;                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 updatedWarAssets;                                 		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.OnGetRatingsComplete
// [0x00120000] 
struct UISFXOnlineComponentGalaxyAtWar_execOnGetRatingsComplete_Parms
{
	struct TArray<int>                                 updatedSecurityRatings;                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 updatedWarAssets;                                 		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGalaxyAtWar.AuthenticateCompleted
// [0x00120000] 
struct UISFXOnlineComponentGalaxyAtWar_execAuthenticateCompleted_Parms
{
	int                                                errorCode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.PerformCallRestrictedFunction
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execPerformCallRestrictedFunction_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.SetCallRestrictedFunctionMode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execSetCallRestrictedFunctionMode_Parms
{
	unsigned long                                      bEnable;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.AllowMatchmaking
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execAllowMatchmaking_Parms
{
	unsigned long                                      bAllow;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUpdateServer;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.IsInvalidHost
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execIsInvalidHost_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.GetMultiplayer_MissingDLCs
// [0x00420000] 
struct UISFXOnlineComponentGame_execGetMultiplayer_MissingDLCs_Parms
{
	struct TArray<struct FMPDLCInfo>                   missingDLCs;                                      		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bInvitee;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.SetMPDLCInfo
// [0x00420800] ( FUNC_Event )
struct UISFXOnlineComponentGame_eventSetMPDLCInfo_Parms
{
	struct TArray<struct FMPDLCInfo>                   allAvailableDLCs;                                 		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.IsOnLatestMultiplayerVersion
// [0x00020000] 
struct UISFXOnlineComponentGame_execIsOnLatestMultiplayerVersion_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.UpdateGameProtocolVersion
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execUpdateGameProtocolVersion_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.SetServerMatchMakingRulesVersion
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGame_eventSetServerMatchMakingRulesVersion_Parms
{
	int                                                serverRulesVersion;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.SetMultiplayerTargetVersion
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGame_eventSetMultiplayerTargetVersion_Parms
{
	int                                                protocolVersion;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.GetSFXGameSettings
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGame_eventGetSFXGameSettings_Parms
{
	class USFXOnlineGameSettings*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.SetKickedOutOfGame
// [0x00020000] 
struct UISFXOnlineComponentGame_execSetKickedOutOfGame_Parms
{
	unsigned long                                      wasKicked;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.WasKickedOutOfGame
// [0x00020000] 
struct UISFXOnlineComponentGame_execWasKickedOutOfGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.KickPlayer
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execKickPlayer_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.GetPlayerCount
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execGetPlayerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.IsHostMigrationInProgress
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execIsHostMigrationInProgress_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.IsReadyForConnections
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execIsReadyForConnections_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.SetHostViabilityEnabled
// [0x00020000] 
struct UISFXOnlineComponentGame_execSetHostViabilityEnabled_Parms
{
	unsigned long                                      Enabled;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.OnConnectionError
// [0x00020000] 
struct UISFXOnlineComponentGame_execOnConnectionError_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.LeaveGame
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execLeaveGame_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.IsPlaying
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execIsPlaying_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGame.OnHostAddressResolved
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentGame_execOnHostAddressResolved_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.GetDeferredGameSettings
// [0x00020000] 
struct UISFXOnlineComponentGameEntryFlow_execGetDeferredGameSettings_Parms
{
	class USFXOnlineGameSettings*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.SetLoginState
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameEntryFlow_eventSetLoginState_Parms
{
	unsigned char                                      loginState;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.IsInvitedUserActive
// [0x00420000] 
struct UISFXOnlineComponentGameEntryFlow_execIsInvitedUserActive_Parms
{
	struct FUniqueNetId                                invitedId;                                        		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.OnKitDeployed
// [0x00020000] 
struct UISFXOnlineComponentGameEntryFlow_execOnKitDeployed_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.OnConnectToMapFlowCompleted
// [0x00024000] 
struct UISFXOnlineComponentGameEntryFlow_execOnConnectToMapFlowCompleted_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.IsWaitingForKitSelect
// [0x00020000] 
struct UISFXOnlineComponentGameEntryFlow_execIsWaitingForKitSelect_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.IsInConnectToMapFlow
// [0x00020000] 
struct UISFXOnlineComponentGameEntryFlow_execIsInConnectToMapFlow_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.IsInGalaxyMapFlow
// [0x00020000] 
struct UISFXOnlineComponentGameEntryFlow_execIsInGalaxyMapFlow_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.ActivateConnectToMapFlow
// [0x00024000] 
struct UISFXOnlineComponentGameEntryFlow_execActivateConnectToMapFlow_Parms
{
	struct FString                                     mapPackageName;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      fromGalaxyMap;                                    		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      Difficulty;                                       		// 0x0014 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                objectiveMode;                                    		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.ActivateMPLobbyAccessFlow
// [0x00020000] 
struct UISFXOnlineComponentGameEntryFlow_execActivateMPLobbyAccessFlow_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.ActivateConnectFlow
// [0x00020000] 
struct UISFXOnlineComponentGameEntryFlow_execActivateConnectFlow_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameEntryFlow.ActivateInviteFlow
// [0x00420000] 
struct UISFXOnlineComponentGameEntryFlow_execActivateInviteFlow_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_IsConnectionErrorSilent
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_IsConnectionErrorSilent_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_IsInMPMapAction
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_IsInMPMapAction_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_IsInMultiplayerGame
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_IsInMultiplayerGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_IsInMultiplayerFlow
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_IsInMultiplayerFlow_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_IsLeavingGame
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_IsLeavingGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_HasFailedConnecting_QM
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_HasFailedConnecting_QM_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_HasFailedJoiningGameMissingDLCInviter
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_HasFailedJoiningGameMissingDLCInviter_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_HasFailedJoiningGameMissingDLCInvitee
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_HasFailedJoiningGameMissingDLCInvitee_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_HasFailedJoiningGameProtocolMismatch
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_HasFailedJoiningGameProtocolMismatch_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_HasFailedJoiningInviterLeft
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_HasFailedJoiningInviterLeft_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_HasFailedJoiningFullGame
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_HasFailedJoiningFullGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_HasJoinedGame
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_HasJoinedGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_HasCreatedGame
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_HasCreatedGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnHostMigrationEnded
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnHostMigrationEnded_Parms
{
	unsigned long                                      bInLobby;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnHostMigrationStarted
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnHostMigrationStarted_Parms
{
	unsigned long                                      bLocalPlayerIsHost;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnProfileSelected
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnProfileSelected_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnNetworkErrorDismissed
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnNetworkErrorDismissed_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnP2PConnectionFailure
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnP2PConnectionFailure_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnDisconnect
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnDisconnect_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnGameJoined
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnGameJoined_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnInviteErrorNotified
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnInviteErrorNotified_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnInviteProceed
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnInviteProceed_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnInviteAborted
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnInviteAborted_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnInviteAccepted
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnInviteAccepted_Parms
{
	unsigned long                                      invitedInactiveUser;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnHostAddressResolved
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnHostAddressResolved_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnLeaveGameComplete
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnLeaveGameComplete_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnLeaveGame
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnLeaveGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnGameCreated
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnGameCreated_Parms
{
	unsigned long                                      bSuccess;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnCreateGameSent
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnCreateGameSent_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnQuickMatchSent
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnQuickMatchSent_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnExitMPFlow
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnExitMPFlow_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnEnterMPGameResults
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnEnterMPGameResults_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnEnterMPGameplay
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnEnterMPGameplay_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GM_OnEnterMPFlow
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGM_OnEnterMPFlow_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.DebugValidateStates
// [0x00024800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventDebugValidateStates_Parms
{
	unsigned long                                      writeToFile;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentGameFlow.GetStateStr
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentGameFlow_eventGetStateStr_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.HasNotificationsAvailable
// [0x00020000] 
struct UISFXOnlineComponentLeaderboard_execHasNotificationsAvailable_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.RemoveRankNotificationCallback
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentLeaderboard_eventRemoveRankNotificationCallback_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.AddRankNotificationCallback
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentLeaderboard_eventAddRankNotificationCallback_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.GetCurrentRankNotificationsArray
// [0x00020000] 
struct UISFXOnlineComponentLeaderboard_execGetCurrentRankNotificationsArray_Parms
{
	struct TArray<struct FRankBypassNotification>      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.RefreshLeaderboardTitles
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execRefreshLeaderboardTitles_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.ShowGamerCardForRecord
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execShowGamerCardForRecord_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FLeaderboardRecord                          Record;                                           		// 0x0004 (0x001C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.ReadLeaderboardList
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execReadLeaderboardList_Parms
{
	struct TArray<int>                                 jobIds;                                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.GetFriendLeaderboardData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execGetFriendLeaderboardData_Parms
{
	int                                                pLbId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.GetLeaderboardCenteredData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execGetLeaderboardCenteredData_Parms
{
	int                                                pLbId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                nPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankRange;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.GetLeaderboardData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execGetLeaderboardData_Parms
{
	int                                                pLbId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankStart;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankRange;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x000C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.CancelLeaderboardRequests
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execCancelLeaderboardRequests_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.RequestReadLeaderboardList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execRequestReadLeaderboardList_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.GetRankNotifications
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execGetRankNotifications_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.RequestLeaderboardCenteredData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execRequestLeaderboardCenteredData_Parms
{
	struct FLeaderboardDefinition                      LeaderboardDef;                                   		// 0x0000 (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUniqueNetId                                nPlayerId;                                        		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankRange;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.RequestLeaderboardData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execRequestLeaderboardData_Parms
{
	struct FLeaderboardDefinition                      LeaderboardDef;                                   		// 0x0000 (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nRankStart;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankRange;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.GetLeaderboardDefinitionTable
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execGetLeaderboardDefinitionTable_Parms
{
	struct TArray<struct FLeaderboardMapGroup>         aLBDefTableRows;                                  		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.GetLeaderboardDefinitions
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLeaderboard_execGetLeaderboardDefinitions_Parms
{
	struct TArray<struct FLeaderboardDefinition>       aLBDefinitions;                                   		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.OnGetRankNotificationsCompleted
// [0x00120000] 
struct UISFXOnlineComponentLeaderboard_execOnGetRankNotificationsCompleted_Parms
{
	struct TArray<struct FRankBypassNotification>      RankBypassNotificationArray;                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.OnReadLbListCompleted
// [0x00120000] 
struct UISFXOnlineComponentLeaderboard_execOnReadLbListCompleted_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLeaderboard.OnResultsRetrieved
// [0x00124000] 
struct UISFXOnlineComponentLeaderboard_execOnResultsRetrieved_Parms
{
	struct TArray<struct FLeaderboardColumn>           aColumnInfo;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                iTotalRanks;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                uidEntity;                                        		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      nErrorCode;                                       		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0030 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SetExternalDRMDataLoaded
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSetExternalDRMDataLoaded_Parms
{
	unsigned long                                      bValue;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.StartCerberusLogin
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execStartCerberusLogin_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.PostImportFriendListToBlaze
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execPostImportFriendListToBlaze_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SuspendUserPing
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSuspendUserPing_Parms
{
	unsigned long                                      suspend;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetConnectMode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetConnectMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanShowPresenceInformation
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanShowPresenceInformation_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanViewPlayerProfiles
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanViewPlayerProfiles_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanPurchaseContent
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanPurchaseContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanDownloadUserContent
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanDownloadUserContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanCommunicate
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanCommunicate_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CanPlayOnline
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCanPlayOnline_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.EnterCDKey
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execEnterCDKey_Parms
{
	struct FString                                     sKey;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetAuthToken
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetAuthToken_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.ImportFriendListToBlaze
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execImportFriendListToBlaze_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnImportFriendListToBlazeCompleted
// [0x00120000] 
struct UISFXOnlineComponentLogin_execOnImportFriendListToBlazeCompleted_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnAuthTokenRetrieved
// [0x00120000] 
struct UISFXOnlineComponentLogin_execOnAuthTokenRetrieved_Parms
{
	struct FString                                     token;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.RequestImportFriendListToBlaze
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentLogin_execRequestImportFriendListToBlaze_Parms
{
	unsigned long                                      callPostImportFriendListToBlaze;                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnDownloadOffersUICompleted
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOnDownloadOffersUICompleted_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OnDLCInfoLoaded
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOnDLCInfoLoaded_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.OpenCerberusUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execOpenCerberusUI_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsCerberusMember
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsCerberusMember_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.DisablePersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execDisablePersona_Parms
{
	struct FString                                     sPersonaNonGrata;                                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CreatePersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCreatePersona_Parms
{
	struct FString                                     sPersonaName;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SelectPersona
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSelectPersona_Parms
{
	struct FString                                     sPersonaName;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.AcceptTOS
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execAcceptTOS_Parms
{
	unsigned long                                      bAccepted;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Disconnect
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execDisconnect_Parms
{
	unsigned long                                      bShowError;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitStore
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitStore_Parms
{
	struct TArray<int>                                 aiChosen;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCreateNucleusAccountEx_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bThirdParty;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBioWareProducts;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sCountryCode;                                   		// 0x002C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BirthDay;                                         		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthMonth;                                       		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthYear;                                        		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sLanguageCode;                                  		// 0x0048 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bSubmit;                                          		// 0x0058 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitEmailPasswordMismatch_Parms
{
	struct FString                                     email;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                eReturnCode;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitMessageBox
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitMessageBox_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitRedeemCode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitRedeemCode_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sCode;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCerberusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCerberusIntro
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCerberusIntro_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitNucleusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitCreateNucleusAccount_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bThirdParty;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBioWareProducts;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSubmit;                                          		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitParentEmail
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitParentEmail_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ParentEmail;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitNucleusLogin
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitNucleusLogin_Parms
{
	struct FString                                     email;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      eReturnCode;                                      		// 0x0020 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SubmitIntroPage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSubmitIntroPage_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSimulated;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.AutoLogin
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execAutoLogin_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.AutoLoginWithAccountIndex
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execAutoLoginWithAccountIndex_Parms
{
	int                                                configAccountIndex;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.CheckAutoLoginFromIni
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCheckAutoLoginFromIni_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GoBackInUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGoBackInUI_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Cancel
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execCancel_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetUserId
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetUserId_Parms
{
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetPersonaName
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetPersonaName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.HasInternetConnection
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execHasInternetConnection_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsConnectedTo1stPartyOnlineService
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsConnectedTo1stPartyOnlineService_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsSignedIn
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsSignedIn_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsConnected
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsConnected_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.Connect
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execConnect_Parms
{
	unsigned char                                      connectMode;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.IsActiveUser
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execIsActiveUser_Parms
{
	struct FUniqueNetId                                userId;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.SwitchActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execSwitchActiveUserIndex_Parms
{
	int                                                nNewIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetActiveUserIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentLogin.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentLogin_execGetLoginStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentMatchMakingBot.SetEnabled
// [0x00020000] 
struct UISFXOnlineComponentMatchMakingBot_execSetEnabled_Parms
{
	unsigned long                                      Enabled;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentMatchMakingBot.SetOptions
// [0x00020000] 
struct UISFXOnlineComponentMatchMakingBot_execSetOptions_Parms
{
	unsigned long                                      withDisconnections;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      fastForward;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentMessaging.PurgeAllMessagesViaJob
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentMessaging_execPurgeAllMessagesViaJob_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentMessaging.FetchAllMessagesViaJob
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentMessaging_execFetchAllMessagesViaJob_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentMessaging.SendMessage
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentMessaging_execSendMessage_Parms
{
	struct TArray<struct FString>                      sendToPersonaNames;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      msgType;                                          		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FString>                      Params;                                           		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentMessaging.PurgeAllMessages
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentMessaging_execPurgeAllMessages_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentMessaging.FetchAllMessages
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentMessaging_execFetchAllMessages_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.PostGetLeaderboardList
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execPostGetLeaderboardList_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.ReadPlayerStorageCallback
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execReadPlayerStorageCallback_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetStoreCatalogId
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentNotification_eventGetStoreCatalogId_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.FetchOfflineEntitlementStoreMappings
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execFetchOfflineEntitlementStoreMappings_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.IsLiveINIOutOfDate
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execIsLiveINIOutOfDate_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.IsFetchingLiveBinaryINIData
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execIsFetchingLiveBinaryINIData_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestBinaryLiveINIData
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRequestBinaryLiveINIData_Parms
{
	unsigned long                                      bMainMenu;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetLiveBinaryINIVersion
// [0x00020000] 
struct UISFXOnlineComponentNotification_execGetLiveBinaryINIVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetTargetOfferId
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetTargetOfferId_Parms
{
	unsigned char                                      nSource;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestLiveTlkTable
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRequestLiveTlkTable_Parms
{
	unsigned long                                      bMainMenu;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetDimeInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetDimeInfo_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetEntitlementInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetEntitlementInfo_Parms
{
	struct TArray<struct FSFXOnlineEntitlementLookupInfo> ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestServerInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRequestServerInfo_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.RequestData
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execRequestData_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.UpdateMOTDGUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execUpdateMOTDGUI_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentNotification.GetMOTDInfo
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentNotification_execGetMOTDInfo_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FSFXOnlineMOTDInfo                          ReturnValue;                                      		// 0x0004 (0x0044) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowInbox
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowInbox_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowVoiceCommandTunerUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowVoiceCommandTunerUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetMinimumAgeForOnlinePlay
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetMinimumAgeForOnlinePlay_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineFriend>                Friends;                                          		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUserXuid;                                        		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUserXuid;                                        		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowKeyboardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFeedbackUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowGamerCardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowInviteUI
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviteText;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFriendsInviteUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowFriendsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanShowPresenceInformation_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanPurchaseContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanDownloadUserContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanCommunicate_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execCanPlayOnline_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execSetRichPresence_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentPlatform.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentPlatform_execGetLoginStatus_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentStats.ReadStatsGroupList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentStats_execReadStatsGroupList_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentStats.RequestReadStatsGroupList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UISFXOnlineComponentStats_execRequestReadStatsGroupList_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentStats.GetFriendsStatsData
// [0x00424400] ( FUNC_Native )
struct UISFXOnlineComponentStats_execGetFriendsStatsData_Parms
{
	struct FLeaderboardStatScope                       oScope;                                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nRankRange;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentStats.OnReadStatsGroupListCompleted
// [0x00120000] 
struct UISFXOnlineComponentStats_execOnReadStatsGroupListCompleted_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentStats.OnResultsRetrieved
// [0x00124000] 
struct UISFXOnlineComponentStats_execOnResultsRetrieved_Parms
{
	struct TArray<struct FLeaderboardColumn>           aColumnInfo;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nErrorCode;                                       		// 0x0020 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.Flush
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentTelemetry_execFlush_Parms
{
	unsigned char                                      Channel;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.RegisterConnectionDelegates
// [0x00020000] 
struct UISFXOnlineComponentTelemetry_execRegisterConnectionDelegates_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.OnDisconnect
// [0x00120000] 
struct UISFXOnlineComponentTelemetry_execOnDisconnect_Parms
{
	int                                                Error;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SessionId;                                        		// 0x0004 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.OnAuthenticate
// [0x00120000] 
struct UISFXOnlineComponentTelemetry_execOnAuthenticate_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentTelemetry.CanCollect
// [0x00120000] 
struct UISFXOnlineComponentTelemetry_execCanCollect_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.IsInMainMenu
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventIsInMainMenu_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.UpdateGalaxyAtWarLevel
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventUpdateGalaxyAtWarLevel_Parms
{
	float                                              newLevel;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowStore
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventShowStore_Parms
{
	struct TArray<struct FSFXOfferDescriptor>          aOffers;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.HasCerberusDLC
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventHasCerberusDLC_Parms
{
	unsigned long                                      bVal;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.OnDisplayNotification
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventOnDisplayNotification_Parms
{
	struct FSFXOnlineMOTDInfo                          Info;                                             		// 0x0000 (0x0044) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ClearNotifications
// [0x00024800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventClearNotifications_Parms
{
	struct TArray<unsigned char>                       MessageTypesToClear;                              		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.CloseEANetworking
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventCloseEANetworking_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.SetState
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventSetState_Parms
{
	unsigned char                                      eState;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.MessageBoxCallback
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventMessageBoxCallback_Parms
{
	unsigned long                                      bAPressed;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Context;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowQueuedMessageBox
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowQueuedMessageBox_Parms
{
	struct FString                                     sMessage;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                srButton1Text;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowEmailPasswordMismatch_Parms
{
	struct FString                                     email;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowMessageBox
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowMessageBox_Parms
{
	struct FString                                     sTitle;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sMessage;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sButton1Text;                                     		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sButton2Text;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sButton3Text;                                     		// 0x0040 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowRedeemCodeConfirmation
// [0x00020800] ( FUNC_Event )
struct UISFXOnlineComponentUserInterface_eventShowRedeemCodeConfirmation_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCreateNucleusAccountEx_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bThirdParty;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBioWareProducts;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sCountryCode;                                   		// 0x002C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BirthDay;                                         		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthMonth;                                       		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthYear;                                        		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sLanguageCode;                                  		// 0x0048 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FString>                      m_CountryCodeList;                                		// 0x0058 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FString>                      m_CountryDisplayList;                             		// 0x0068 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCerberusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowRedeemCode
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowRedeemCode_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCerberusIntro
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCerberusIntro_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowNucleusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowCreateNucleusAccount_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bThirdParty;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRegisterProduct;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBioWareProducts;                                 		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUnderage;                                        		// 0x0030 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowParentEmail
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowParentEmail_Parms
{
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowAccountDemographics
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowAccountDemographics_Parms
{
	struct TArray<struct FString>                      m_CountryCodeList;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FString>                      m_CountryDisplayList;                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowTermsOfService
// [0x00024400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowTermsOfService_Parms
{
	struct FString                                     i_sTermsOfService;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     i_sPrivacyPolicy;                                 		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bTOSChanged;                                      		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowNucleusLogin
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowNucleusLogin_Parms
{
	struct FString                                     email;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                eScreenState;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.ISFXOnlineComponentUserInterface.ShowIntroPage
// [0x00020400] ( FUNC_Native )
struct UISFXOnlineComponentUserInterface_execShowIntroPage_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnQuickMatchUpdateEvent
// [0x00020002] 
struct USFXOnlineComponentGameFlow_execGM_OnQuickMatchUpdateEvent_Parms
{
	class USFXOnlineEvent_QuickMatch*                  qmEvent;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.DebugTestInput
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventDebugTestInput_Parms
{
	struct FName                                       InputType;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.DebugValidateStates
// [0x00024802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventDebugValidateStates_Parms
{
	unsigned long                                      writeToFile;                                      		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FName                                    matchMakingState;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             matchMakingStateIndex;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             matchMakingInput;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	// unsigned long                                   TestResult;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
	// class AFileWriter*                              outputFile;                                       		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.MatchMakingTimeStatusUpdate
// [0x00020002] 
struct USFXOnlineComponentGameFlow_execMatchMakingTimeStatusUpdate_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class USFXOnlineEvent_Integer*                  oTimeStatusChangeEvent;                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_IsConnectionErrorSilent
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_IsConnectionErrorSilent_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_IsInMPMapAction
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_IsInMPMapAction_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_IsInMultiplayerGame
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_IsInMultiplayerGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_IsInInviteFlow
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_IsInInviteFlow_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_IsInMultiplayerFlow
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_IsInMultiplayerFlow_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_IsLeavingGame
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_IsLeavingGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_HasFailedConnecting_QM
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_HasFailedConnecting_QM_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_HasFailedJoiningGameMissingDLCInvitee
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_HasFailedJoiningGameMissingDLCInvitee_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_HasFailedJoiningGameMissingDLCInviter
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_HasFailedJoiningGameMissingDLCInviter_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_HasFailedJoiningGameProtocolMismatch
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_HasFailedJoiningGameProtocolMismatch_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_HasFailedJoiningInviterLeft
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_HasFailedJoiningInviterLeft_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_HasFailedJoiningFullGame
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_HasFailedJoiningFullGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_HasFailedConnecting
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_HasFailedConnecting_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_HasJoinedGame
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_HasJoinedGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_HasCreatedGame
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_HasCreatedGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnHostMigrationEnded
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnHostMigrationEnded_Parms
{
	unsigned long                                      bInLobby;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnHostMigrationStarted
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnHostMigrationStarted_Parms
{
	unsigned long                                      bLocalPlayerIsHost;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnProfileSelected
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnProfileSelected_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnNetworkErrorDismissed
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnNetworkErrorDismissed_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnP2PConnectionFailure
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnP2PConnectionFailure_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnDisconnect
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnDisconnect_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnQuickMatchUpdate
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnQuickMatchUpdate_Parms
{
	class USFXOnlineEvent_QuickMatch*                  qmEvent;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnTick
// [0x00020000] 
struct USFXOnlineComponentGameFlow_execGM_OnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_CancelSearch
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_CancelSearch_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnGameJoinFailure
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnGameJoinFailure_Parms
{
	unsigned char                                      Reason;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnGameJoined
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnGameJoined_Parms
{
	unsigned long                                      bSuccess;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnInviteErrorNotified
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnInviteErrorNotified_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnInviteProceed
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnInviteProceed_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnInviteAborted
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnInviteAborted_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnInviteAccepted
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnInviteAccepted_Parms
{
	unsigned long                                      invitedInactiveUser;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnHostAddressResolved
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnHostAddressResolved_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnLeaveGameComplete
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnLeaveGameComplete_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnLeaveGame
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnLeaveGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnGameCreated
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnGameCreated_Parms
{
	unsigned long                                      bSuccess;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnCreateGameSent
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnCreateGameSent_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnQuickMatchSent
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnQuickMatchSent_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnExitMPFlow
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnExitMPFlow_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnEnterMPGameResults
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnEnterMPGameResults_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnEnterMPGameplay
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnEnterMPGameplay_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GM_OnEnterMPFlow
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGM_OnEnterMPFlow_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGameFlow_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGameFlow_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGameFlow_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGameFlow.GetStateStr
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGameFlow_eventGetStateStr_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  sTimeInGame;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AWorldInfo*                               WI;                                               		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.OnDownloadingTick
// [0x00020002] 
struct USFXOnlineComponentHTTPManager_execOnDownloadingTick_Parms
{
	// unsigned long                                   isDone;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.OnIdleTick
// [0x00020002] 
struct USFXOnlineComponentHTTPManager_execOnIdleTick_Parms
{
	// int                                             outstandingRequests;                              		// 0x0000 (0x0004) [0x0000000000000000]              
	// class USFXOnlineHTTPRequest*                    request;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.QueueRequest
// [0x00020002] 
struct USFXOnlineComponentHTTPManager_execQueueRequest_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             oldLength;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.ProcessDownload
// [0x00020002] 
struct USFXOnlineComponentHTTPManager_execProcessDownload_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.FetchStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentHTTPManager_execFetchStatus_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.FetchBodyData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentHTTPManager_execFetchBodyData_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.StartRequest
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentHTTPManager_execStartRequest_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.StartService
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentHTTPManager_execStartService_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.OnTick
// [0x00020002] 
struct USFXOnlineComponentHTTPManager_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentHTTPManager_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentHTTPManager_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentHTTPManager.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentHTTPManager_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.OnJobComplete
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentImageManager_execOnJobComplete_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// struct FSFXOnlineImageRequest                   imageRequest;                                     		// 0x0008 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.SumTotalSize
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentImageManager_execSumTotalSize_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             totalSize;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.RemoveRequest
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentImageManager_execRemoveRequest_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FSFXOnlineImageRequest                      ReturnValue;                                      		// 0x0008 (0x0024) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FSFXOnlineImageRequest                   imageToReturn;                                    		// 0x0030 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.AddCompletedRequest
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentImageManager_execAddCompletedRequest_Parms
{
	struct FSFXOnlineImageRequest                      request;                                          		// 0x0000 (0x0024) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             oldLength;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.AddPendingRequest
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentImageManager_execAddPendingRequest_Parms
{
	struct FSFXOnlineImageRequest                      request;                                          		// 0x0000 (0x0024) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             oldLength;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.StartRequest
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentImageManager_execStartRequest_Parms
{
	struct FString                                     ImageName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FSFXOnlineImageRequest                      ReturnValue;                                      		// 0x0010 (0x0024) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FSFXOnlineImageRequest                   request;                                          		// 0x0034 (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.GetImage
// [0x00020002] 
struct USFXOnlineComponentImageManager_execGetImage_Parms
{
	struct FString                                     ImageName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FSFXOnlineImageRequest                      ReturnValue;                                      		// 0x0010 (0x0024) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             i;                                                		// 0x0034 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.RequestImage
// [0x00020002] 
struct USFXOnlineComponentImageManager_execRequestImage_Parms
{
	struct FString                                     ImageName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             CompletedCallback;                                		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USFXOnlineJobImageRequest*                Job;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.ClearReferences
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentImageManager_eventClearReferences_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.ProcessImage
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentImageManager_execProcessImage_Parms
{
	struct FSFXOnlineImageRequest                      imageRequest;                                     		// 0x0000 (0x0024) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentImageManager_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentImageManager_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentImageManager_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.OnImageRequestCompleted
// [0x00120000] 
struct USFXOnlineComponentImageManager_execOnImageRequestCompleted_Parms
{
	struct FSFXOnlineImageRequest                      request;                                          		// 0x0000 (0x0024) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.SetMaxBytes
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentImageManager_eventSetMaxBytes_Parms
{
	int                                                maxBytes;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.SetMaxImages
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentImageManager_eventSetMaxImages_Parms
{
	int                                                maxImages;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentImageManager.SetBaseURL
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentImageManager_eventSetBaseURL_Parms
{
	struct FString                                     BaseUrl;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.UnlockAvatarAward
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execUnlockAvatarAward_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AvatarItemId;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowCustomPlayersUI
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowCustomPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FUniqueNetId>                 Players;                                          		// 0x0004 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     Title;                                            		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0034 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowPlayersUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowPlayersUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowFriendsInviteUI
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayerEx_execShowFriendsInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ClearProfileDataChangedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execClearProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.AddProfileDataChangedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execAddProfileDataChangedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ProfileDataChangedDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnProfileDataChanged
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayerEx_execOnProfileDataChanged_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.UnlockGamerPicture
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execUnlockGamerPicture_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                PictureId;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.IsDeviceValid
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execIsDeviceValid_Parms
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.GetDeviceSelectionResults
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execGetDeviceSelectionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     DeviceName;                                       		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ClearDeviceSelectionDoneDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayerEx_execClearDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.AddDeviceSelectionDoneDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayerEx_execAddDeviceSelectionDoneDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             DeviceDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnDeviceSelectionComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayerEx_execOnDeviceSelectionComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasBlocked;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowDeviceSelectionUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execShowDeviceSelectionUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                SizeNeeded;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForceShowUI;                                     		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bManageStorage;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowMembershipMarketplaceUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowMembershipMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowContentMarketplaceUI
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowContentMarketplaceUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                CategoryMask;                                     		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                offerId;                                          		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowInviteUI
// [0x00024002] 
struct USFXOnlineComponentUnrealPlayerEx_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviteText;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowAchievementsUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowAchievementsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowMessagesUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowMessagesUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowGamerCardUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowGamerCardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.ShowFeedbackUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayerEx_execShowFeedbackUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayerEx.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayerEx_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetTitleFileState
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execGetTitleFileState_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             FileIndex;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execGetTitleFileContents_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<unsigned char>                       FileContents;                                     		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ReadTitleFile
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execReadTitleFile_Parms
{
	struct FString                                     FileToRead;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnReadTitleFileComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnReadTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Filename;                                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearStorageDeviceChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddStorageDeviceChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddStorageDeviceChangeDelegate_Parms
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnStorageDeviceChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnStorageDeviceChange_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetNATType
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execGetNATType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearConnectionStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddConnectionStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddConnectionStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnConnectionStatusChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnConnectionStatusChange_Parms
{
	unsigned char                                      ConnectionStatus;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.IsControllerConnected
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execIsControllerConnected_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearControllerChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddControllerChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddControllerChangeDelegate_Parms
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnControllerChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnControllerChange_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsConnected;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.SetNetworkNotificationPosition
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execSetNetworkNotificationPosition_Parms
{
	unsigned char                                      NewPos;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetNetworkNotificationPosition
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execGetNetworkNotificationPosition_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ProcessExternalUINotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execProcessExternalUINotification_Parms
{
	unsigned long                                      bOpening;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearExternalUIChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddExternalUIChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddExternalUIChangeDelegate_Parms
{
	struct FScriptDelegate                             ExternalUIDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnExternalUIChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnExternalUIChange_Parms
{
	unsigned long                                      bIsOpening;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.ClearLinkStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execClearLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.AddLinkStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealSystem_execAddLinkStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LinkStatusDelegate;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnLinkStatusChange
// [0x00120000] 
struct USFXOnlineComponentUnrealSystem_execOnLinkStatusChange_Parms
{
	unsigned long                                      bIsConnected;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.HasLinkConnection
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execHasLinkConnection_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealSystem.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealSystem_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.ClearPlayerTalkingDelegate
// [0x00020002] 
struct USFXOnlineComponentVoiceInterface_execClearPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.AddPlayerTalkingDelegate
// [0x00020002] 
struct USFXOnlineComponentVoiceInterface_execAddPlayerTalkingDelegate_Parms
{
	struct FScriptDelegate                             TalkerDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             AddIndex;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.OnTick
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.ResetVoiceSystem
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execResetVoiceSystem_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.ApplyOptions
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execApplyOptions_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.SetVoiceMode
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execSetVoiceMode_Parms
{
	int                                                voiceMode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.PushToTalkEnd
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execPushToTalkEnd_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.PushToTalkStart
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execPushToTalkStart_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.SetOutputDevice
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execSetOutputDevice_Parms
{
	int                                                outputDeviceId;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.SetInputDevice
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execSetInputDevice_Parms
{
	int                                                inputDeviceId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.GetDefaultOutputDevice
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execGetDefaultOutputDevice_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.GetDefaultInputDevice
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execGetDefaultInputDevice_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.EnumerateOutputDevices
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execEnumerateOutputDevices_Parms
{
	struct TArray<struct FString>                      OutputDevices;                                    		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.EnumerateInputDevices
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execEnumerateInputDevices_Parms
{
	struct TArray<struct FString>                      InputDevices;                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.SetVolume
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execSetVolume_Parms
{
	float                                              Volume;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.UnmuteAll
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execUnmuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.MuteAll
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execMuteAll_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAllowFriends;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.SetSpeechRecognitionObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execSetSpeechRecognitionObject_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class USpeechRecognition*                          SpeechRecogObj;                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.SelectVocabulary
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execSelectVocabulary_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                VocabularyId;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.ClearRecognitionCompleteDelegate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execClearRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.AddRecognitionCompleteDelegate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execAddRecognitionCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RecognitionDelegate;                              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.GetRecognitionResults
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execGetRecognitionResults_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FSpeechRecognizedWord>        Words;                                            		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.StopSpeechRecognition
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execStopSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.StartSpeechRecognition
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execStartSpeechRecognition_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.StopNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execStopNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.StartNetworkedVoice
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execStartNetworkedVoice_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.IsRemoteTalkerMuted
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execIsRemoteTalkerMuted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.UnmuteRemoteTalker
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execUnmuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.MuteRemoteTalker
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execMuteRemoteTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.SetRemoteTalkerPriority
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execSetRemoteTalkerPriority_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                Priority;                                         		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.IsHeadsetPresent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execIsHeadsetPresent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.GetRemotePlayerStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execGetRemotePlayerStatus_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.IsRemotePlayerTalking
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execIsRemotePlayerTalking_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.IsLocalPlayerTalking
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execIsLocalPlayerTalking_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.UnregisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execUnregisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.RegisterRemoteTalker
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execRegisterRemoteTalker_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.UnregisterLocalTalker
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execUnregisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.RegisterLocalTalker
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execRegisterLocalTalker_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.OnRecognitionComplete
// [0x00120000] 
struct USFXOnlineComponentVoiceInterface_execOnRecognitionComplete_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.OnPlayerTalkingStateChange
// [0x00120000] 
struct USFXOnlineComponentVoiceInterface_execOnPlayerTalkingStateChange_Parms
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTalking;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentVoiceInterface.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentVoiceInterface_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXMLParser.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXMLParser_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXMLParser.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXMLParser_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentXMLParser.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXMLParser_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXMLParser.GetXMLAttribInteger
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentXMLParser_execGetXMLAttribInteger_Parms
{
	struct FString                                     Element;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     attrib;                                           		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                intOut;                                           		// 0x0020 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                skipcount;                                        		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXMLParser.GetXMLAttribString
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentXMLParser_execGetXMLAttribString_Parms
{
	struct FString                                     Element;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     attrib;                                           		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     stringOut;                                        		// 0x0020 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                skipcount;                                        		// 0x0030 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0034 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXMLParser.GetXMLInteger
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentXMLParser_execGetXMLInteger_Parms
{
	struct FString                                     Element;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                intOut;                                           		// 0x0010 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                skipcount;                                        		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXMLParser.GetXMLString
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentXMLParser_execGetXMLString_Parms
{
	struct FString                                     Element;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     stringOut;                                        		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                skipcount;                                        		// 0x0020 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXMLParser.StartParsing
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXMLParser_execStartParsing_Parms
{
	struct FString                                     xmlInput;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetAPIName
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnRelease
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnInitialize
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.StopWaitingForAllWork
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execStopWaitingForAllWork_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkSetObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkSetObject_Parms
{
	struct TArray<class USFXOnlineEvent*>              aEventObjects;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkSetType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkSetType_Parms
{
	struct TArray<unsigned char>                       aEventTypes;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 aWorkEventIds;                                    		// 0x0020 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkBlocking
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkBlocking_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventID;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.WaitingForWorkType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execWaitingForWorkType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnWorkComplete;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nEventID;                                         		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetAllPendingEvents
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execGetAllPendingEvents_Parms
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<class USFXOnlineEvent*>              PendingEvents;                                    		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.IsAnyEventPending
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execIsAnyEventPending_Parms
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.IsEventPending
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execIsEventPending_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventID;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.GetEvent
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execGetEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventID;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineEvent*                             ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.UnsubscribeFromAllEvents
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execUnsubscribeFromAllEvents_Parms
{
	class UObject*                                     oCallbackTarget;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.UnsubscribeFromEvent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execUnsubscribeFromEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.SubscribeToEvent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execSubscribeToEvent_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             fnEventCallback;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkFinishedObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkFinishedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkFinishedType
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkFinishedType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatusFinished;                                  		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventID;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkStartedObject
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkStartedObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eEventType;                                       		// 0x0008 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                EventId;                                          		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              TimeOut;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyWorkStartedType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyWorkStartedType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nEventID;                                         		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              fTimeOut;                                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyEventObject
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyEventObject_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.NotifyEventType
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCoordinator_execNotifyEventType_Parms
{
	unsigned char                                      eEventType;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      eStatus;                                          		// 0x0001 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      eOutcome;                                         		// 0x0002 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCoordinator_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCoordinator.OnEvent
// [0x00120000] 
struct USFXOnlineComponentCoordinator_execOnEvent_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEventNotifier.NotifyCallbacks
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEventNotifier_execNotifyCallbacks_Parms
{
	struct TArray<struct FScriptDelegate>              NotifyArray;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineEvent*                             Event;                                            		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEventNotifier.NotifyWaiters
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEventNotifier_execNotifyWaiters_Parms
{
	class USFXOnlineEvent*                             Event;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEventNotifier.NotifySubscribers
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEventNotifier_execNotifySubscribers_Parms
{
	class USFXOnlineEvent*                             Event;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEventNotifier.RemoveAllWaiters
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEventNotifier_execRemoveAllWaiters_Parms
{
	class UObject*                                     CallbackTarget;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEventNotifier.AddWaiter
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEventNotifier_execAddWaiter_Parms
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             EventCallback;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEventNotifier.RemoveAllSubscribers
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEventNotifier_execRemoveAllSubscribers_Parms
{
	class UObject*                                     CallbackTarget;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEventNotifier.RemoveSubscriber
// [0x00024400] ( FUNC_Native )
struct USFXOnlineEventNotifier_execRemoveSubscriber_Parms
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             EventCallback;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineEventNotifier.AddSubscriber
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEventNotifier_execAddSubscriber_Parms
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             EventCallback;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineEventNotifier.IsSubscribed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineEventNotifier_execIsSubscribed_Parms
{
	unsigned char                                      EventType;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             EventCallback;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineEventNotifier.OnEvent
// [0x00120000] 
struct USFXOnlineEventNotifier_execOnEvent_Parms
{
	class USFXOnlineEvent*                             Event;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.GenerateParametersString
// [0x00020802] ( FUNC_Event )
struct USFXOnlineHTTPRequest_eventGenerateParametersString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  paramsString;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHTTPParameter                           Param;                                            		// 0x0020 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   started;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.GenerateHeaderParametersString
// [0x00020802] ( FUNC_Event )
struct USFXOnlineHTTPRequest_eventGenerateHeaderParametersString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  paramsString;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FHTTPParameter                           Param;                                            		// 0x0020 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.FillDefaultParameters
// [0x00020802] ( FUNC_Event )
struct USFXOnlineHTTPRequest_eventFillDefaultParameters_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.Reset
// [0x00020802] ( FUNC_Event )
struct USFXOnlineHTTPRequest_eventReset_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.ClearParams
// [0x00020802] ( FUNC_Event )
struct USFXOnlineHTTPRequest_eventClearParams_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.AddSubURL
// [0x00020802] ( FUNC_Event )
struct USFXOnlineHTTPRequest_eventAddSubURL_Parms
{
	struct FString                                     subUrl;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.SetBaseURL
// [0x00020802] ( FUNC_Event )
struct USFXOnlineHTTPRequest_eventSetBaseURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.SetPost
// [0x00020002] 
struct USFXOnlineHTTPRequest_execSetPost_Parms
{
	unsigned long                                      post;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.AddHeaderParameter
// [0x00020002] 
struct USFXOnlineHTTPRequest_execAddHeaderParameter_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             oldLength;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.AddParameter
// [0x00020802] ( FUNC_Event )
struct USFXOnlineHTTPRequest_eventAddParameter_Parms
{
	struct FString                                     Key;                                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             oldLength;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.AddHeaderTerminator
// [0x00022400] ( FUNC_Native )
struct USFXOnlineHTTPRequest_execAddHeaderTerminator_Parms
{
	struct FString                                     InputString;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineHTTPRequest.URLEncodeString
// [0x00022400] ( FUNC_Native )
struct USFXOnlineHTTPRequest_execURLEncodeString_Parms
{
	struct FString                                     InputString;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0010 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetEnvironment
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetEnvironment_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.Exit
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct USFXOnlineSubsystem_eventExit_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShowConsoleRoutedKeyboardUI
// [0x00024102] 
struct USFXOnlineSubsystem_execShowConsoleRoutedKeyboardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword;                                      		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShowKeyboardUI
// [0x00024002] 
struct USFXOnlineSubsystem_execShowKeyboardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword;                                      		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetBioDynamicBuildVersion
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetBioDynamicBuildVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.IsCerberusMember
// [0x00020002] 
struct USFXOnlineSubsystem_execIsCerberusMember_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetProjectID
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetProjectID_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetCDKey
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetCDKey_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetLanguage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetLanguage_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetPlatform
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execGetPlatform_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.ShutDown
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct USFXOnlineSubsystem_eventShutDown_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.NativeInit
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execNativeInit_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.NativeInitOnlineComponent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineSubsystem_execNativeInitOnlineComponent_Parms
{
	int                                                componentIdx;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     componentClassName;                               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetGameProtocolVersion
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetGameProtocolVersion_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAvatarAwardXenon
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentAvatarAwardXenon_Parms
{
	class USFXOnlineComponentAvatarAwardXenon*         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentImageManager
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentImageManager_Parms
{
	class USFXOnlineComponentImageManager*             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentXMLParser
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentXMLParser_Parms
{
	class USFXOnlineComponentXMLParser*                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentHTTPManager
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentHTTPManager_Parms
{
	class USFXOnlineComponentHTTPManager*              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentXenonLiveParty
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentXenonLiveParty_Parms
{
	class USFXOnlineComponentXenonLiveParty*           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentJobQueue
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentJobQueue_Parms
{
	class USFXOnlineComponentJobQueue*                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentOrigin
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentOrigin_Parms
{
	class USFXOnlineComponentOrigin*                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentVoiceInterface
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentVoiceInterface_Parms
{
	class USFXOnlineComponentVoiceInterface*           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUnrealPlayerEx
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUnrealPlayerEx_Parms
{
	class USFXOnlineComponentUnrealPlayerEx*           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUnrealPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUnrealPlayer_Parms
{
	class USFXOnlineComponentUnrealPlayer*             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUnrealSystem
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUnrealSystem_Parms
{
	class USFXOnlineComponentUnrealSystem*             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetCoordinator
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetCoordinator_Parms
{
	class USFXOnlineComponentCoordinator*              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentCommerce
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentCommerce_Parms
{
	class UISFXOnlineComponentCommerce*                ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentGalaxyAtWar
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentGalaxyAtWar_Parms
{
	class UISFXOnlineComponentGalaxyAtWar*             ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentTelemetry
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentTelemetry_Parms
{
	class UISFXOnlineComponentTelemetry*               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentGameEntryFlow
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentGameEntryFlow_Parms
{
	class UISFXOnlineComponentGameEntryFlow*           ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentMessaging
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentMessaging_Parms
{
	class UISFXOnlineComponentMessaging*               ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentLeaderboard
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentLeaderboard_Parms
{
	class UISFXOnlineComponentLeaderboard*             ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentMatchMakingBot
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentMatchMakingBot_Parms
{
	class UISFXOnlineComponentMatchMakingBot*          ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentStats
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentStats_Parms
{
	class UISFXOnlineComponentStats*                   ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentNotification
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentNotification_Parms
{
	class UISFXOnlineComponentNotification*            ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentUserInterface
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentUserInterface_Parms
{
	class UISFXOnlineComponentUserInterface*           ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentLogin
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentLogin_Parms
{
	class UISFXOnlineComponentLogin*                   ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentGameFlow
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentGameFlow_Parms
{
	class UISFXOnlineComponentGameFlow*                ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentGame
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentGame_Parms
{
	class UISFXOnlineComponentGame*                    ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAPI
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentAPI_Parms
{
	class UISFXOnlineComponentAPI*                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentAchievement
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentAchievement_Parms
{
	class UISFXOnlineComponentAchievement*             ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetComponentPlatform
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetComponentPlatform_Parms
{
	class UISFXOnlineComponentPlatform*                ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetOnlineSubsystem
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineSubsystem_execGetOnlineSubsystem_Parms
{
	class USFXOnlineSubsystem*                         ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.GetURL
// [0x00020902] ( FUNC_Event )
struct USFXOnlineSubsystem_eventGetURL_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  sURL;                                             		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.SetUnrealInterfaces
// [0x00040003] ( FUNC_Final )
struct USFXOnlineSubsystem_execSetUnrealInterfaces_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.CreateComponents
// [0x00040003] ( FUNC_Final )
struct USFXOnlineSubsystem_execCreateComponents_Parms
{
	// struct FName                                    nmPlatformName;                                   		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             nComponentIndex;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.UpdateGameProtocolVersion
// [0x00020802] ( FUNC_Event )
struct USFXOnlineSubsystem_eventUpdateGameProtocolVersion_Parms
{
	int                                                runTimeVersioning;                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.InitGameProtocolVersion
// [0x00040003] ( FUNC_Final )
struct USFXOnlineSubsystem_execInitGameProtocolVersion_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineSubsystem.Init
// [0x00020802] ( FUNC_Event )
struct USFXOnlineSubsystem_eventInit_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPC_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPC_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPC.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPC_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.IsAchievementGranted
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execIsAchievementGranted_Parms
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.GrantAchievement
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execGrantAchievement_Parms
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.IsMuted
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentOrigin_execIsMuted_Parms
{
	struct FString                                     personaName;                                      		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnOriginGoesOffline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnOriginGoesOffline_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnOriginClosed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnOriginClosed_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnTick
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RequestWalletBalance
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRequestWalletBalance_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RequestBlockList
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRequestBlockList_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RequestEntitlementCache
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRequestEntitlementCache_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.ProcessIGODisplayEvent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execProcessIGODisplayEvent_Parms
{
	unsigned long                                      isOpening;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnBlazeSignedIn
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnBlazeSignedIn_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.CheckEntitlementCache
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execCheckEntitlementCache_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.EnsureSignedIn
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execEnsureSignedIn_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.CheckSignedIn
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execCheckSignedIn_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.QueryIgoEnabled
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execQueryIgoEnabled_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.QueryOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execQueryOnline_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.CheckOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execCheckOnline_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.JoinPendingGameInvite
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execJoinPendingGameInvite_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.SetPresenceState
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execSetPresenceState_Parms
{
	unsigned char                                      presence;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.SetRichPresence
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execSetRichPresence_Parms
{
	struct FString                                     presence;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     gamePresence;                                     		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.ClearSessionPresence
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execClearSessionPresence_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.SetSessionPresence
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execSetSessionPresence_Parms
{
	struct FString                                     SessionId;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RequestFriendsList
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRequestFriendsList_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.Checkout
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execCheckout_Parms
{
	struct FString                                     offerId;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.ShowCheckoutOverlay
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execShowCheckoutOverlay_Parms
{
	struct FString                                     offerId;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.ShowStoreOverlay
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execShowStoreOverlay_Parms
{
	struct FString                                     categoryId;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.ShowInviteOverlay
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execShowInviteOverlay_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.ShowFriendsOverlay
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execShowFriendsOverlay_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RequestAuthToken
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRequestAuthToken_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RequestProfileInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRequestProfileInfo_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.RegisterCallbacks
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execRegisterCallbacks_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.StopService
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execStopService_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.StartService
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execStartService_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentOrigin_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.TriggerWalletBalanceAvailableDelegates
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentOrigin_eventTriggerWalletBalanceAvailableDelegates_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                balance;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FScriptDelegate                          onBalanceDelegate;                                		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.ClearWalletBalanceAvailableDelegate
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentOrigin_eventClearWalletBalanceAvailableDelegate_Parms
{
	struct FScriptDelegate                             walletBalanceDelegate;                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.AddWalletBalanceAvailableDelegate
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentOrigin_eventAddWalletBalanceAvailableDelegate_Parms
{
	struct FScriptDelegate                             walletBalanceDelegate;                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.TriggerOriginAuthKeyDelegates
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentOrigin_eventTriggerOriginAuthKeyDelegates_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     authKey;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FScriptDelegate                          onAuthKeyDelegate;                                		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.ClearOriginAuthKeyDelegate
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentOrigin_eventClearOriginAuthKeyDelegate_Parms
{
	struct FScriptDelegate                             authKeyDelegate;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.AddOriginAuthKeyDelegate
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentOrigin_eventAddOriginAuthKeyDelegate_Parms
{
	struct FScriptDelegate                             authKeyDelegate;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.TriggerOriginClosedDelegates
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentOrigin_eventTriggerOriginClosedDelegates_Parms
{
	// struct FScriptDelegate                          onClosedDelegate;                                 		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.ClearOriginClosedDelegate
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentOrigin_eventClearOriginClosedDelegate_Parms
{
	struct FScriptDelegate                             originClosedDelegate;                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.AddOriginClosedDelegate
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentOrigin_eventAddOriginClosedDelegate_Parms
{
	struct FScriptDelegate                             originClosedDelegate;                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnWalletBalanceAvailable
// [0x00120000] 
struct USFXOnlineComponentOrigin_execOnWalletBalanceAvailable_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                walletBalance;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnOriginAuthKey
// [0x00120000] 
struct USFXOnlineComponentOrigin_execOnOriginAuthKey_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     authKey;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentOrigin.OnOriginClosedDelegate
// [0x00120000] 
struct USFXOnlineComponentOrigin_execOnOriginClosedDelegate_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowInbox
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowInbox_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowVoiceCommandTunerUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowVoiceCommandTunerUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetMinimumAgeForOnlinePlay
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetMinimumAgeForOnlinePlay_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineFriend>                Friends;                                          		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowInviteUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviteText;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPC.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPC_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementXenon.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementXenon_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAvatarAwardXenon.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAvatarAwardXenon_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAvatarAwardXenon.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAvatarAwardXenon_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAvatarAwardXenon.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAvatarAwardXenon_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAvatarAwardXenon.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAvatarAwardXenon_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AvatarAwardId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowInbox
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowInbox_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowVoiceCommandTunerUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowVoiceCommandTunerUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetMinimumAgeForOnlinePlay
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetMinimumAgeForOnlinePlay_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineFriend>                Friends;                                          		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowInviteUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviteText;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUniqueNetId;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.TickAsyncTasks
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execTickAsyncTasks_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.IsPlayerInActiveParty
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentPlatformXenon_eventIsPlayerInActiveParty_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.IsPlayerInParty
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentPlatformXenon_eventIsPlayerInParty_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformXenon.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformXenon_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.OnTick
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.TickBandwidthTracking
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execTickBandwidthTracking_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.ShowCommunitySessionsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execShowCommunitySessionsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.ShowVoiceChannelUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execShowVoiceChannelUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.ShowPartyUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execShowPartyUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.GetPartyBandwidth
// [0x00020002] 
struct USFXOnlineComponentXenonLiveParty_execGetPartyBandwidth_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.SetPartyMemberCustomData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execSetPartyMemberCustomData_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FQWord                                      Data1;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FQWord                                      Data2;                                            		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.GetPartyMemberInformation
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execGetPartyMemberInformation_Parms
{
	struct TArray<struct FOnlinePartyMember>           PartyMembers;                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.ClearSendPartyGameInvitesCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentXenonLiveParty_execClearSendPartyGameInvitesCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             SendPartyGameInvitesCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.AddSendPartyGameInvitesCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentXenonLiveParty_execAddSendPartyGameInvitesCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             SendPartyGameInvitesCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.OnSendPartyGameInvitesComplete
// [0x00120000] 
struct USFXOnlineComponentXenonLiveParty_execOnSendPartyGameInvitesComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.SendPartyGameInvites
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execSendPartyGameInvites_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentXenonLiveParty.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentXenonLiveParty_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementPS3.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementPS3_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowInbox
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowInbox_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.StartInviteFlow
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execStartInviteFlow_Parms
{
	int                                                attachmentDataId;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetInviterUniqueNetId
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetInviterUniqueNetId_Parms
{
	struct FUniqueNetId                                InviterUniqueNetId;                               		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowVoiceCommandTunerUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowVoiceCommandTunerUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetMinimumAgeForOnlinePlay
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetMinimumAgeForOnlinePlay_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineFriend>                Friends;                                          		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowInviteUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviteText;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFriendsInviteUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerXuid;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFriendsUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowFeedbackUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowGamerCardUI_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanShowPresenceInformation_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanPurchaseContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanDownloadUserContent_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanCommunicate_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execCanPlayOnline_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execSetRichPresence_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowLoginUIEx
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowLoginUIEx_Parms
{
	struct FScriptDelegate                             funcSignInComplete;                               		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnSignInComplete
// [0x00120000] 
struct USFXOnlineComponentPlatformPS3_execOnSignInComplete_Parms
{
	unsigned long                                      bSignedIn;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetLoginStatus_Parms
{
	unsigned char                                      eLocalUserNum;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.DispatchInviteEvent
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execDispatchInviteEvent_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnPlayerSeen
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnPlayerSeen_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnKeyboardUI
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnKeyboardUI_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.RegisterPS3CustomMenuActions
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execRegisterPS3CustomMenuActions_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformPS3.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformPS3_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementDingo.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementDingo_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnKeyboardUIClosed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnKeyboardUIClosed_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InputBuffer;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowInbox
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowInbox_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowVoiceCommandTunerUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowVoiceCommandTunerUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetMinimumAgeForOnlinePlay
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetMinimumAgeForOnlinePlay_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineFriend>                Friends;                                          		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUserXuid;                                        		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUserXuid;                                        		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowKeyboardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowFeedbackUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowGamerCardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowInviteUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviteText;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowFriendsInviteUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowFriendsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanShowPresenceInformation_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanPurchaseContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanDownloadUserContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanCommunicate_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execCanPlayOnline_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execSetRichPresence_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetLoginStatus_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformDingo.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformDingo_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.GetTitleAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGetTitleAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.GetPlatformAchievementID
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGetPlatformAchievementID_Parms
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                SetIndex;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.IsGranted
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execIsGranted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentAchievementOrbis.Grant
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentAchievementOrbis_execGrant_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.OnKeyboardUIClosed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execOnKeyboardUIClosed_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InputBuffer;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowInbox
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowInbox_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowVoiceCommandTunerUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowVoiceCommandTunerUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetMinimumAgeForOnlinePlay
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetMinimumAgeForOnlinePlay_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineFriend>                Friends;                                          		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowStoreUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowStoreUI_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetOnlineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetOnlineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUserXuid;                                        		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetOfflineXuid
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetOfflineXuid_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oUserXuid;                                        		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.AddRecentPlayer
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execAddRecentPlayer_Parms
{
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sDescription;                                     		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowKeyboardUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowKeyboardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sTitleText;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sDescriptionText;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nKeyboardType;                                    		// 0x0024 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRouteThroughConsole;                             		// 0x002C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     sDefaultText;                                     		// 0x0030 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                nMaxResultLength;                                 		// 0x0040 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0044 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowAchievementsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowAchievementsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowFeedbackUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowFeedbackUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowGamerCardUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowGamerCardUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowInviteUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowInviteUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviteText;                                       		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowFriendsInviteUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowFriendsInviteUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                oPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowFriendsUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowFriendsUI_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanShowPresenceInformation_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanPurchaseContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanDownloadUserContent_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanCommunicate_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execCanPlayOnline_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.SetRichPresence
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execSetRichPresence_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPresenceMode;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      aLocalizedStringSettings;                         		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            aProperties;                                      		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetLoginStatus_Parms
{
	unsigned char                                      byLocalUserNum;                                   		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentPlatformOrbis.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentPlatformOrbis_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlaze.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlaze_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.SetKickedOutOfGame
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execSetKickedOutOfGame_Parms
{
	unsigned long                                      wasKicked;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.RecalculateSkillRating
// [0x00420000] 
struct USFXOnlineComponentBlazeGame_execRecalculateSkillRating_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FUniqueNetId>                 Players;                                          		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.GetArbitratedPlayers
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execGetArbitratedPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineArbitrationRegistrant> ReturnValue;                                      		// 0x0008 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execClearArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execAddArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.RegisterForArbitration
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execRegisterForArbitration_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearStartOnlineGameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execClearStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddStartOnlineGameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execAddStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execClearUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execAddUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execClearRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execAddRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.QueryNonAdvertisedData
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execQueryNonAdvertisedData_Parms
{
	int                                                StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.FreeSearchResults
// [0x00024000] 
struct USFXOnlineComponentBlazeGame_execFreeSearchResults_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.BindPlatformSpecificSessionToSearch
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execBindPlatformSpecificSessionToSearch_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x000C (0x0050) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x005C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
struct USFXOnlineComponentBlazeGame_execReadPlatformSpecificSessionInfoBySessionName_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0058 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ReadPlatformSpecificSessionInfo
// [0x00420000] 
struct USFXOnlineComponentBlazeGame_execReadPlatformSpecificSessionInfo_Parms
{
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0060 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execClearCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeGame_execAddCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearEndOnlineGameCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execClearEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddEndOnlineGameCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execAddEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execClearDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execAddDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execClearUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execAddUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execClearJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execAddJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearGameInviteAcceptedDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execClearGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.CanShowErrorMessage
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeGame_eventCanShowErrorMessage_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APlayerController*                        PC;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.NotifyGameInviteAcceptedDelegates
// [0x00420002] 
struct USFXOnlineComponentBlazeGame_execNotifyGameInviteAcceptedDelegates_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	// int                                             UserNum;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0014 (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          del;                                              		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class APlayerController*                        PC;                                               		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddGameInviteAcceptedDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execAddGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearQuickMatchCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execClearQuickMatchCompleteDelegate_Parms
{
	struct FScriptDelegate                             QuickMatchCompleteDelegate;                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddQuickMatchCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execAddQuickMatchCompleteDelegate_Parms
{
	struct FScriptDelegate                             QuickMatchCompleteDelegate;                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execClearCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execAddCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execClearFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AddFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execAddFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execCancelFindOnlineGames_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.GetGameSearch
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execGetGameSearch_Parms
{
	class UOnlineGameSearch*                           ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.GetGameSettings
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execGetGameSettings_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnConnectionError
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execOnConnectionError_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnInviteAccepted
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeGame_eventOnInviteAccepted_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXOnlineEvent_Invite*                   oInviteEvent;                                     		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             invitedUserId;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FUniqueNetId                             inviterId;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	// unsigned long                                   invitedInactiveUser;                              		// 0x0020 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ShowPopup
// [0x00044401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeGame_execShowPopup_Parms
{
	int                                                bodyStr;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShowOkBtn;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bModal;                                           		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bPauseGameplay;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.GM_OnDisconnect
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeGame_eventGM_OnDisconnect_Parms
{
	class USFXOnlineEvent*                             disconnectEvent;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.SetPlatformPresence
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execSetPlatformPresence_Parms
{
	unsigned long                                      presencePrivate;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.PerformCallRestrictedFunction
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execPerformCallRestrictedFunction_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.SetCallRestrictedFunctionMode
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execSetCallRestrictedFunctionMode_Parms
{
	unsigned long                                      bEnable;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.CreateDefaultQuickMatchSettings
// [0x00022802] ( FUNC_Event )
struct USFXOnlineComponentBlazeGame_eventCreateDefaultQuickMatchSettings_Parms
{
	class USFXOnlineGameSettings*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineGameSettings*                   oSettings;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.CanStartMPMatch
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execCanStartMPMatch_Parms
{
	class UOnlineGameSettings*                         NewGameSettings;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.QuickMatch
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execQuickMatch_Parms
{
	class UOnlineGameSettings*                         quickMatchSettings;                               		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.LeaveGame
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execLeaveGame_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.IsPlaying
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execIsPlaying_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.Tick
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentBlazeGame_execTick_Parms
{
	class USFXOnlineEvent*                             Event;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnMPGameStatusChange
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeGame_execOnMPGameStatusChange_Parms
{
	class USFXOnlineEvent*                             Event;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeGame_execOnTick_Parms
{
	class USFXOnlineEvent*                             Event;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.KickPlayer
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execKickPlayer_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.GetPlayerCount
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execGetPlayerCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.HideHostMigrationMsgBox
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execHideHostMigrationMsgBox_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ShowHostMigrationMsgBox
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execShowHostMigrationMsgBox_Parms
{
	unsigned long                                      bIsInLobby;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.FailHostMigration
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execFailHostMigration_Parms
{
	struct FString                                     Reason;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.CancelHostMigration
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execCancelHostMigration_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.CompleteHostMigration
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execCompleteHostMigration_Parms
{
	unsigned long                                      bLocalPlayerIsHost;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsInLobby;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.IsHostMigrationInProgress
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execIsHostMigrationInProgress_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.IsReadyForConnections
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execIsReadyForConnections_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ForceCleanUp
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execForceCleanUp_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnHostAddressResolved
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execOnHostAddressResolved_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execGetResolvedConnectString_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ConnectInfo;                                      		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AcceptGameInvite
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execAcceptGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.UpdateOnlineGame
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execUpdateOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldRefreshOnlineData;                         		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execDestroyOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.UnregisterPlayer
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execUnregisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.RegisterPlayer
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execRegisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasInvited;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.EndOnlineGame
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execEndOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.StartOnlineGame
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execStartOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execJoinOnlineGame_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x000C (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.FindOnlineGames
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execFindOnlineGames_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execCreateOnlineGame_Parms
{
	unsigned char                                      HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         NewGameSettings;                                  		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.GetMultiplayer_MissingDLCs
// [0x00420002] 
struct USFXOnlineComponentBlazeGame_execGetMultiplayer_MissingDLCs_Parms
{
	struct TArray<struct FMPDLCInfo>                   missingDLCs;                                      		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bInvitee;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.IsInvalidHost
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execIsInvalidHost_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.SetMPDLCInfo
// [0x00420802] ( FUNC_Event )
struct USFXOnlineComponentBlazeGame_eventSetMPDLCInfo_Parms
{
	struct TArray<struct FMPDLCInfo>                   allAvailableDLCs;                                 		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.ValidateDLCMasterList
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execValidateDLCMasterList_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.IsTargetVersionRetrieved
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeGame_eventIsTargetVersionRetrieved_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.IsOnLatestMultiplayerVersion
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execIsOnLatestMultiplayerVersion_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.UpdateGameProtocolVersion
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execUpdateGameProtocolVersion_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.SetServerMatchMakingRulesVersion
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeGame_eventSetServerMatchMakingRulesVersion_Parms
{
	int                                                serverRulesVersion;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.SetMultiplayerTargetVersion
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeGame_eventSetMultiplayerTargetVersion_Parms
{
	int                                                protocolVersion;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.GetSFXGameSettings
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeGame_eventGetSFXGameSettings_Parms
{
	class USFXOnlineGameSettings*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.WasKickedOutOfGame
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execWasKickedOutOfGame_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.SetHostViabilityEnabled
// [0x00020002] 
struct USFXOnlineComponentBlazeGame_execSetHostViabilityEnabled_Parms
{
	unsigned long                                      Enabled;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.IsLocalPlayer
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execIsLocalPlayer_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.HostMigrationMsgBoxCallback
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execHostMigrationMsgBoxCallback_Parms
{
	unsigned long                                      bAPressed;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                Context;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.CanMigrate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execCanMigrate_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.CancelJoinOnlineGame
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execCancelJoinOnlineGame_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.IsPlayerInGame
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execIsPlayerInGame_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.AllowMatchmaking
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGame_execAllowMatchmaking_Parms
{
	unsigned long                                      bAllow;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bUpdateServer;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnGameInviteAccepted
// [0x00520000] 
struct USFXOnlineComponentBlazeGame_execOnGameInviteAccepted_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0010) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnArbitrationRegistrationComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnArbitrationRegistrationComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnEndOnlineGameComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnEndOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnStartOnlineGameComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnStartOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnUnregisterPlayerComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnUnregisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnRegisterPlayerComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnRegisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnJoinOnlineGameComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnJoinOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnDestroyOnlineGameComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnCancelFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnFindOnlineGamesComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnUpdateOnlineGameComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnUpdateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnCreateOnlineGameComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGame.OnQuickMatchComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeGame_execOnQuickMatchComplete_Parms
{
	unsigned char                                      Result;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGameXenon.SetPlatformPresence
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGameXenon_execSetPlatformPresence_Parms
{
	unsigned long                                      presencePrivate;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGameXenon.PerformCallRestrictedFunction
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGameXenon_execPerformCallRestrictedFunction_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGameXenon.SetCallRestrictedFunctionMode
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGameXenon_execSetCallRestrictedFunctionMode_Parms
{
	unsigned long                                      bEnable;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGameXenon.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGameXenon_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeGameXenon.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeGameXenon_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeHub_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.Idle
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeHub_execIdle_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.ResetLocale
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeHub_execResetLocale_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.GetCurrentTime
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeHub_execGetCurrentTime_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeHub_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.ConnectDirtySock
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeHub_execConnectDirtySock_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeHub_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeHub.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeHub_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.TriggerEmptyCallback
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeLeaderboard_eventTriggerEmptyCallback_Parms
{
	unsigned char                                      nErrorCode;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// struct TArray<struct FLeaderboardColumn>        aColumns;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct TArray<struct FLeaderboardRecord>        aLeaderboardRecords;                              		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             iTotalRanks;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FUniqueNetId                             uidCenteredEntity;                                		// 0x0028 (0x0008) [0x0000000000000000]              
	// struct FPointer                                 pData;                                            		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.CreateJobGetLeaderboardList
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeLeaderboard_eventCreateJobGetLeaderboardList_Parms
{
	class USFXOnlineJobGetLeaderboardList*             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.CreateJobGetStatsData
// [0x00044803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeLeaderboard_eventCreateJobGetStatsData_Parms
{
	struct FLeaderboardStatScope                       oScope;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nRankRange;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineJobGetLeaderboardData*             ReturnValue;                                      		// 0x002C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.CreateJobGetFriendLeaderboardData
// [0x00044803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeLeaderboard_eventCreateJobGetFriendLeaderboardData_Parms
{
	int                                                nLBID;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineJobGetLeaderboardData*             ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.CreateJobGetLeaderboardCenteredData
// [0x00044803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeLeaderboard_eventCreateJobGetLeaderboardCenteredData_Parms
{
	int                                                nLBID;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                nPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankRange;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineJobGetLeaderboardData*             ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.CreateJobGetLeaderboardData
// [0x00044803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeLeaderboard_eventCreateJobGetLeaderboardData_Parms
{
	int                                                nLBID;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankStart;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankRange;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x001C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineJobGetLeaderboardData*             ReturnValue;                                      		// 0x0024 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GetLeaderboard
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execGetLeaderboard_Parms
{
	int                                                pLbId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRecordsStartRank;                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRecordsRange;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCenteredData;                                    		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFriendData;                                      		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                pPlayerId;                                        		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x001C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.RefreshLeaderboardTitles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execRefreshLeaderboardTitles_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.ShowGamerCardForRecord
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execShowGamerCardForRecord_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FLeaderboardRecord                          Record;                                           		// 0x0004 (0x001C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.ReadLeaderboardList
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execReadLeaderboardList_Parms
{
	struct FScriptDelegate                             funcReadLbListCompleted;                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 jobIds;                                           		// 0x0010 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GetFriendLeaderboardData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execGetFriendLeaderboardData_Parms
{
	int                                                pLbId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GetLeaderboardCenteredData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execGetLeaderboardCenteredData_Parms
{
	int                                                pLbId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                nPlayerId;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankRange;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GetLeaderboardData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execGetLeaderboardData_Parms
{
	int                                                pLbId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankStart;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankRange;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x001C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.HasNotificationsAvailable
// [0x00020002] 
struct USFXOnlineComponentBlazeLeaderboard_execHasNotificationsAvailable_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GetCurrentRankNotificationsArray
// [0x00020002] 
struct USFXOnlineComponentBlazeLeaderboard_execGetCurrentRankNotificationsArray_Parms
{
	struct TArray<struct FRankBypassNotification>      ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.RemoveRankNotificationCallback
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeLeaderboard_eventRemoveRankNotificationCallback_Parms
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.AddRankNotificationCallback
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeLeaderboard_eventAddRankNotificationCallback_Parms
{
	struct FScriptDelegate                             Callback;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.OnDisconnect
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentBlazeLeaderboard_execOnDisconnect_Parms
{
	class USFXOnlineEvent*                             OnlineEvent;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.CancelLeaderboardRequests
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execCancelLeaderboardRequests_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.RequestReadLeaderboardList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execRequestReadLeaderboardList_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GenerateHistoricalFriendData
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execGenerateHistoricalFriendData_Parms
{
	int                                                nPreviousLocalUserRank;                           		// 0x0000 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     friendsBlob;                                      		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.ProcessHistoricalFriendData
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execProcessHistoricalFriendData_Parms
{
	int                                                nPreviousLocalUserRank;                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     friendsBlob;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                srIBeatMyFriend;                                  		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                srIWasBeatByFriend;                               		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x001C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GenerateHistoricalFriendDataRecords
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execGenerateHistoricalFriendDataRecords_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.RankNotification_ChallengePointLeaderboardCb
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execRankNotification_ChallengePointLeaderboardCb_Parms
{
	struct TArray<struct FLeaderboardColumn>           aColumInfo;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                iTotalRanks;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                uidEntity;                                        		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      nErrorCode;                                       		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0030 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.RankNotification_N7RatingLeaderboardCb
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execRankNotification_N7RatingLeaderboardCb_Parms
{
	struct TArray<struct FLeaderboardColumn>           aColumInfo;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                iTotalRanks;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                uidEntity;                                        		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      nErrorCode;                                       		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0030 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.RequestFriendLeaderboardData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execRequestFriendLeaderboardData_Parms
{
	struct FLeaderboardDefinition                      LeaderboardDef;                                   		// 0x0000 (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0028 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GetRankNotifications
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execGetRankNotifications_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.RequestLeaderboardCenteredData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execRequestLeaderboardCenteredData_Parms
{
	struct FLeaderboardDefinition                      LeaderboardDef;                                   		// 0x0000 (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUniqueNetId                                nPlayerId;                                        		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankRange;                                       		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0034 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.RequestLeaderboardData
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execRequestLeaderboardData_Parms
{
	struct FLeaderboardDefinition                      LeaderboardDef;                                   		// 0x0000 (0x0018) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                nRankStart;                                       		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nRankRange;                                       		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0030 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GetLeaderboardDefinitionTable
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execGetLeaderboardDefinitionTable_Parms
{
	struct TArray<struct FLeaderboardMapGroup>         aLBDefTableRows;                                  		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.GetLeaderboardDefinitions
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLeaderboard_execGetLeaderboardDefinitions_Parms
{
	struct TArray<struct FLeaderboardDefinition>       aLBDefinitions;                                   		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.OnGetRankNotificationsCompleted
// [0x00120000] 
struct USFXOnlineComponentBlazeLeaderboard_execOnGetRankNotificationsCompleted_Parms
{
	struct TArray<struct FRankBypassNotification>      RankBypassNotificationArray;                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.OnReadLbListCompleted
// [0x00120000] 
struct USFXOnlineComponentBlazeLeaderboard_execOnReadLbListCompleted_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLeaderboard.OnResultsRetrieved
// [0x00124000] 
struct USFXOnlineComponentBlazeLeaderboard_execOnResultsRetrieved_Parms
{
	struct TArray<struct FLeaderboardColumn>           aColumnInfo;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                iTotalRanks;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                uidEntity;                                        		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      nErrorCode;                                       		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0030 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SetExternalDRMDataLoaded
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSetExternalDRMDataLoaded_Parms
{
	unsigned long                                      bValue;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnOriginAuthKeyAvailableCallback
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnOriginAuthKeyAvailableCallback_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     authKey;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnPromptRedeemCodeResult
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnPromptRedeemCodeResult_Parms
{
	int                                                nResult;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SuspendUserPing
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSuspendUserPing_Parms
{
	unsigned long                                      suspend;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetDefaultBiowareEmailAllowed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetDefaultBiowareEmailAllowed_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetConnectMode
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetConnectMode_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.AddFriendsCompleteCb
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execAddFriendsCompleteCb_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.PostImportFriendListToBlaze
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execPostImportFriendListToBlaze_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.ImportFriendListToBlaze
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execImportFriendListToBlaze_Parms
{
	struct FScriptDelegate                             funcImportFriendListToBlazeCompleted;             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnImportFriendListToBlazeCompleted
// [0x00120000] 
struct USFXOnlineComponentBlazeLogin_execOnImportFriendListToBlazeCompleted_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.RequestImportFriendListToBlaze
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execRequestImportFriendListToBlaze_Parms
{
	unsigned long                                      callPostImportFriendListToBlaze;                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CreateJobImportFriendListToBlaze
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeLogin_eventCreateJobImportFriendListToBlaze_Parms
{
	unsigned long                                      callPostImportFriendListToBlaze;                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJobImportFriendListToBlaze*        ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanShowPresenceInformation
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanShowPresenceInformation_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanViewPlayerProfiles
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanViewPlayerProfiles_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanPurchaseContent
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanPurchaseContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanDownloadUserContent
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanDownloadUserContent_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanCommunicate
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanCommunicate_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CanPlayOnline
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCanPlayOnline_Parms
{
	int                                                nUserIndex;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0004 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnDownloadOffersUICompleted
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnDownloadOffersUICompleted_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnDLCInfoLoaded
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnDLCInfoLoaded_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OpenCerberusUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOpenCerberusUI_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.EnterCDKey
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execEnterCDKey_Parms
{
	struct FString                                     sKey;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Buy
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execBuy_Parms
{
	unsigned char                                      nPurchaseSource;                                  		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CompleteBuildEntitlementListUponRedeption
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCompleteBuildEntitlementListUponRedeption_Parms
{
	int                                                nResult;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CompleteBuildEntitlementListUponLogin
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCompleteBuildEntitlementListUponLogin_Parms
{
	int                                                nResult;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.BuildEntitlementList
// [0x00044401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execBuildEntitlementList_Parms
{
	unsigned long                                      bFirstCallUponLogin;                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPage;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsCerberusMember
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execIsCerberusMember_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.DisablePersona
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execDisablePersona_Parms
{
	struct FString                                     sPersonaNonGrata;                                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CreatePersona
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCreatePersona_Parms
{
	struct FString                                     sPersonaName;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SelectPersona
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSelectPersona_Parms
{
	struct FString                                     sPersonaName;                                     		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.AcceptTOS
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execAcceptTOS_Parms
{
	unsigned long                                      bAccepted;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Disconnect
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execDisconnect_Parms
{
	unsigned long                                      bShowError;                                       		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.On1stPartyServiceLoginResult
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOn1stPartyServiceLoginResult_Parms
{
	unsigned long                                      loggedIn;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Show1stPartyServiceLogin
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeLogin_eventShow1stPartyServiceLogin_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Show1stPartyServiceLoginImp
// [0x00020002] 
struct USFXOnlineComponentBlazeLogin_execShow1stPartyServiceLoginImp_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CompleteLoginProcess
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCompleteLoginProcess_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.StartCerberusLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execStartCerberusLogin_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitStore
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitStore_Parms
{
	struct TArray<int>                                 aiChosen;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCreateNucleusAccountEx
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitCreateNucleusAccountEx_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bThirdParty;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBioWareProducts;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sCountryCode;                                   		// 0x002C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                BirthDay;                                         		// 0x003C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthMonth;                                       		// 0x0040 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                BirthYear;                                        		// 0x0044 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sLanguageCode;                                  		// 0x0048 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bSubmit;                                          		// 0x0058 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitEmailPasswordMismatch
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitEmailPasswordMismatch_Parms
{
	struct FString                                     email;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                eReturnCode;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitMessageBox
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitMessageBox_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitRedeemCode
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitRedeemCode_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     i_sCode;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCerberusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitCerberusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCerberusIntro
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitCerberusIntro_Parms
{
	int                                                eReturnCode;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitNucleusWelcomeMessageEx
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitNucleusWelcomeMessageEx_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitNucleusWelcomeMessage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitNucleusWelcomeMessage_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitCreateNucleusAccount
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitCreateNucleusAccount_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bEAProducts;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bThirdParty;                                      		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bBioWareProducts;                                 		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSubmit;                                          		// 0x002C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitParentEmail
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitParentEmail_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ParentEmail;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitNucleusLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitNucleusLogin_Parms
{
	struct FString                                     email;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      eReturnCode;                                      		// 0x0020 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SubmitIntroPage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSubmitIntroPage_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bSimulated;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Connect
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execConnect_Parms
{
	unsigned char                                      connectMode;                                      		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.AutoLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execAutoLogin_Parms
{
	struct FString                                     sEmail;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sPassword;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.AutoLoginWithAccountIndex
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execAutoLoginWithAccountIndex_Parms
{
	int                                                configAccountIndex;                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CheckAutoLoginFromIni
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCheckAutoLoginFromIni_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GoBackInUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGoBackInUI_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.Cancel
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execCancel_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetUserId
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetUserId_Parms
{
	struct FUniqueNetId                                ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetPersonaName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetPersonaName_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.HasInternetConnection
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execHasInternetConnection_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsConnectedTo1stPartyOnlineService
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execIsConnectedTo1stPartyOnlineService_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsSignedIn
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execIsSignedIn_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsConnected
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execIsConnected_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.IsActiveUser
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execIsActiveUser_Parms
{
	struct FUniqueNetId                                userId;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.SwitchActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execSwitchActiveUserIndex_Parms
{
	int                                                nNewIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetActiveUserIndex
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetActiveUserIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetLoginStatus
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetLoginStatus_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.GetAuthToken
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLogin_execGetAuthToken_Parms
{
	struct FScriptDelegate                             funcAuthTokenRetrieved;                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.CreateJobGetAuthToken
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeLogin_eventCreateJobGetAuthToken_Parms
{
	struct FScriptDelegate                             funcAuthTokenRetrieved;                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGetAuthToken*                   ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.ClearReadFriendsCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeLogin_eventClearReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USFXOnlineComponentUnrealPlayer*          oUnrealPlayer;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.AddReadFriendsCompleteDelegate
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeLogin_eventAddReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// class USFXOnlineComponentUnrealPlayer*          oUnrealPlayer;                                    		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnReadFriendsComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeLogin_execOnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLogin.OnAuthTokenRetrieved
// [0x00120000] 
struct USFXOnlineComponentBlazeLogin_execOnAuthTokenRetrieved_Parms
{
	struct FString                                     token;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLoginPC.OnOriginGoesOffline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLoginPC_execOnOriginGoesOffline_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLoginPC.OnOriginClosed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLoginPC_execOnOriginClosed_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLoginPC.HasInternetConnection
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLoginPC_execHasInternetConnection_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLoginPS3.Show1stPartyServiceLoginImp
// [0x00020002] 
struct USFXOnlineComponentBlazeLoginPS3_execShow1stPartyServiceLoginImp_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   Success;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXOnlineSubsystem*                      oOnlineSubsystem;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UOnlineSystemInterface*                   SystemInt;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UISFXOnlineComponentPlatform*             CompPlatform;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLoginPS3.HasInternetConnection
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLoginPS3_execHasInternetConnection_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLoginPS3.GetDefaultBiowareEmailAllowed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLoginPS3_execGetDefaultBiowareEmailAllowed_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLoginXenon.XenonLoginResult
// [0x00020002] 
struct USFXOnlineComponentBlazeLoginXenon_execXenonLoginResult_Parms
{
	unsigned long                                      isOpening;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UOnlineSubsystem*                         OnlineSub;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// class UOnlineSystemInterface*                   SystemInt;                                        		// 0x000C (0x0010) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLoginXenon.Show1stPartyServiceLoginImp
// [0x00020002] 
struct USFXOnlineComponentBlazeLoginXenon_execShow1stPartyServiceLoginImp_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   Success;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	// class USFXOnlineSubsystem*                      oOnlineSubsystem;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UOnlineSystemInterface*                   SystemInt;                                        		// 0x0010 (0x0010) [0x0000000000000000]              
	// class UISFXOnlineComponentPlatform*             CompPlatform;                                     		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLoginXenon.OnExternalUIChange
// [0x00120000] 
struct USFXOnlineComponentBlazeLoginXenon_execOnExternalUIChange_Parms
{
	unsigned long                                      bIsOpening;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeLoginXenon.HasInternetConnection
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeLoginXenon_execHasInternetConnection_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.CreatePurgeMessagesJob
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeMessaging_eventCreatePurgeMessagesJob_Parms
{
	int                                                InMapId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJobPurgeMessages*                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.CreatePurgeAllMessagesJob
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeMessaging_eventCreatePurgeAllMessagesJob_Parms
{
	class USFXOnlineJobPurgeMessages*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.CreateReceiveAllMessagesJob
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeMessaging_eventCreateReceiveAllMessagesJob_Parms
{
	class USFXOnlineJobReceiveMessage*                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeMessaging_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeMessaging_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeMessaging_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.PurgeAllMessagesViaJob
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeMessaging_execPurgeAllMessagesViaJob_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.FetchAllMessagesViaJob
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeMessaging_execFetchAllMessagesViaJob_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.PurgeAllMessages
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeMessaging_execPurgeAllMessages_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.SendMessage
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentBlazeMessaging_execSendMessage_Parms
{
	struct TArray<struct FString>                      sendToPersonaNames;                               		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      msgType;                                          		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FString>                      Params;                                           		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeMessaging.FetchAllMessages
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeMessaging_execFetchAllMessages_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetGalaxyAtWarRatingsCompleted
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetGalaxyAtWarRatingsCompleted_Parms
{
	struct TArray<int>                                 updatedSecurityRatings;                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 updatedWarAssets;                                 		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetStoreCatalogId
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeNotification_eventGetStoreCatalogId_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestGalaxyAtWarLevel
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentBlazeNotification_eventRequestGalaxyAtWarLevel_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.PostGetLeaderboardList
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execPostGetLeaderboardList_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.ReadPlayerStorageCallback
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execReadPlayerStorageCallback_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.FetchOfflineEntitlementStoreMappings
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execFetchOfflineEntitlementStoreMappings_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.IsLiveINIOutOfDate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execIsLiveINIOutOfDate_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.IsFetchingLiveBinaryINIData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execIsFetchingLiveBinaryINIData_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestBinaryLiveINIData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRequestBinaryLiveINIData_Parms
{
	unsigned long                                      bMainMenu;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetLiveBinaryINIVersion
// [0x00020002] 
struct USFXOnlineComponentBlazeNotification_execGetLiveBinaryINIVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.UpdateMOTDGUI
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execUpdateMOTDGUI_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetMOTDInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetMOTDInfo_Parms
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FSFXOnlineMOTDInfo                          ReturnValue;                                      		// 0x0004 (0x0044) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.CheckMessageAgainstDR
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execCheckMessageAgainstDR_Parms
{
	int                                                i;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestLiveTlkTable
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRequestLiveTlkTable_Parms
{
	unsigned long                                      bMainMenu;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetTargetOfferId
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetTargetOfferId_Parms
{
	unsigned char                                      nSource;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetDimeInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetDimeInfo_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetEntitlementInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetEntitlementInfo_Parms
{
	struct TArray<struct FSFXOnlineEntitlementLookupInfo> ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.LoadDimeCallback
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execLoadDimeCallback_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.LoadDimeInfo
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execLoadDimeInfo_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestDimeInfo
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRequestDimeInfo_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestEntitlementsInfo
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRequestEntitlementsInfo_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestServerInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRequestServerInfo_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.AdvanceToNextRequest
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execAdvanceToNextRequest_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.RequestData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execRequestData_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeNotification.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeNotification_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.GameReportingCallback
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentBlazeStats_execGameReportingCallback_Parms
{
	unsigned char                                      eError;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nJob;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   Success;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          FlushOnlineStatsDelegate;                         		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.CreateJobGetStatsGroupList
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeStats_eventCreateJobGetStatsGroupList_Parms
{
	class USFXOnlineJobGetStatsGroupList*              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.CreateJobGameReporting
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentBlazeStats_eventCreateJobGameReporting_Parms
{
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJobGameReporting*                  ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.RegisterStatGuid
// [0x00420000] 
struct USFXOnlineComponentBlazeStats_execRegisterStatGuid_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ClientStatGuid;                                   		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.GetClientStatGuid
// [0x00020000] 
struct USFXOnlineComponentBlazeStats_execGetClientStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeStats_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.AddRegisterHostStatGuidCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeStats_execAddRegisterHostStatGuidCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.RegisterHostStatGuid
// [0x00420000] 
struct USFXOnlineComponentBlazeStats_execRegisterHostStatGuid_Parms
{
	struct FString                                     HostStatGuid;                                     		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.GetHostStatGuid
// [0x00020000] 
struct USFXOnlineComponentBlazeStats_execGetHostStatGuid_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.WriteOnlinePlayerScores
// [0x00420000] 
struct USFXOnlineComponentBlazeStats_execWriteOnlinePlayerScores_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                LeaderboardId;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlinePlayerScore>           PlayerScores;                                     		// 0x000C (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.FreeStats
// [0x00020000] 
struct USFXOnlineComponentBlazeStats_execFreeStats_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.ClearReadOnlineStatsCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeStats_execClearReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.AddReadOnlineStatsCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentBlazeStats_execAddReadOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.ReadOnlineStatsByRankAroundPlayer
// [0x00024000] 
struct USFXOnlineComponentBlazeStats_execReadOnlineStatsByRankAroundPlayer_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumRows;                                          		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.ReadOnlineStatsByRank
// [0x00024000] 
struct USFXOnlineComponentBlazeStats_execReadOnlineStatsByRank_Parms
{
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                StartIndex;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NumToRead;                                        		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.ReadOnlineStatsForFriends
// [0x00020000] 
struct USFXOnlineComponentBlazeStats_execReadOnlineStatsForFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.ReadOnlineStats
// [0x00420000] 
struct USFXOnlineComponentBlazeStats_execReadOnlineStats_Parms
{
	struct TArray<struct FUniqueNetId>                 Players;                                          		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UOnlineStatsRead*                            StatsRead;                                        		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.ClearFlushOnlineStatsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeStats_execClearFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.AddFlushOnlineStatsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentBlazeStats_execAddFlushOnlineStatsCompleteDelegate_Parms
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.ReadStatsGroupList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeStats_execReadStatsGroupList_Parms
{
	struct FScriptDelegate                             funcReadStatsGroupListCompleted;                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.RequestReadStatsGroupList
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentBlazeStats_execRequestReadStatsGroupList_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.GetFriendsStatsData
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentBlazeStats_execGetFriendsStatsData_Parms
{
	struct FLeaderboardStatScope                       oScope;                                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                nRankRange;                                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcResultsRetrieved;                             		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x002C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.GetStatsGroupNames
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentBlazeStats_execGetStatsGroupNames_Parms
{
	struct TArray<struct FString>                      aStatsGroupNames;                                 		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.FlushOnlineStats
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeStats_execFlushOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.WriteOnlineStats
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeStats_execWriteOnlineStats_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Player;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeStats_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeStats_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentBlazeStats_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.OnRegisterHostStatGuidComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeStats_execOnRegisterHostStatGuidComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.OnReadOnlineStatsComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeStats_execOnReadOnlineStatsComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.OnFlushOnlineStatsComplete
// [0x00120000] 
struct USFXOnlineComponentBlazeStats_execOnFlushOnlineStatsComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.OnGetRankNotifications
// [0x00120000] 
struct USFXOnlineComponentBlazeStats_execOnGetRankNotifications_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.OnReadStatsGroupListCompleted
// [0x00120000] 
struct USFXOnlineComponentBlazeStats_execOnReadStatsGroupListCompleted_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentBlazeStats.OnResultsRetrieved
// [0x00124000] 
struct USFXOnlineComponentBlazeStats_execOnResultsRetrieved_Parms
{
	struct TArray<struct FLeaderboardColumn>           aColumnInfo;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      nErrorCode;                                       		// 0x0020 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.TestGetRatingsCallback
// [0x00020002] 
struct USFXOnlineComponentGalaxyAtWar_execTestGetRatingsCallback_Parms
{
	struct TArray<int>                                 updatedSecurityRatings;                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 updatedWarAssets;                                 		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             tempInt;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.TestTouchMessagesCallback
// [0x00020002] 
struct USFXOnlineComponentGalaxyAtWar_execTestTouchMessagesCallback_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.TestGetMessagesCallback
// [0x00020002] 
struct USFXOnlineComponentGalaxyAtWar_execTestGetMessagesCallback_Parms
{
	struct TArray<struct FMessageEntry>                Messages;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FMessageEntry                            MessageEntry;                                     		// 0x0014 (0x0044) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.TestSendMessageCallback
// [0x00020002] 
struct USFXOnlineComponentGalaxyAtWar_execTestSendMessageCallback_Parms
{
	int                                                messageId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<int>                                 messageIds;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             tempInt;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.ParseTouchMessagesResult
// [0x00420802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventParseTouchMessagesResult_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                numMsgs;                                          		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                errorCode;                                        		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class USFXOnlineComponentXMLParser*             parser;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FString                                  errorName;                                        		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bErrorCode;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bErrorName;                                       		// 0x002C (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.ParseGetMessagesResult
// [0x00420802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventParseGetMessagesResult_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FMessageEntry>                messageEntries;                                   		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x0018 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class USFXOnlineComponentXMLParser*             parser;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	// int                                             skipcount;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FString                                  errorName;                                        		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bErrorCode;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bErrorName;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FMessageEntry                            messageEntryIter;                                 		// 0x0040 (0x0044) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.ParseSendMessageResult
// [0x00420802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventParseSendMessageResult_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                messageId;                                        		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct TArray<int>                                 messageIds;                                       		// 0x000C (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x001C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class USFXOnlineComponentXMLParser*             parser;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	// int                                             messageIdIter;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             skipcount;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	// struct FString                                  errorName;                                        		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bErrorCode;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bErrorName;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.ParseHTTPRatingsAssetsLevel
// [0x00420802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventParseHTTPRatingsAssetsLevel_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<int>                                 updatedSecurityRatings;                           		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<int>                                 updatedWarAssets;                                 		// 0x0018 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0028 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                errorCode;                                        		// 0x002C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// class USFXOnlineComponentXMLParser*             parser;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             IntResult;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             skipcount;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FString                                  errorName;                                        		// 0x0044 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bErrorCode;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bErrorName;                                       		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.ParseAuthenticationResult
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventParseAuthenticationResult_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineComponentXMLParser*             parser;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FString                                  stringResult;                                     		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  errorName;                                        		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bErrorCode;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bErrorName;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	// int                                             errorCode;                                        		// 0x003C (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.InvalidateSession
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventInvalidateSession_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.IsSessionValid
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventIsSessionValid_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.CreateJobGaWTouchMessages
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventCreateJobGaWTouchMessages_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcOnRequestComplete;                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGaWHTTPTouchMessages*           ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.CreateJobGaWGetMessages
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventCreateJobGaWGetMessages_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcOnRequestComplete;                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGaWHTTPGetMessages*             ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.CreateJobGaWSendMessage
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventCreateJobGaWSendMessage_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sendMsgParam1;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sendMsgParam2;                                    		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sendMsgParam3;                                    		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             funcOnRequestComplete;                            		// 0x0034 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGaWHTTPSendMessage*             ReturnValue;                                      		// 0x0044 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.CreateJobGaWIncreaseRatings
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventCreateJobGaWIncreaseRatings_Parms
{
	int                                                defaultRatingIncrease;                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FMapEntry>                    securityRatingIncrease;                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FMapEntry>                    warAssetIncrease;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             funcOnRequestComplete;                            		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGaWHTTPIncreaseRatings*         ReturnValue;                                      		// 0x0034 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.CreateJobGaWGetRatings
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventCreateJobGaWGetRatings_Parms
{
	unsigned long                                      getWarAssets;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcOnRequestComplete;                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGaWHTTPGetRatings*              ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.SetBaseURL
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentGalaxyAtWar_eventSetBaseURL_Parms
{
	struct FString                                     sURL;                                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.Cleanup
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execCleanup_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.GetFirstBlazeAttrId
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execGetFirstBlazeAttrId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.GetTouchMessagesHTTPRequest
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execGetTouchMessagesHTTPRequest_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.GetGetMessagesHTTPRequest
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execGetGetMessagesHTTPRequest_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.GetSendMessageHTTPRequest
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execGetSendMessageHTTPRequest_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     param1;                                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     param2;                                           		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     param3;                                           		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0034 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.GetIncreaseRatingsHTTPRequest
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execGetIncreaseRatingsHTTPRequest_Parms
{
	int                                                defaultRatingIncrease;                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FMapEntry>                    securityRatingsIncrease;                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FMapEntry>                    warAssetsIncrease;                                		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0024 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.GetRatingsHTTPRequest
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execGetRatingsHTTPRequest_Parms
{
	unsigned long                                      getAssets;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.GetAuthenticationHTTPRequest
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execGetAuthenticationHTTPRequest_Parms
{
	struct FString                                     token;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                tokenType;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineHTTPRequest*                       pSFXOnlineHTTPRequest;                            		// 0x0014 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.TouchMessages
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execTouchMessages_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcOnRequestComplete;                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.GetMessages
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execGetMessages_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcOnRequestComplete;                            		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.SendMessage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execSendMessage_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sendMsgParam1;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ParamType;                                        		// 0x0014 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sendMsgParam3;                                    		// 0x0018 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             OnSendMessageComplete;                            		// 0x0028 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.IncreaseRatings
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execIncreaseRatings_Parms
{
	int                                                defaultRatingIncrease;                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FMapEntry>                    securityRatingIncrease;                           		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FMapEntry>                    warAssetIncrease;                                 		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             funcOnRequestComplete;                            		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.GetRatings
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentGalaxyAtWar_execGetRatings_Parms
{
	unsigned long                                      getWarAssets;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bCached;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             funcOnRequestComplete;                            		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.OnTouchMessagesComplete
// [0x00120000] 
struct USFXOnlineComponentGalaxyAtWar_execOnTouchMessagesComplete_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.OnGetMessagesComplete
// [0x00120000] 
struct USFXOnlineComponentGalaxyAtWar_execOnGetMessagesComplete_Parms
{
	struct TArray<struct FMessageEntry>                Messages;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.OnSendMessageComplete
// [0x00120000] 
struct USFXOnlineComponentGalaxyAtWar_execOnSendMessageComplete_Parms
{
	int                                                messageId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<int>                                 messageIds;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.OnIncreaseRatingsComplete
// [0x00120000] 
struct USFXOnlineComponentGalaxyAtWar_execOnIncreaseRatingsComplete_Parms
{
	struct TArray<int>                                 updatedSecurityRatings;                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 updatedWarAssets;                                 		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.OnGetRatingsComplete
// [0x00120000] 
struct USFXOnlineComponentGalaxyAtWar_execOnGetRatingsComplete_Parms
{
	struct TArray<int>                                 updatedSecurityRatings;                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 updatedWarAssets;                                 		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentGalaxyAtWar.AuthenticateCompleted
// [0x00120000] 
struct USFXOnlineComponentGalaxyAtWar_execAuthenticateCompleted_Parms
{
	int                                                errorCode;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.OnTick
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentJobQueue_execOnTick_Parms
{
	class USFXOnlineEvent*                             OnlineEvent;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentJobQueue_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentJobQueue_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         OnlineSub;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentJobQueue_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.CancelJob
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentJobQueue_eventCancelJob_Parms
{
	int                                                JobId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             NumJobs;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             JobIdx;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXOnlineJob*                            Job;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.CancelJobs
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentJobQueue_eventCancelJobs_Parms
{
	unsigned char                                      JobType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             CanceledJobs;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             NumJobs;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// int                                             JobIdx;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// class USFXOnlineJob*                            Job;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct TArray<class USFXOnlineJob*>             JobsToRemove;                                     		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.CheckForJob
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentJobQueue_eventCheckForJob_Parms
{
	unsigned char                                      JobType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             Predicate;                                        		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.CheckForPendingJob
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentJobQueue_eventCheckForPendingJob_Parms
{
	unsigned char                                      JobType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             Predicate;                                        		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.CheckForProcessingJob
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentJobQueue_eventCheckForProcessingJob_Parms
{
	unsigned char                                      JobType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             Predicate;                                        		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.CheckForJobInArray
// [0x00440003] ( FUNC_Final )
struct USFXOnlineComponentJobQueue_execCheckForJobInArray_Parms
{
	unsigned char                                      JobType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<class USFXOnlineJob*>                JobArray;                                         		// 0x0004 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FScriptDelegate                             Predicate;                                        		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             JobIdx;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             NumJobs;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// class USFXOnlineJob*                            Job;                                              		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.JobPredicate
// [0x00520000] 
struct USFXOnlineComponentJobQueue_execJobPredicate_Parms
{
	class USFXOnlineJob*                               Job;                                              		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.ProcessJobs
// [0x00024802] ( FUNC_Event )
struct USFXOnlineComponentJobQueue_eventProcessJobs_Parms
{
	float                                              TimeDelta;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                JobsToProcess;                                    		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             JobsProcessing;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	// struct TArray<class USFXOnlineJob*>             JobsToRemove;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             NumJobs;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             JobIdx;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// int                                             JobsStarted;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	// int                                             JobsAlreadyProcessing;                            		// 0x002C (0x0004) [0x0000000000000000]              
	// class USFXOnlineJob*                            Job;                                              		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             JobCategory;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.GetFirstPendingJob
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentJobQueue_execGetFirstPendingJob_Parms
{
	unsigned char                                      JobType;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJob*                               ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.GetProcessingJob
// [0x00020003] ( FUNC_Final )
struct USFXOnlineComponentJobQueue_execGetProcessingJob_Parms
{
	int                                                JobId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJob*                               ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.GetPendingJob
// [0x00020003] ( FUNC_Final )
struct USFXOnlineComponentJobQueue_execGetPendingJob_Parms
{
	int                                                JobId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJob*                               ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.AddJob
// [0x00020802] ( FUNC_Event )
struct USFXOnlineComponentJobQueue_eventAddJob_Parms
{
	class USFXOnlineJob*                               Job;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.UpdateTime
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentJobQueue_execUpdateTime_Parms
{
	int                                                TimeDeltaMS;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             CategoryIdx;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentJobQueue.SetJobThrottle
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentJobQueue_execSetJobThrottle_Parms
{
	unsigned char                                      Category;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                valueMS;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearOnlineProfileCaches
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearOnlineProfileCaches_Parms
{
	// int                                             idx;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.TriggerProfileReadDelegate
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentUnrealPlayer_eventTriggerProfileReadDelegate_Parms
{
	unsigned char                                      UserNum;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccesful;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FScriptDelegate                          ReadDelegate;                                     		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.LoadSettingsCallback
// [0x00440003] ( FUNC_Final )
struct USFXOnlineComponentUnrealPlayer_execLoadSettingsCallback_Parms
{
	unsigned char                                      eError;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nJob;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FSettingsPair>                SettingsPairs;                                    		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                UserNum;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   Success;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FSettingsPair                            Setting;                                          		// 0x0020 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SaveSettingsCallback
// [0x00040003] ( FUNC_Final )
struct USFXOnlineComponentUnrealPlayer_execSaveSettingsCallback_Parms
{
	unsigned char                                      eError;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                nJob;                                             		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                UserNum;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// unsigned long                                   Success;                                          		// 0x000C (0x0004) [0x0000000000000000]              
	// struct FScriptDelegate                          WriteDelegate;                                    		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CreateJobLoadSettings
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentUnrealPlayer_eventCreateJobLoadSettings_Parms
{
	int                                                Arg;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJobLoadSettings*                   ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CreateJobSaveSettings
// [0x00040803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineComponentUnrealPlayer_eventCreateJobSaveSettings_Parms
{
	int                                                Arg;                                              		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJobSaveSettings*                   ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearAsyncState
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execClearAsyncState_Parms
{
	int                                                UserNum;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearUnlockAchievementCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddUnlockAchievementCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddUnlockAchievementCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnUnlockAchievementComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnUnlockAchievementComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.UnlockAchievement
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execUnlockAchievement_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                AchievementId;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetAchievements
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FAchievementDetails>          Achievements;                                     		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TitleId;                                          		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                SetIndex;                                         		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadAchievementsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadAchievementsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadAchievementsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadAchievementsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadAchievementsComplete_Parms
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadAchievements
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadAchievements_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadText;                                  		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldReadImages;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.DeleteMessage
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execDeleteMessage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                MessageIndex;                                     		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearFriendMessageReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendMessageReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendMessageReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             MessageDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnFriendMessageReceived
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnFriendMessageReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                SendingPlayer;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SendingNick;                                      		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x001C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetFriendMessages
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayer_execGetFriendMessages_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineFriendMessage>         FriendMessages;                                   		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddJoinFriendGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnJoinFriendGameComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnJoinFriendGameComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.JoinFriendGame
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execJoinFriendGame_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReceivedGameInviteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReceivedGameInviteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddReceivedGameInviteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReceivedGameInvite
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReceivedGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     InviterName;                                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SendGameInviteToFriends
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execSendGameInviteToFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FUniqueNetId>                 Friends;                                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Text;                                             		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SendGameInviteToFriend
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execSendGameInviteToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Text;                                             		// 0x000C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SendMessageToFriend
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execSendMessageToFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                Friend;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearFriendInviteReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendInviteReceivedDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendInviteReceivedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             InviteDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnFriendInviteReceived
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnFriendInviteReceived_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     RequestingNick;                                   		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x001C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.RemoveFriend
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execRemoveFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                FormerFriend;                                     		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.DenyFriendInvite
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execDenyFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AcceptFriendInvite
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAcceptFriendInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                RequestingPlayer;                                 		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddAddFriendByNameCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnAddFriendByNameComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnAddFriendByNameComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendByName
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendByName_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     FriendName;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriend
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewFriend;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Message;                                          		// 0x000C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x001C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetKeyboardInputResults
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayer_execGetKeyboardInputResults_Parms
{
	unsigned char                                      bWasCanceled;                                     		// 0x0000 (0x0001) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearKeyboardInputDoneDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddKeyboardInputDoneDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddKeyboardInputDoneDelegate_Parms
{
	struct FScriptDelegate                             InputDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnKeyboardInputComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnKeyboardInputComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ShowKeyboardUI
// [0x00024000] 
struct USFXOnlineComponentUnrealPlayer_execShowKeyboardUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     TitleText;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DescriptionText;                                  		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bIsPassword;                                      		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bShouldValidate;                                  		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     DefaultText;                                      		// 0x002C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	int                                                MaxResultLength;                                  		// 0x003C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0040 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.SetOnlineStatus
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execSetOnlineStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                StatusId;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FLocalizedStringSetting>      LocalizedStringSettings;                          		// 0x0008 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FSettingsProperty>            Properties;                                       		// 0x0018 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetFriendsList
// [0x00424400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FOnlineFriend>                Friends;                                          		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                Count;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x001C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadFriendsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadFriendsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadFriendsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadFriendsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadFriendsComplete_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadFriendsList
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadFriendsList_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                Count;                                            		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                StartingAt;                                       		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddWritePlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddWritePlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnWritePlayerStorageComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnWritePlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.WritePlayerStorage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execWritePlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetPlayerStorage
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execGetPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadPlayerStorageForNetIdComplete_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadPlayerStorageForNetId
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadPlayerStorageForNetId_Parms
{
	struct FUniqueNetId                                NetId;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadPlayerStorageCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadPlayerStorageCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadPlayerStorageComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadPlayerStorageComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadPlayerStorage
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadPlayerStorage_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddWriteProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnWriteProfileSettingsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnWriteProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.WriteProfileSettings
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execWriteProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTrilogyProfile;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetProfileSettings
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execGetProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddReadProfileSettingsCompleteDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnReadProfileSettingsComplete
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnReadProfileSettingsComplete_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ReadProfileSettings
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execReadProfileSettings_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsTrilogyProfile;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearFriendsChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddFriendsChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddFriendsChangeDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             FriendsDelegate;                                  		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearMutingChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execClearMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddMutingChangeDelegate
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execAddMutingChangeDelegate_Parms
{
	struct FScriptDelegate                             MutingDelegate;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginCancelledDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginCancelledDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginCancelledDelegate_Parms
{
	struct FScriptDelegate                             CancelledDelegate;                                		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginStatusChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginStatusChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginStatusDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      LocalUserNum;                                     		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginStatusChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginStatusChange_Parms
{
	unsigned char                                      NewStatus;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                NewId;                                            		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginChangeDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginChangeDelegate_Parms
{
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ShowFriendsUI
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execShowFriendsUI_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsMuted
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execIsMuted_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AreAnyFriends
// [0x00420000] 
struct USFXOnlineComponentUnrealPlayer_execAreAnyFriends_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FFriendsQuery>                Query;                                            		// 0x0004 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsFriend
// [0x00020000] 
struct USFXOnlineComponentUnrealPlayer_execIsFriend_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanShowPresenceInformation
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanShowPresenceInformation_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanViewPlayerProfiles
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanViewPlayerProfiles_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanPurchaseContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanPurchaseContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanDownloadUserContent
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanDownloadUserContent_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanCommunicate
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanCommunicate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CanPlayOnline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCanPlayOnline_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsLocalLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execIsLocalLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.IsGuestLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execIsGuestLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetPlayerNickname
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetPlayerNickname_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetUniquePlayerId
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetUniquePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetOfflinePlayerId
// [0x00420400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetOfflinePlayerId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetLoginStatus
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execGetLoginStatus_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0001 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineSubsystem*                      oOnlineSubsystem;                                 		// 0x0004 (0x0008) [0x0000000000000000]              
	// unsigned char                                   ELoginStatus;                                     		// 0x000C (0x0001) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLogoutCompletedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLogoutCompletedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLogoutCompletedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LogoutDelegate;                                   		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLogoutCompleted
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLogoutCompleted_Parms
{
	unsigned long                                      bWasSuccessful;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.Logout
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execLogout_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearLoginFailedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execClearLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// int                                             RemoveIndex;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AddLoginFailedDelegate
// [0x00020002] 
struct USFXOnlineComponentUnrealPlayer_execAddLoginFailedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             LoginDelegate;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginFailed
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginFailed_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      errorCode;                                        		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.AutoLogin
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execAutoLogin_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.Login
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execLogin_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     LoginName;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bWantsLocalOnly;                                  		// 0x0024 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ShowLoginUI
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execShowLoginUI_Parms
{
	unsigned long                                      bShowOnlineOnly;                                  		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.ClearProfileCaches
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execClearProfileCaches_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnFriendsChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnFriendsChange_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnMutingChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnMutingChange_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginCancelled
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginCancelled_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnLoginChange
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnLoginChange_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnProfileDataChanged
// [0x00120000] 
struct USFXOnlineComponentUnrealPlayer_execOnProfileDataChanged_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CachePlayerNickname
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCachePlayerNickname_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.CreateProfileName
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execCreateProfileName_Parms
{
	unsigned long                                      bIsTrilogyProfile;                                		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.DoesProfileExist
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execDoesProfileExist_Parms
{
	unsigned long                                      bIsTrilogyProfile;                                		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentUnrealPlayer.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentUnrealPlayer_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineGameSettings.ToString
// [0x00020002] 
struct USFXOnlineGameSettings_execToString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  resultStr;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineGameSettings.Copy
// [0x00020802] ( FUNC_Event )
struct USFXOnlineGameSettings_eventCopy_Parms
{
	class USFXOnlineGameSettings*                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineGameSettings*                   Copy;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineGameSettings.EnsureMatchSettingsAreValid
// [0x00422002] 
struct USFXOnlineGameSettings_execEnsureMatchSettingsAreValid_Parms
{
	unsigned char                                      eType;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                PrivacySetting;                                   		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                MapSetting;                                       		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                EnemySetting;                                     		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ChallengeSetting;                                 		// 0x0010 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	// struct TArray<struct FMPEnemyInfo>              EnemyList;                                        		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct TArray<struct FMPChallengeInfo>          ChallengeList;                                    		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bMapInList;                                       		// 0x0034 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bEnemyInList;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bChallengeInList;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FString                                  mapPackageName;                                   		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineGameSettings.ValidateMapName
// [0x00022002] 
struct USFXOnlineGameSettings_execValidateMapName_Parms
{
	struct FString                                     MapName;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineGameSettings.GetMapByServerMapID
// [0x00022802] ( FUNC_Event )
struct USFXOnlineGameSettings_eventGetMapByServerMapID_Parms
{
	struct FString                                     serverMapID;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FMPMapInfo                                  ReturnValue;                                      		// 0x0010 (0x0048) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             serverMapIdNum;                                   		// 0x0058 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineGameSettings.GetMapByID
// [0x00022002] 
struct USFXOnlineGameSettings_execGetMapByID_Parms
{
	int                                                MapId;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FMPMapInfo                                  ReturnValue;                                      		// 0x0004 (0x0048) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x004C (0x0004) [0x0000000000000000]              
	// struct FMPMapInfo                               InvalidMapInfo;                                   		// 0x0050 (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineGameSettings.GetMapByPackageName
// [0x00022002] 
struct USFXOnlineGameSettings_execGetMapByPackageName_Parms
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FMPMapInfo                                  ReturnValue;                                      		// 0x0010 (0x0048) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x0058 (0x0004) [0x0000000000000000]              
	// struct FMPMapInfo                               InvalidMapInfo;                                   		// 0x005C (0x0048) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineGameSettings.GetMasterMapID
// [0x00022802] ( FUNC_Event )
struct USFXOnlineGameSettings_eventGetMasterMapID_Parms
{
	struct FString                                     PackageName;                                      		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineGameSettings.SetPrivacy
// [0x00020802] ( FUNC_Event )
struct USFXOnlineGameSettings_eventSetPrivacy_Parms
{
	unsigned char                                      privacy;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineGameSettings.GetPrivacy
// [0x00020802] ( FUNC_Event )
struct USFXOnlineGameSettings_eventGetPrivacy_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.GetSchedulingsLeft
// [0x00080003] ( FUNC_Final )
struct USFXOnlineJob_execGetSchedulingsLeft_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.SetId
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineJob_eventSetId_Parms
{
	int                                                NewJobId;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.IsCanceled
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineJob_eventIsCanceled_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.Cancel
// [0x00024803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineJob_eventCancel_Parms
{
	unsigned char                                      WithError;                                        		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.DeleteBlazeJobs
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineJob_execDeleteBlazeJobs_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJob.CancelBlazeJobs
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineJob_execCancelBlazeJobs_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJob.InProgress
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineJob_eventInProgress_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.GetJobCategory
// [0x00020003] ( FUNC_Final )
struct USFXOnlineJob_execGetJobCategory_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.GetJobType
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineJob_eventGetJobType_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.GetId
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineJob_eventGetId_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.ShouldReschedule
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJob_eventShouldReschedule_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.Tick
// [0x00020000] 
struct USFXOnlineJob_execTick_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJob.IsBlocking
// [0x00020002] 
struct USFXOnlineJob_execIsBlocking_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.DoExecute
// [0x00020002] 
struct USFXOnlineJob_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.OnRelease
// [0x00020002] 
struct USFXOnlineJob_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJob.EndProcessing
// [0x00084803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineJob_eventEndProcessing_Parms
{
	unsigned char                                      WithError;                                        		// 0x0000 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJob.Execute
// [0x00020003] ( FUNC_Final )
struct USFXOnlineJob_execExecute_Parms
{
	// unsigned long                                   ExecutionResult;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGameReporting.CreateJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobGameReporting_eventCreateJob_Parms
{
	struct FScriptDelegate                             InCallback;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJobGameReporting*                  ReturnValue;                                      		// 0x0018 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGameReporting*               Job;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGameReporting.OnReleaseImpl
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineJobGameReporting_execOnReleaseImpl_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGameReporting.OnRelease
// [0x00020002] 
struct USFXOnlineJobGameReporting_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGameReporting.BuildReport
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGameReporting_execBuildReport_Parms
{
	class UOnlineStatsWrite*                           StatsWrite;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGameReporting.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGameReporting_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGameReporting.GameReportingCallback
// [0x00120000] 
struct USFXOnlineJobGameReporting_execGameReportingCallback_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                InJobId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.AuthorizationFailed
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPRequest_eventAuthorizationFailed_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.ShouldReschedule
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPRequest_eventShouldReschedule_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.OnRelease
// [0x00020002] 
struct USFXOnlineJobGaWHTTPRequest_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.Tick
// [0x00020002] 
struct USFXOnlineJobGaWHTTPRequest_execTick_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.AuthenticateHTTP
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPRequest_eventAuthenticateHTTP_Parms
{
	struct FString                                     token;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                tokenType;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXOnlineComponentHTTPManager*           httpManager;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// class USFXOnlineComponentGalaxyAtWar*           galaxyAtWar;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.AuthenticateHTTPResult
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPRequest_execAuthenticateHTTPResult_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.JobFailedHandler
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPRequest_execJobFailedHandler_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.TickInternal
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPRequest_execTickInternal_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.GetAuthToken
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPRequest_execGetAuthToken_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPRequest_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.QueueSecondHTTPRequest
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPRequest_eventQueueSecondHTTPRequest_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPRequest.HandleSecondHTTPResult
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPRequest_execHandleSecondHTTPResult_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetMessages.OnRelease
// [0x00020002] 
struct USFXOnlineJobGaWHTTPGetMessages_execOnRelease_Parms
{
	// struct TArray<struct FMessageEntry>             Messages;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetMessages.QueueSecondHTTPRequest
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPGetMessages_eventQueueSecondHTTPRequest_Parms
{
	// class USFXOnlineComponentHTTPManager*           httpManager;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXOnlineComponentGalaxyAtWar*           galaxyAtWar;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetMessages.CreateGaWGetMessagesJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPGetMessages_eventCreateGaWGetMessagesJob_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RequestCompleteDelegate;                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGaWHTTPGetMessages*             ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGaWHTTPGetMessages*          Job;                                              		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetMessages.JobFailedHandler
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPGetMessages_execJobFailedHandler_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetMessages.HandleSecondHTTPResult
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPGetMessages_execHandleSecondHTTPResult_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetMessages.OnGetMessagesComplete
// [0x00120000] 
struct USFXOnlineJobGaWHTTPGetMessages_execOnGetMessagesComplete_Parms
{
	struct TArray<struct FMessageEntry>                Messages;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetRatings.OnRelease
// [0x00020002] 
struct USFXOnlineJobGaWHTTPGetRatings_execOnRelease_Parms
{
	// struct TArray<int>                              updatedSecurityRatings;                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct TArray<int>                              updatedWarAssets;                                 		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Level;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetRatings.QueueSecondHTTPRequest
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPGetRatings_eventQueueSecondHTTPRequest_Parms
{
	// class USFXOnlineComponentHTTPManager*           httpManager;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXOnlineComponentGalaxyAtWar*           galaxyAtWar;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetRatings.CreateGaWGetRatingsJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPGetRatings_eventCreateGaWGetRatingsJob_Parms
{
	unsigned long                                      includeWarAssets;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RequestCompleteDelegate;                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGaWHTTPGetRatings*              ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGaWHTTPGetRatings*           Job;                                              		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetRatings.JobFailedHandler
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPGetRatings_execJobFailedHandler_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetRatings.HandleSecondHTTPResult
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPGetRatings_execHandleSecondHTTPResult_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPGetRatings.OnGetRatingsComplete
// [0x00120000] 
struct USFXOnlineJobGaWHTTPGetRatings_execOnGetRatingsComplete_Parms
{
	struct TArray<int>                                 updatedSecurityRatings;                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 updatedWarAssets;                                 		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPIncreaseRatings.OnRelease
// [0x00020002] 
struct USFXOnlineJobGaWHTTPIncreaseRatings_execOnRelease_Parms
{
	// struct TArray<int>                              updatedSecurityRatings;                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct TArray<int>                              updatedWarAssets;                                 		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             Level;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPIncreaseRatings.QueueSecondHTTPRequest
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPIncreaseRatings_eventQueueSecondHTTPRequest_Parms
{
	// class USFXOnlineComponentHTTPManager*           httpManager;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXOnlineComponentGalaxyAtWar*           galaxyAtWar;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPIncreaseRatings.CreateGaWIncreaseRatingsJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPIncreaseRatings_eventCreateGaWIncreaseRatingsJob_Parms
{
	int                                                inDefaultRatingIncrease;                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FMapEntry>                    inSecurityRatingIncrease;                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FMapEntry>                    inWarAssetIncrease;                               		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             RequestCompleteDelegate;                          		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGaWHTTPIncreaseRatings*         ReturnValue;                                      		// 0x0034 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGaWHTTPIncreaseRatings*      Job;                                              		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPIncreaseRatings.JobFailedHandler
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPIncreaseRatings_execJobFailedHandler_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPIncreaseRatings.HandleSecondHTTPResult
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPIncreaseRatings_execHandleSecondHTTPResult_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPIncreaseRatings.OnIncreaseRatingsComplete
// [0x00120000] 
struct USFXOnlineJobGaWHTTPIncreaseRatings_execOnIncreaseRatingsComplete_Parms
{
	struct TArray<int>                                 updatedSecurityRatings;                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<int>                                 updatedWarAssets;                                 		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPSendMessage.OnRelease
// [0x00020002] 
struct USFXOnlineJobGaWHTTPSendMessage_execOnRelease_Parms
{
	// int                                             messageId;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// struct TArray<int>                              messageIds;                                       		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPSendMessage.QueueSecondHTTPRequest
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPSendMessage_eventQueueSecondHTTPRequest_Parms
{
	// class USFXOnlineComponentHTTPManager*           httpManager;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXOnlineComponentGalaxyAtWar*           galaxyAtWar;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPSendMessage.CreateGaWSendMessageJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPSendMessage_eventCreateGaWSendMessageJob_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sendMsgParam1;                                    		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sendMsgParam2;                                    		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sendMsgParam3;                                    		// 0x0024 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             RequestCompleteDelegate;                          		// 0x0034 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGaWHTTPSendMessage*             ReturnValue;                                      		// 0x0044 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGaWHTTPSendMessage*          Job;                                              		// 0x004C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPSendMessage.JobFailedHandler
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPSendMessage_execJobFailedHandler_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPSendMessage.HandleSecondHTTPResult
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPSendMessage_execHandleSecondHTTPResult_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPSendMessage.OnSendMessageComplete
// [0x00120000] 
struct USFXOnlineJobGaWHTTPSendMessage_execOnSendMessageComplete_Parms
{
	int                                                messageId;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<int>                                 messageIds;                                       		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                errorCode;                                        		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPTouchMessages.OnRelease
// [0x00020002] 
struct USFXOnlineJobGaWHTTPTouchMessages_execOnRelease_Parms
{
	// int                                             Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPTouchMessages.QueueSecondHTTPRequest
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPTouchMessages_eventQueueSecondHTTPRequest_Parms
{
	// class USFXOnlineComponentHTTPManager*           httpManager;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXOnlineComponentGalaxyAtWar*           galaxyAtWar;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPTouchMessages.CreateGaWTouchMessagesJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobGaWHTTPTouchMessages_eventCreateGaWTouchMessagesJob_Parms
{
	int                                                msgType;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             RequestCompleteDelegate;                          		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGaWHTTPTouchMessages*           ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGaWHTTPTouchMessages*        Job;                                              		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPTouchMessages.JobFailedHandler
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPTouchMessages_execJobFailedHandler_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPTouchMessages.HandleSecondHTTPResult
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGaWHTTPTouchMessages_execHandleSecondHTTPResult_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobGaWHTTPTouchMessages.OnTouchMessagesComplete
// [0x00120000] 
struct USFXOnlineJobGaWHTTPTouchMessages_execOnTouchMessagesComplete_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                errorCode;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetAuthToken.CreateGetAuthTokenJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobGetAuthToken_eventCreateGetAuthTokenJob_Parms
{
	struct FScriptDelegate                             AuthTokenRetrievedDelegate;                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobGetAuthToken*                   ReturnValue;                                      		// 0x0010 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGetAuthToken*                Job;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGetAuthToken.OnAuthTokenRetrieved
// [0x00120000] 
struct USFXOnlineJobGetAuthToken_execOnAuthTokenRetrieved_Parms
{
	struct FString                                     token;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetAuthToken.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGetAuthToken_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardData.CreateFriendStatsDataJob
// [0x00026802] ( FUNC_Event )
struct USFXOnlineJobGetLeaderboardData_eventCreateFriendStatsDataJob_Parms
{
	struct FLeaderboardStatScope                       oScope;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                RankRange;                                        		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ResultsRetrievedDelegate;                         		// 0x0014 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0024 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineJobGetLeaderboardData*             ReturnValue;                                      		// 0x002C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGetLeaderboardData*          Job;                                              		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardData.CreateFriendLeaderboardJob
// [0x00026802] ( FUNC_Event )
struct USFXOnlineJobGetLeaderboardData_eventCreateFriendLeaderboardJob_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ResultsRetrievedDelegate;                         		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0014 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineJobGetLeaderboardData*             ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGetLeaderboardData*          Job;                                              		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardData.CreateCenteredLeaderboardJob
// [0x00026802] ( FUNC_Event )
struct USFXOnlineJobGetLeaderboardData_eventCreateCenteredLeaderboardJob_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                RankRange;                                        		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ResultsRetrievedDelegate;                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineJobGetLeaderboardData*             ReturnValue;                                      		// 0x0028 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGetLeaderboardData*          Job;                                              		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardData.CreateLeaderboardJob
// [0x00026802] ( FUNC_Event )
struct USFXOnlineJobGetLeaderboardData_eventCreateLeaderboardJob_Parms
{
	int                                                LeaderboardId;                                    		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                RankStart;                                        		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                RankRange;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             ResultsRetrievedDelegate;                         		// 0x000C (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FPointer                                    pExternalData;                                    		// 0x001C (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class USFXOnlineJobGetLeaderboardData*             ReturnValue;                                      		// 0x0024 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGetLeaderboardData*          Job;                                              		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardData.JobCompleted
// [0x00024400] ( FUNC_Native )
struct USFXOnlineJobGetLeaderboardData_execJobCompleted_Parms
{
	struct TArray<struct FLeaderboardColumn>           aColumInfo;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                iTotalRanks;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                uidEntity;                                        		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      nErrorCode;                                       		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0030 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardData.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGetLeaderboardData_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardData.OnResultsRetrieved
// [0x00124000] 
struct USFXOnlineJobGetLeaderboardData_execOnResultsRetrieved_Parms
{
	struct TArray<struct FLeaderboardColumn>           aColumInfo;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                iTotalRanks;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                uidEntity;                                        		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      nErrorCode;                                       		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0030 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardData.OnJobCompletion
// [0x00124000] 
struct USFXOnlineJobGetLeaderboardData_execOnJobCompletion_Parms
{
	struct TArray<struct FLeaderboardColumn>           aColumInfo;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<struct FLeaderboardRecord>           aResults;                                         		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                iTotalRanks;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                uidEntity;                                        		// 0x0024 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      nErrorCode;                                       		// 0x002C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FPointer                                    pExternalData;                                    		// 0x0030 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardList.ShouldReschedule
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobGetLeaderboardList_eventShouldReschedule_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardList.CreateGetLeaderboardListJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobGetLeaderboardList_eventCreateGetLeaderboardListJob_Parms
{
	class USFXOnlineJobGetLeaderboardList*             ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGetLeaderboardList*          Job;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardList.JobCompleted
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGetLeaderboardList_execJobCompleted_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardList.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGetLeaderboardList_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetLeaderboardList.OnJobCompletion
// [0x00120000] 
struct USFXOnlineJobGetLeaderboardList_execOnJobCompletion_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetStatsGroupList.CreateGetStatsGroupListJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobGetStatsGroupList_eventCreateGetStatsGroupListJob_Parms
{
	class USFXOnlineJobGetStatsGroupList*              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobGetStatsGroupList*           Job;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobGetStatsGroupList.JobCompleted
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGetStatsGroupList_execJobCompleted_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetStatsGroupList.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobGetStatsGroupList_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobGetStatsGroupList.OnJobCompletion
// [0x00120000] 
struct USFXOnlineJobGetStatsGroupList_execOnJobCompletion_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobHTTPRequest.Tick
// [0x00020002] 
struct USFXOnlineJobHTTPRequest_execTick_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobHTTPRequest.DoExecute
// [0x00020002] 
struct USFXOnlineJobHTTPRequest_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineComponentHTTPManager*           httpManager;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobHTTPRequest.CreateHTTPRequestJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobHTTPRequest_eventCreateHTTPRequestJob_Parms
{
	class USFXOnlineJobHTTPRequest*                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobHTTPRequest*                 Job;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobHTTPRequest.OnJobComplete
// [0x00120000] 
struct USFXOnlineJobHTTPRequest_execOnJobComplete_Parms
{
	class USFXOnlineHTTPRequest*                       request;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobImageRequest.MoveToBackOfQueue
// [0x00020002] 
struct USFXOnlineJobImageRequest_execMoveToBackOfQueue_Parms
{
	// class USFXOnlineJobImageRequest*                newJob;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobImageRequest.Tick
// [0x00020002] 
struct USFXOnlineJobImageRequest_execTick_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineJobImageRequest.DoExecute
// [0x00020002] 
struct USFXOnlineJobImageRequest_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineComponentImageManager*          imageManager;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FSFXOnlineImageRequest                   imageRequest;                                     		// 0x000C (0x0024) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineJobImageRequest.CreateImageRequestJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobImageRequest_eventCreateImageRequestJob_Parms
{
	class USFXOnlineJobImageRequest*                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobImageRequest*                Job;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobImageRequest.OnJobComplete
// [0x00120000] 
struct USFXOnlineJobImageRequest_execOnJobComplete_Parms
{
	struct FSFXOnlineImageRequest                      request;                                          		// 0x0000 (0x0024) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineJobImportFriendListToBlaze.ShouldReschedule
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobImportFriendListToBlaze_eventShouldReschedule_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobImportFriendListToBlaze.CreateImportFriendListToBlazeJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobImportFriendListToBlaze_eventCreateImportFriendListToBlazeJob_Parms
{
	unsigned long                                      callPostImportFriendListToBlaze;                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJobImportFriendListToBlaze*        ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobImportFriendListToBlaze*     Job;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobImportFriendListToBlaze.JobCompleted
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobImportFriendListToBlaze_execJobCompleted_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobImportFriendListToBlaze.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobImportFriendListToBlaze_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobImportFriendListToBlaze.OnJobCompletion
// [0x00120000] 
struct USFXOnlineJobImportFriendListToBlaze_execOnJobCompletion_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobLoadSettings.ShouldReschedule
// [0x00020802] ( FUNC_Event )
struct USFXOnlineJobLoadSettings_eventShouldReschedule_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobLoadSettings.CreateJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobLoadSettings_eventCreateJob_Parms
{
	struct FScriptDelegate                             InCallback;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                InCallbackArg;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJobLoadSettings*                   ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobLoadSettings*                Job;                                              		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobLoadSettings.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobLoadSettings_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobLoadSettings.LoadSettingsCallback
// [0x00120000] 
struct USFXOnlineJobLoadSettings_execLoadSettingsCallback_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                InJobId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FSettingsPair>                InSettings;                                       		// 0x0008 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                InCallbackArg;                                    		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobPurgeMessages.CreatePurgeMessagesJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobPurgeMessages_eventCreatePurgeMessagesJob_Parms
{
	int                                                InMapId;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJobPurgeMessages*                  ReturnValue;                                      		// 0x0004 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobPurgeMessages*               Job;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobPurgeMessages.CreatePurgeAllMessagesJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobPurgeMessages_eventCreatePurgeAllMessagesJob_Parms
{
	class USFXOnlineJobPurgeMessages*                  ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobPurgeMessages*               Job;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobPurgeMessages.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobPurgeMessages_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobReceiveMessage.CreateReceiveAllMessagesJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobReceiveMessage_eventCreateReceiveAllMessagesJob_Parms
{
	class USFXOnlineJobReceiveMessage*                 ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobReceiveMessage*              Job;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobReceiveMessage.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobReceiveMessage_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobSaveSettings.CreateJob
// [0x00022802] ( FUNC_Event )
struct USFXOnlineJobSaveSettings_eventCreateJob_Parms
{
	struct FScriptDelegate                             InCallback;                                       		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                InCallbackArg;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXOnlineJobSaveSettings*                   ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobSaveSettings*                Job;                                              		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobSaveSettings.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobSaveSettings_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobSaveSettings.CallCompletionDelegates
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineJobSaveSettings_eventCallCompletionDelegates_Parms
{
	unsigned long                                      Success;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FScriptDelegate                          WriteDelegate;                                    		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineJobSaveSettings.AddCompletionDelegate
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct USFXOnlineJobSaveSettings_eventAddCompletionDelegate_Parms
{
	struct FScriptDelegate                             JobCompleteDelegate;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineJobSaveSettings.AddSetting
// [0x00420802] ( FUNC_Event )
struct USFXOnlineJobSaveSettings_eventAddSetting_Parms
{
	struct FString                                     InKey;                                            		// 0x0000 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     InValue;                                          		// 0x0010 (0x0010) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FSettingsPair                            Pair;                                             		// 0x0020 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineJobSaveSettings.SaveSettingsCallback
// [0x00120000] 
struct USFXOnlineJobSaveSettings_execSaveSettingsCallback_Parms
{
	unsigned char                                      errorCode;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                InJobId;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InCallbackArg;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineJobSendMessage.GetFriendsList
// [0x00422400] ( FUNC_Native )
struct USFXOnlineJobSendMessage_execGetFriendsList_Parms
{
	struct TArray<struct FString>                      friendsPersonaNames;                              		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineJobSendMessage.CreateSendMessageToAllFriendsJob
// [0x00026802] ( FUNC_Event )
struct USFXOnlineJobSendMessage_eventCreateSendMessageToAllFriendsJob_Parms
{
	unsigned char                                      InMessageType;                                    		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FString>                      Params;                                           		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobSendMessage*                    ReturnValue;                                      		// 0x0014 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct TArray<struct FString>                   friendsPersonaNames;                              		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineJobSendMessage.CreateSendMessageJob
// [0x00026802] ( FUNC_Event )
struct USFXOnlineJobSendMessage_eventCreateSendMessageJob_Parms
{
	struct TArray<struct FString>                      InSendToPersonaNames;                             		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      InMessageType;                                    		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FString>                      Params;                                           		// 0x0014 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class USFXOnlineJobSendMessage*                    ReturnValue;                                      		// 0x0024 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXOnlineJobSendMessage*                 Job;                                              		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineJobSendMessage.DoExecute
// [0x00020400] ( FUNC_Native )
struct USFXOnlineJobSendMessage_execDoExecute_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.Flush
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execFlush_Parms
{
	unsigned char                                      Channel;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentTelemetrySystem_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.RegisterConnectionDelegates
// [0x00020003] ( FUNC_Final )
struct USFXOnlineComponentTelemetrySystem_execRegisterConnectionDelegates_Parms
{
	struct FScriptDelegate                             CollectDelegate;                                  		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             AuthenticateDelegate;                             		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             DisconnectDelegate;                               		// 0x0020 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnDisconnect
// [0x00120000] 
struct USFXOnlineComponentTelemetrySystem_execOnDisconnect_Parms
{
	int                                                Error;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     SessionId;                                        		// 0x0004 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.OnAuthenticate
// [0x00120000] 
struct USFXOnlineComponentTelemetrySystem_execOnAuthenticate_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentTelemetrySystem.CanCollect
// [0x00120000] 
struct USFXOnlineComponentTelemetrySystem_execCanCollect_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.METR_UpdateDLCEntitlements
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execMETR_UpdateDLCEntitlements_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.DecryptOfflineEntitlementInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execDecryptOfflineEntitlementInfo_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.StoreOfflineEntitlementInfo
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execStoreOfflineEntitlementInfo_Parms
{
	struct FString                                     a_sEncryptedContent;                              		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.DumpTestData
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execDumpTestData_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.NucleusEntitlementsRefreshOffline
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execNucleusEntitlementsRefreshOffline_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.LoadDimeConfig
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execLoadDimeConfig_Parms
{
	struct FString                                     sConfig;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             dCallback;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnDimeConfigLoaded
// [0x00120000] 
struct USFXOnlineComponentCommerce_execOnDimeConfigLoaded_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.GetWalletBalance
// [0x00020002] 
struct USFXOnlineComponentCommerce_execGetWalletBalance_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.FetchOfferDetails
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execFetchOfferDetails_Parms
{
	struct TArray<struct FBWOfferId>                   aOffers;                                          		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FScriptDelegate                             dCallback;                                        		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnFetchOfferDetailsComplete
// [0x00120000] 
struct USFXOnlineComponentCommerce_execOnFetchOfferDetailsComplete_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.GetOffersList
// [0x00424802] ( FUNC_Event )
struct USFXOnlineComponentCommerce_eventGetOffersList_Parms
{
	struct TArray<struct FBWOfferInfo>                 aOffers;                                          		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct TArray<struct FBWOfferId>                   aOfferFilter;                                     		// 0x0010 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x0020 (0x0004) [0x0000000000000000]              
	// int                                             Jdx;                                              		// 0x0024 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bFound;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.Display1stPartyStore
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execDisplay1stPartyStore_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.PurchaseOfferId
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execPurchaseOfferId_Parms
{
	struct FBWOfferId                                  Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dCallback;                                        		// 0x0004 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnPurchaseOfferIdResult
// [0x00120000] 
struct USFXOnlineComponentCommerce_execOnPurchaseOfferIdResult_Parms
{
	int                                                nResult;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnCodeRedeemed
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execOnCodeRedeemed_Parms
{
	unsigned char                                      nResult;                                          		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.SubmitRedeemCode
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execSubmitRedeemCode_Parms
{
	unsigned long                                      bContinue;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     strCode;                                          		// 0x0004 (0x0010) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.PromptRedeemCode
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execPromptRedeemCode_Parms
{
	struct FScriptDelegate                             dCallback;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnPromptRedeemCodeResult
// [0x00120000] 
struct USFXOnlineComponentCommerce_execOnPromptRedeemCodeResult_Parms
{
	int                                                nResult;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.CompleteProcessAutoGrant
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execCompleteProcessAutoGrant_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.ProcessNextAutoGrant
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execProcessNextAutoGrant_Parms
{
	struct FBWEntitlementId                            Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nResult;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.ProcessAutoGrants
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execProcessAutoGrants_Parms
{
	struct FScriptDelegate                             dCallback;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnProcessAutoGrantsComplete
// [0x00120000] 
struct USFXOnlineComponentCommerce_execOnProcessAutoGrantsComplete_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.GrantEntitlementId
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execGrantEntitlementId_Parms
{
	struct FBWEntitlementId                            Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             dCallback;                                        		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bUseNucleusCheck;                                 		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnGrantEntitlementResult
// [0x00120000] 
struct USFXOnlineComponentCommerce_execOnGrantEntitlementResult_Parms
{
	struct FBWEntitlementId                            Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nResult;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.ConsumeId
// [0x00024400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execConsumeId_Parms
{
	struct FBWConsumableId                             Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCopies;                                          		// 0x0004 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FScriptDelegate                             dCallback;                                        		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnConsumeResult
// [0x00120000] 
struct USFXOnlineComponentCommerce_execOnConsumeResult_Parms
{
	struct FBWConsumableId                             Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nCopies;                                          		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                nResult;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.GetConsumableInfo
// [0x00420802] ( FUNC_Event )
struct USFXOnlineComponentCommerce_eventGetConsumableInfo_Parms
{
	struct FBWConsumableId                             Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBWConsumableInfo                           oConsumable;                                      		// 0x0004 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.GetConsumablesList
// [0x00420802] ( FUNC_Event )
struct USFXOnlineComponentCommerce_eventGetConsumablesList_Parms
{
	struct TArray<struct FBWConsumableInfo>            aConsumables;                                     		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.GetEntitlementInfo
// [0x00420802] ( FUNC_Event )
struct USFXOnlineComponentCommerce_eventGetEntitlementInfo_Parms
{
	struct FBWEntitlementId                            Id;                                               		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FBWEntitlementInfo                          oEntitlement;                                     		// 0x0004 (0x0014) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.GetEntitlementsList
// [0x00420802] ( FUNC_Event )
struct USFXOnlineComponentCommerce_eventGetEntitlementsList_Parms
{
	struct TArray<struct FBWEntitlementInfo>           aEntitlements;                                    		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.RefreshDigitalRights
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execRefreshDigitalRights_Parms
{
	struct FScriptDelegate                             dCallback;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnRefreshDigitalRightsResult
// [0x00120000] 
struct USFXOnlineComponentCommerce_execOnRefreshDigitalRightsResult_Parms
{
	int                                                nResult;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnTick
// [0x00040401] ( FUNC_Final | FUNC_Native )
struct USFXOnlineComponentCommerce_execOnTick_Parms
{
	class USFXOnlineEvent*                             oEvent;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.GetAPIName
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execGetAPIName_Parms
{
	struct FName                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnRelease
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execOnRelease_Parms
{
};

// Function SFXOnlineFoundation.SFXOnlineComponentCommerce.OnInitialize
// [0x00020400] ( FUNC_Native )
struct USFXOnlineComponentCommerce_execOnInitialize_Parms
{
	class USFXOnlineSubsystem*                         oOnlineSubsystem;                                 		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif