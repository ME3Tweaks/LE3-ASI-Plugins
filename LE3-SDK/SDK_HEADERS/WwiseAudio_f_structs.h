/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: WwiseAudio_f_structs.h
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

// Function WwiseAudio.SeqAct_WwiseMusicVolumeDisable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_WwiseMusicVolumeDisable_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.SeqAct_WwiseMusicVolumeEnable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_WwiseMusicVolumeEnable_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.SeqAct_WwisePostEvent.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USeqAct_WwisePostEvent_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAmbientSound.HideEmitter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAmbientSound_execHideEmitter_Parms
{
};

// Function WwiseAudio.WwiseAmbientSound.DrawEmitter
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAmbientSound_execDrawEmitter_Parms
{
};

// Function WwiseAudio.WwiseAudioComponent.SetLocation
// [0x00020103] ( FUNC_Final )
struct UWwiseAudioComponent_execSetLocation_Parms
{
	struct FVector                                     NewLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioComponent.SetDrawMic
// [0x00022400] ( FUNC_Native )
struct UWwiseAudioComponent_execSetDrawMic_Parms
{
	unsigned long                                      bDraw;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioComponent.KillSound
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execKillSound_Parms
{
	class UWwiseEvent*                                 Event;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.Set3D
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execSet3D_Parms
{
};

// Function WwiseAudio.WwiseAudioComponent.Set2D
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execSet2D_Parms
{
};

// Function WwiseAudio.WwiseAudioComponent.RegisterGameObject
// [0x00024400] ( FUNC_Native )
struct UWwiseAudioComponent_execRegisterGameObject_Parms
{
	struct FString                                     GameObjectName;                                   		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.UnregisterGameObject
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponent_execUnregisterGameObject_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.GetDistanceToListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execGetDistanceToListener_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetObstructionOcclusionEnabled_Parms
{
	unsigned long                                      i_bValue;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioComponent.SetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetEnvironmentalAudioEnabled_Parms
{
	unsigned long                                      i_bValue;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioComponent.GetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execGetObstructionOcclusionEnabled_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.GetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execGetEnvironmentalAudioEnabled_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.GetMicPosition
// [0x00022400] ( FUNC_Native )
struct UWwiseAudioComponent_execGetMicPosition_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetGlobalRTPCFromScript
// [0x00022400] ( FUNC_Native )
struct UWwiseAudioComponent_execSetGlobalRTPCFromScript_Parms
{
	struct FString                                     in_pszRtpcName;                                   		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              in_value;                                         		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.StaticPostGlobalEventFromScript
// [0x00022400] ( FUNC_Native )
struct UWwiseAudioComponent_execStaticPostGlobalEventFromScript_Parms
{
	struct FName                                       GlobalEventName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.CreateComponentFromScript
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execCreateComponentFromScript_Parms
{
	class AActor*                                      pActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Label;                                            		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FName                                       ComponentGroup;                                   		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FName                                       AttachBone;                                       		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bRegister;                                        		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class UWwiseAudioComponent*                        ReturnValue;                                      		// 0x002C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
};

// Function WwiseAudio.WwiseAudioComponent.IsEventPlaying
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execIsEventPlaying_Parms
{
	int                                                WwisePlayingID;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.IsPlaying
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execIsPlaying_Parms
{
	class UWwiseBaseSoundObject*                       Event;                                            		// 0x0000 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.PostGlobalEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execPostGlobalEvent_Parms
{
	struct FName                                       GlobalEventName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseTrigger
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseTrigger_Parms
{
	struct FString                                     sTrigger;                                         		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseSwitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseSwitch_Parms
{
	struct FString                                     sGroup;                                           		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     sState;                                           		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPCs
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseRTPCs_Parms
{
	struct TArray<struct FString>                      sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct TArray<float>                               fValue;                                           		// 0x0010 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPC
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetWwiseRTPC_Parms
{
	struct FString                                     sName;                                            		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	float                                              fValue;                                           		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execStop_Parms
{
	class UWwiseBaseSoundObject*                       Base;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.StopWwiseEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execStopWwiseEvent_Parms
{
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.Play
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execPlay_Parms
{
	class UWwiseBaseSoundObject*                       Base;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTrackPosition;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.PlayWwiseEvent
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execPlayWwiseEvent_Parms
{
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x0000 (0x0010) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bTrackPosition;                                   		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SoundPositionByID
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSoundPositionByID_Parms
{
	int                                                WwisePlayingID;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SoundPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSoundPosition_Parms
{
	class UWwiseBaseSoundObject*                       Base;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.StopAll
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execStopAll_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.FindPlayingID
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execFindPlayingID_Parms
{
	class UWwiseBaseSoundObject*                       BaseSound;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UWwiseEvent*                                 StopEvent;                                        		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseAudioComponent.SetRTPCWithHandler
// [0x00422401] ( FUNC_Final | FUNC_Native )
struct UWwiseAudioComponent_execSetRTPCWithHandler_Parms
{
	struct FWwiseRTPCForActorHandler                   RTPCHandler;                                      		// 0x0000 (0x001C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	float                                              fValue;                                           		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioComponentMultiLoc.Set3D
// [0x00020400] ( FUNC_Native )
struct UWwiseAudioComponentMultiLoc_execSet3D_Parms
{
};

// Function WwiseAudio.WwiseMicPosOrient.GetUpVector
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetUpVector_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseMicPosOrient.GetFrontVector
// [0x00020400] ( FUNC_Native )
struct AWwiseMicPosOrient_execGetFrontVector_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseProcFoleyComponent.GetMAX_PROC_FOLEY_BONES
// [0x00020802] ( FUNC_Event )
struct UWwiseProcFoleyComponent_eventGetMAX_PROC_FOLEY_BONES_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseVolume.TimerPop
// [0x00020000] 
struct AWwiseVolume_execTimerPop_Parms
{
	class AWwiseVolumeTimer*                           T;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseVolume.PostBeginPlay
// [0x00020002] 
struct AWwiseVolume_execPostBeginPlay_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.HideVolume
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execHideVolume_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.DrawVolume
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execDrawVolume_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execStop_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.Start
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execStart_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseAudioVolume_execmyTimerPop_Parms
{
};

// Function WwiseAudio.WwiseAudioVolume.TimerPop
// [0x00020002] 
struct AWwiseAudioVolume_execTimerPop_Parms
{
	class AWwiseVolumeTimer*                           T;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseAudioVolume.PostBeginPlay
// [0x00020002] 
struct AWwiseAudioVolume_execPostBeginPlay_Parms
{
};

// Function WwiseAudio.WwiseMusicVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execmyTimerPop_Parms
{
};

// Function WwiseAudio.WwiseMusicVolume.SetContainsPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execSetContainsPlayer_Parms
{
	unsigned long                                      bContainsPlayer;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseMusicVolume.SetEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execSetEnabled_Parms
{
	unsigned long                                      bEnabled;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseMusicVolume.StopMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execStopMusic_Parms
{
};

// Function WwiseAudio.WwiseMusicVolume.StartMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execStartMusic_Parms
{
};

// Function WwiseAudio.WwiseMusicVolume.CheckPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AWwiseMusicVolume_execCheckPriority_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function WwiseAudio.WwiseMusicVolume.TimerPop
// [0x00020002] 
struct AWwiseMusicVolume_execTimerPop_Parms
{
	class AWwiseVolumeTimer*                           T;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function WwiseAudio.WwiseMusicVolume.PostBeginPlay
// [0x00020002] 
struct AWwiseMusicVolume_execPostBeginPlay_Parms
{
};

// Function WwiseAudio.WwiseVolumeTimer.Timer
// [0x00020002] 
struct AWwiseVolumeTimer_execTimer_Parms
{
};

// Function WwiseAudio.WwiseDistanceRTPC.Tick
// [0x00020002] 
struct AWwiseDistanceRTPC_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// float                                           DistanceFromListener;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FVector                                  Distance;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  MicPosition;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif