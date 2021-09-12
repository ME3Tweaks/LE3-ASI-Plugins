/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: WwiseAudio_classes.h
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
# Constants
# ========================================================================================= #
*/

#define CONST_AUDIO_DISTANCE_FACTOR                              0.01
#define CONST_MAX_PROC_FOLEY_BONES                               4

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum WwiseAudio.WwiseEvent.WwiseEventPrepareState
/*enum WwiseEventPrepareState
{
	WwiseEvent_Unprepared                              = 0,
	WwiseEvent_Preparing                               = 1,
	WwiseEvent_PrepareSuccess                          = 2,
	WwiseEvent_PrepareFailed                           = 3,
	WwiseEvent_UnPrepareFailed                         = 4,
	WwiseEvent_MAX                                     = 5
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class WwiseAudio.ActorFactoryWwiseAmbientSound
// 0x0000 (0x008C - 0x008C)
class UActorFactoryWwiseAmbientSound : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.AnimNotify_WwiseEvent
// 0x001C (0x007C - 0x0060)
class UAnimNotify_WwiseEvent : public UAnimNotify
{
public:
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x0060 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       BoneName;                                         		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFollowActor : 1;                                 		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.InterpTrackInstWwiseEvent
// 0x0004 (0x0064 - 0x0060)
class UInterpTrackInstWwiseEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x0060 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.InterpTrackInstWwiseRTPC
// 0x001C (0x007C - 0x0060)
class UInterpTrackInstWwiseRTPC : public UInterpTrackInst
{
public:
	struct FWwiseRTPCForActorHandler                   m_RTPCHandler;                                    		// 0x0060 (0x001C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.InterpTrackWwiseEvent
// 0x0014 (0x00A4 - 0x0090)
class UInterpTrackWwiseEvent : public UInterpTrack
{
public:
	struct TArray<struct FWwiseEventTrackKey>          WwiseEvents;                                      		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      m_bRequiresPreload : 1;                           		// 0x00A0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.InterpTrackWwiseSoundEffect
// 0x0008 (0x00AC - 0x00A4)
class UInterpTrackWwiseSoundEffect : public UInterpTrackWwiseEvent
{
public:
	class UWwiseAudioComponent*                        m_pComponent;                                     		// 0x00A4 (0x0008) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.InterpTrackWwiseRTPC
// 0x0010 (0x00B8 - 0x00A8)
class UInterpTrackWwiseRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                            		// 0x00A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.SeqAct_WwiseLockMic
// 0x0000 (0x00F8 - 0x00F8)
class USeqAct_WwiseLockMic : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.SeqAct_WwiseMusicVolumeDisable
// 0x0008 (0x0100 - 0x00F8)
class USeqAct_WwiseMusicVolumeDisable : public USequenceAction
{
public:
	class AWwiseMusicVolume*                           m_MusicVolume;                                    		// 0x00F8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
};

// Class WwiseAudio.SeqAct_WwiseMusicVolumeEnable
// 0x0008 (0x0100 - 0x00F8)
class USeqAct_WwiseMusicVolumeEnable : public USequenceAction
{
public:
	class AWwiseMusicVolume*                           m_MusicVolume;                                    		// 0x00F8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
};

// Class WwiseAudio.SeqAct_WwisePostEvent
// 0x0008 (0x0114 - 0x010C)
class USeqAct_WwisePostEvent : public USeqAct_Latent
{
public:
	class UWwiseBaseSoundObject*                       WwiseObject;                                      		// 0x010C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
};

// Class WwiseAudio.SeqAct_WwisePostTrigger
// 0x0010 (0x0108 - 0x00F8)
class USeqAct_WwisePostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                          		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.SeqAct_WwiseSetRTPCValue
// 0x0028 (0x0134 - 0x010C)
class USeqAct_WwiseSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                            		// 0x010C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FWwiseRTPCForActorHandler>    m_RTPCHandlers;                                   		// 0x011C (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	float                                              Value;                                            		// 0x012C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Running : 1;                                      		// 0x0130 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.SeqAct_WwiseSetState
// 0x0020 (0x0118 - 0x00F8)
class USeqAct_WwiseSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                       		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     State;                                            		// 0x0108 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.SeqAct_WwiseSetSwitch
// 0x0020 (0x0118 - 0x00F8)
class USeqAct_WwiseSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                      		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     Switch;                                           		// 0x0108 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.SeqAct_WwiseStartAudioObjects
// 0x0000 (0x00F8 - 0x00F8)
class USeqAct_WwiseStartAudioObjects : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.SeqAct_WwiseStopAll
// 0x0000 (0x00F8 - 0x00F8)
class USeqAct_WwiseStopAll : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseAmbientSound
// 0x001C (0x028C - 0x0270)
class AWwiseAmbientSound : public AKeypoint
{
public:
	struct FWwiseEventPair                             AudioEvent;                                       		// 0x0270 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseAudioComponent*                        AudioComponent;                                   		// 0x0280 (0x0008) [0x00000000040A200B]              ( CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Transient | CPF_EditConst | CPF_Component | CPF_EditInline )
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0288 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWasPlaying : 1;                                  		// 0x0288 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bIsPlaying : 1;                                   		// 0x0288 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void HideEmitter ( );
	void DrawEmitter ( );
};

// Class WwiseAudio.WwiseAudioComponent
// 0x0106 (0x018C - 0x0086)
class UWwiseAudioComponent : public UActorComponent
{
public:
	struct FDouble                                     m_fLastObstructionUpdate;                         		// 0x0088 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct TArray<struct FWwiseComponentCallbackInfo>  Callbacks;                                        		// 0x0090 (0x0010) [0x0000000000622002]              ( CPF_Const | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink )
	struct FPointer                                    m_pNotifyCriticalSection;                         		// 0x00A0 (0x0008) [0x0000000000203000]              ( CPF_Native | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x00A8 (0x0048) UNKNOWN PROPERTY: MapProperty WwiseAudio.WwiseAudioComponent.WwiseEvents
	struct FVector                                     location;                                         		// 0x00F0 (0x000C) [0x0000000000201000]              ( CPF_Native )
	struct FVector                                     Orientation;                                      		// 0x00FC (0x000C) [0x0000000000201000]              ( CPF_Native )
	struct FVector                                     ComponentLocation;                                		// 0x0108 (0x000C) [0x0000000000201002]              ( CPF_Const | CPF_Native )
	struct FVector                                     ComponentOrientation;                             		// 0x0114 (0x000C) [0x0000000000201002]              ( CPF_Const | CPF_Native )
	struct FVector                                     CachedLastPosition;                               		// 0x0120 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     CachedLastOrientation;                            		// 0x012C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	class USkeletalMeshComponent*                      m_OwnerSkelMeshComponent;                         		// 0x0138 (0x0008) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	struct FName                                       m_ComponentGroup;                                 		// 0x0140 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nAttachBoneIndex;                               		// 0x0148 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Cleaned;                                          		// 0x014C (0x0004) [0x0000000000222002]              ( CPF_Const | CPF_Transient | CPF_EditConst )
	float                                              m_fDistanceToListener;                            		// 0x0150 (0x0004) [0x0000000000201000]              ( CPF_Native )
	float                                              m_fMaxAudible3DSoundDistance;                     		// 0x0154 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nMaxAudible3DSoundEventPlayingID;               		// 0x0158 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOf3DSoundsPlaying;                       		// 0x015C (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOfSoundsUseAttenuation;                  		// 0x0160 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOfSoundsWithUserDefinedPositioning;      		// 0x0164 (0x0004) [0x0000000000201000]              ( CPF_Native )
	int                                                m_nNumberOfEventsUsingOrientationRTPC;            		// 0x0168 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_nNumberOfEventsUsingDistanceRTPC;               		// 0x016C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fDotToListener;                                 		// 0x0170 (0x0004) [0x0000000000201000]              ( CPF_Native )
	float                                              m_fTargetOcclusion;                               		// 0x0174 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fTargetObstruction;                             		// 0x0178 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fCurrentOcclusion;                              		// 0x017C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              m_fCurrentObstruction;                            		// 0x0180 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              ObstructionUpdateSpeed;                           		// 0x0184 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bUseOwnerLocation : 1;                            		// 0x0188 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bEnableEnvAudio : 1;                            		// 0x0188 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      m_bEnableObstructionOcclusion : 1;                		// 0x0188 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      m_bIsRegistered : 1;                              		// 0x0188 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      m_b3D : 1;                                        		// 0x0188 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void SetLocation ( struct FVector NewLocation );
	void SetDrawMic ( unsigned long bDraw );
	bool KillSound ( class UWwiseEvent* Event );
	void Set3D ( );
	void Set2D ( );
	bool RegisterGameObject ( struct FString GameObjectName );
	bool UnregisterGameObject ( );
	float GetDistanceToListener ( );
	void SetObstructionOcclusionEnabled ( unsigned long i_bValue );
	void SetEnvironmentalAudioEnabled ( unsigned long i_bValue );
	bool GetObstructionOcclusionEnabled ( );
	bool GetEnvironmentalAudioEnabled ( );
	struct FVector GetMicPosition ( );
	bool SetGlobalRTPCFromScript ( struct FString in_pszRtpcName, float in_value );
	bool StaticPostGlobalEventFromScript ( struct FName GlobalEventName );
	class UWwiseAudioComponent* CreateComponentFromScript ( class AActor* pActor, struct FString Label, struct FName ComponentGroup, struct FName AttachBone, unsigned long bRegister );
	bool IsEventPlaying ( int WwisePlayingID );
	bool IsPlaying ( class UWwiseBaseSoundObject* Event );
	bool PostGlobalEvent ( struct FName GlobalEventName );
	bool SetWwiseTrigger ( struct FString sTrigger );
	bool SetWwiseSwitch ( struct FString sGroup, struct FString sState );
	bool SetWwiseRTPCs ( struct TArray<struct FString> sName, struct TArray<float> fValue );
	bool SetWwiseRTPC ( struct FString sName, float fValue );
	bool Stop ( class UWwiseBaseSoundObject* Base );
	bool StopWwiseEvent ( struct FWwiseEventPair AudioEvent );
	bool Play ( class UWwiseBaseSoundObject* Base, unsigned long bTrackPosition );
	bool PlayWwiseEvent ( struct FWwiseEventPair AudioEvent, unsigned long bTrackPosition );
	float SoundPositionByID ( int WwisePlayingID );
	float SoundPosition ( class UWwiseBaseSoundObject* Base );
	bool StopAll ( );
	int FindPlayingID ( class UWwiseBaseSoundObject* BaseSound, class UWwiseEvent* StopEvent );
	void SetRTPCWithHandler ( float fValue, struct FWwiseRTPCForActorHandler* RTPCHandler );
};

// Class WwiseAudio.WwiseAudioComponentMultiLoc
// 0x0058 (0x01E4 - 0x018C)
class UWwiseAudioComponentMultiLoc : public UWwiseAudioComponent
{
public:
	struct FMap_Mirror                                 m_Locations;                                      		// 0x018C (0x0048) [0x0000000000001000]              ( CPF_Native )
	struct FVector                                     CachedMicPos;                                     		// 0x01D4 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      IsDirty : 1;                                      		// 0x01E0 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Set3D ( );
};

// Class WwiseAudio.WwiseAudioDevice
// 0x01AB (0x04E0 - 0x0335)
class UWwiseAudioDevice : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[ 0x1AB ];                           		// 0x0335 (0x01AB) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseBundleArchive
// 0x0000 (0x0060 - 0x0060)
class UWwiseBundleArchive : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseComponentCallback
// 0x0000 (0x0060 - 0x0060)
class UWwiseComponentCallback : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseEnvironmentSettings
// 0x002C (0x008C - 0x0060)
class UWwiseEnvironmentSettings : public UObject
{
public:
	struct FString                                     Environment;                                      		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UWwiseBank*                                  ConvolutionReverbSoundBank;                       		// 0x0070 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                Id;                                               		// 0x0078 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              fPrimaryControlValue;                             		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fOverrideControlValue;                            		// 0x0080 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CurrentEnvironment;                               		// 0x0084 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIdResolved : 1;                                  		// 0x0088 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bOverrideLowerPriorityEnvironments : 1;           		// 0x0088 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseEnvironmentVolume
// 0x000C (0x02C0 - 0x02B4)
class AWwiseEnvironmentVolume : public AVolume
{
public:
	class UWwiseEnvironmentSettings*                   Settings;                                         		// 0x02B4 (0x0008) [0x0000000004420009]              ( CPF_Edit | CPF_ExportObject | CPF_EditConst | CPF_NeedCtorLink | CPF_EditInline )
	float                                              Priority;                                         		// 0x02BC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseEvent
// 0x0048 (0x00A8 - 0x0060)
class UWwiseEvent : public UWwiseBaseSoundObject
{
public:
	struct FWwiseRelationships                         Relationships;                                    		// 0x0060 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Notes;                                            		// 0x0078 (0x0010) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0088 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	float                                              DurationSeconds;                                  		// 0x008C (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	int                                                PrepareState;                                     		// 0x0090 (0x0004) [0x0000000000022003]              ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst )
	float                                              m_fMaxAudible3DSoundDistance;                     		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_nNumberOf3DSoundsPlaying;                       		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_nNumberOfSoundsUseAttenuation;                  		// 0x009C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                m_nNumberOfSoundsWithUserDefinedPositioning;      		// 0x00A0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      IsLocalised : 1;                                  		// 0x00A4 (0x0004) [0x0000000000020003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      bIsSetup : 1;                                     		// 0x00A4 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bUsesOrientationRTPC : 1;                         		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bUsesDistanceRTPC : 1;                            		// 0x00A4 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      m_bHasEnvironmentalSettings : 1;                  		// 0x00A4 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseDialogueEvent
// 0x0010 (0x00B8 - 0x00A8)
class UWwiseDialogueEvent : public UWwiseEvent
{
public:
	struct TArray<struct FWwiseDialogueArgument>       Arguments;                                        		// 0x00A8 (0x0010) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseEventPairObject
// 0x0010 (0x0070 - 0x0060)
class UWwiseEventPairObject : public UWwiseBaseSoundObject
{
public:
	class UWwiseEvent*                                 Play;                                             		// 0x0060 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 Stop;                                             		// 0x0068 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseFaceFXStopper
// 0x0020 (0x0080 - 0x0060)
class UWwiseFaceFXStopper : public UObject
{
public:
	struct FPointer                                    VfTable_IWwiseComponentCallback;                  		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class USkeletalMeshComponent*                      m_SkelMeshComp;                                   		// 0x0068 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWwiseAudioComponent*                        m_WwiseAudioComp;                                 		// 0x0070 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWwiseEvent*                                 m_WwiseAudioEvent;                                		// 0x0078 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseFile
// 0x0010 (0x0070 - 0x0060)
class UWwiseFile : public UObject
{
public:
	struct FPointer                                    Data;                                             		// 0x0060 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                Id;                                               		// 0x0068 (0x0004) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      IsRegistered : 1;                                 		// 0x006C (0x0004) [0x0000000000022003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseBank
// 0x0024 (0x0094 - 0x0070)
class UWwiseBank : public UWwiseFile
{
public:
	struct TArray<struct FPointer>                     Children;                                         		// 0x0070 (0x0010) [0x0000000000023002]              ( CPF_Const | CPF_Native | CPF_Transient | CPF_EditConst )
	struct FPointer                                    Bundle;                                           		// 0x0080 (0x0008) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	class UWwiseBank*                                  Parent;                                           		// 0x0088 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      IsLocalised : 1;                                  		// 0x0090 (0x0004) [0x0000000000020003] [0x00000001] ( CPF_Edit | CPF_Const | CPF_EditConst )
	unsigned long                                      IsLoaded : 1;                                     		// 0x0090 (0x0004) [0x0000000000022003] [0x00000002] ( CPF_Edit | CPF_Const | CPF_Transient | CPF_EditConst )
	unsigned long                                      GenerateDefinition : 1;                           		// 0x0090 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseStream
// 0x0010 (0x0080 - 0x0070)
class UWwiseStream : public UWwiseFile
{
public:
	struct FName                                       Filename;                                         		// 0x0070 (0x0008) [0x0000000000000002]              ( CPF_Const )
	class UWwiseBank*                                  Bank;                                             		// 0x0078 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseMicPosOrient
// 0x0002 (0x0270 - 0x026E)
class AWwiseMicPosOrient : public AActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FVector GetUpVector ( );
	struct FVector GetFrontVector ( );
};

// Class WwiseAudio.WwiseProcFoleyComponent
// 0x0076 (0x00FC - 0x0086)
class UWwiseProcFoleyComponent : public UActorComponent
{
public:
	struct FProcFoleyInfo                              Info[ 0x4 ];                                      		// 0x0088 (0x0050) [0x0000000000000000]              
	class UWwiseAudioComponent*                        m_AudioComp;                                      		// 0x00D8 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UWwiseEventPairObject*                       m_FoleySound;                                     		// 0x00E0 (0x0008) [0x0000000000000000]              
	float                                              m_fLastMaxVel;                                    		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              m_fSmoothFactor;                                  		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              m_fMaxThreshold;                                  		// 0x00F0 (0x0004) [0x0000000000000000]              
	int                                                m_nProcFoleyRTPCId;                               		// 0x00F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsPlaying : 1;                                 		// 0x00F8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetMAX_PROC_FOLEY_BONES ( );
};

// Class WwiseAudio.WwiseVolume
// 0x0008 (0x02BC - 0x02B4)
class AWwiseVolume : public AVolume
{
public:
	class AWwiseVolumeTimer*                           m_oTrackTimer;                                    		// 0x02B4 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void TimerPop ( class AWwiseVolumeTimer* T );
	void PostBeginPlay ( );
};

// Class WwiseAudio.WwiseAudioVolume
// 0x0028 (0x02E4 - 0x02BC)
class AWwiseAudioVolume : public AWwiseVolume
{
public:
	struct FDouble                                     m_fLastLineCheckTime;                             		// 0x02BC (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct TArray<struct FWwiseEventPair>              WwiseEventArray;                                  		// 0x02C4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UWwiseAudioComponentMultiLoc*                AudioComponent;                                   		// 0x02D4 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	float                                              m_fTimeBetweenLineChecks;                         		// 0x02DC (0x0004) [0x0000000000000000]              
	unsigned long                                      bAutoPlay : 1;                                    		// 0x02E0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWasPlaying : 1;                                  		// 0x02E0 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      DrawSoundLocations : 1;                           		// 0x02E0 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      m_bIs2D : 1;                                      		// 0x02E0 (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void HideVolume ( );
	void DrawVolume ( );
	void Stop ( );
	void Start ( );
	void myTimerPop ( );
	void TimerPop ( class AWwiseVolumeTimer* T );
	void PostBeginPlay ( );
};

// Class WwiseAudio.WwiseMusicVolume
// 0x002C (0x02E8 - 0x02BC)
class AWwiseMusicVolume : public AWwiseVolume
{
public:
	struct FName                                       MusicID;                                          		// 0x02BC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseAudioComponent*                        m_pWwiseComponent;                                		// 0x02C4 (0x0008) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	class APawn*                                       m_oTrackPawn;                                     		// 0x02CC (0x0008) [0x0000000000000000]              
	class UWwiseEventPairObject*                       m_pMusicEventPair;                                		// 0x02D4 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	int                                                MusicPriority;                                    		// 0x02DC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                m_nCurrentMusicState;                             		// 0x02E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      InitiallyEnabled : 1;                             		// 0x02E4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      m_bContainsPawn : 1;                              		// 0x02E4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bMyMusicIsPlaying : 1;                          		// 0x02E4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bEnabled : 1;                                   		// 0x02E4 (0x0004) [0x0000000000000000] [0x00000008] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void myTimerPop ( );
	void SetContainsPlayer ( unsigned long bContainsPlayer );
	void SetEnabled ( unsigned long bEnabled );
	void StopMusic ( );
	void StartMusic ( );
	bool CheckPriority ( );
	void TimerPop ( class AWwiseVolumeTimer* T );
	void PostBeginPlay ( );
};

// Class WwiseAudio.WwiseVolumeTimer
// 0x0008 (0x0278 - 0x0270)
class AWwiseVolumeTimer : public AInfo
{
public:
	class AWwiseVolume*                                m_oVolume;                                        		// 0x0270 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Timer ( );
};

// Class WwiseAudio.ActorFactoryWwiseDistanceRTPC
// 0x0000 (0x008C - 0x008C)
class UActorFactoryWwiseDistanceRTPC : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseDistanceRTPC
// 0x001A (0x0288 - 0x026E)
class AWwiseDistanceRTPC : public AActor
{
public:
	struct FString                                     RTPCName;                                         		// 0x0270 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              TickDelay;                                        		// 0x0280 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fTimeSinceLastUpdate;                           		// 0x0284 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Tick ( float DeltaTime );
};

// Class WwiseAudio.ActorFactoryWwiseMicPosOrient
// 0x0000 (0x008C - 0x008C)
class UActorFactoryWwiseMicPosOrient : public UActorFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseCollection
// 0x0038 (0x0098 - 0x0060)
class UWwiseCollection : public UObject
{
public:
	struct TArray<class UWwiseEvent*>                  Events;                                           		// 0x0060 (0x0010) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct TArray<class UWwiseEventPairObject*>        EventPairs;                                       		// 0x0070 (0x0010) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	struct TArray<class UWwiseStream*>                 Streams;                                          		// 0x0080 (0x0010) [0x0000000000420003]              ( CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink )
	class UWwiseBank*                                  Bank;                                             		// 0x0090 (0x0008) [0x0000000000020003]              ( CPF_Edit | CPF_Const | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class WwiseAudio.WwiseOcclusionVolume
// 0x0000 (0x02B4 - 0x02B4)
class AWwiseOcclusionVolume : public AVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif