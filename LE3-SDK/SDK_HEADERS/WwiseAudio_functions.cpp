/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: WwiseAudio_functions.cpp
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/


#pragma once
#include <Windows.h>
#include <cstdio>
#include "../SdkHeaders.h"



#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/



class UClass* UActorFactoryWwiseAmbientSound::pClassPointer = NULL;

class UClass* UActorFactoryWwiseAmbientSound::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.ActorFactoryWwiseAmbientSound" );

		return pClassPointer;
	};



class UClass* UAnimNotify_WwiseEvent::pClassPointer = NULL;

class UClass* UAnimNotify_WwiseEvent::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.AnimNotify_WwiseEvent" );

		return pClassPointer;
	};



class UClass* UInterpTrackInstWwiseEvent::pClassPointer = NULL;

class UClass* UInterpTrackInstWwiseEvent::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.InterpTrackInstWwiseEvent" );

		return pClassPointer;
	};



class UClass* UInterpTrackInstWwiseRTPC::pClassPointer = NULL;

class UClass* UInterpTrackInstWwiseRTPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.InterpTrackInstWwiseRTPC" );

		return pClassPointer;
	};



class UClass* UInterpTrackWwiseEvent::pClassPointer = NULL;

class UClass* UInterpTrackWwiseEvent::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.InterpTrackWwiseEvent" );

		return pClassPointer;
	};



class UClass* UInterpTrackWwiseSoundEffect::pClassPointer = NULL;

class UClass* UInterpTrackWwiseSoundEffect::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.InterpTrackWwiseSoundEffect" );

		return pClassPointer;
	};



class UClass* UInterpTrackWwiseRTPC::pClassPointer = NULL;

class UClass* UInterpTrackWwiseRTPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.InterpTrackWwiseRTPC" );

		return pClassPointer;
	};



class UClass* USeqAct_WwiseLockMic::pClassPointer = NULL;

class UClass* USeqAct_WwiseLockMic::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.SeqAct_WwiseLockMic" );

		return pClassPointer;
	};



class UClass* USeqAct_WwiseMusicVolumeDisable::pClassPointer = NULL;

class UClass* USeqAct_WwiseMusicVolumeDisable::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.SeqAct_WwiseMusicVolumeDisable" );

		return pClassPointer;
	};

// Function WwiseAudio.SeqAct_WwiseMusicVolumeDisable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_WwiseMusicVolumeDisable::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( "Function WwiseAudio.SeqAct_WwiseMusicVolumeDisable.GetObjClassVersion" );

	USeqAct_WwiseMusicVolumeDisable_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};



class UClass* USeqAct_WwiseMusicVolumeEnable::pClassPointer = NULL;

class UClass* USeqAct_WwiseMusicVolumeEnable::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.SeqAct_WwiseMusicVolumeEnable" );

		return pClassPointer;
	};

// Function WwiseAudio.SeqAct_WwiseMusicVolumeEnable.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_WwiseMusicVolumeEnable::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( "Function WwiseAudio.SeqAct_WwiseMusicVolumeEnable.GetObjClassVersion" );

	USeqAct_WwiseMusicVolumeEnable_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};



class UClass* USeqAct_WwisePostEvent::pClassPointer = NULL;

class UClass* USeqAct_WwisePostEvent::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.SeqAct_WwisePostEvent" );

		return pClassPointer;
	};

// Function WwiseAudio.SeqAct_WwisePostEvent.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int USeqAct_WwisePostEvent::eventGetObjClassVersion ( )
{
	static UFunction* pFnGetObjClassVersion = NULL;

	if ( ! pFnGetObjClassVersion )
		pFnGetObjClassVersion = UObject::FindObject< UFunction > ( "Function WwiseAudio.SeqAct_WwisePostEvent.GetObjClassVersion" );

	USeqAct_WwisePostEvent_eventGetObjClassVersion_Parms GetObjClassVersion_Parms;

	this->ProcessEvent ( pFnGetObjClassVersion, &GetObjClassVersion_Parms, NULL );

	return GetObjClassVersion_Parms.ReturnValue;
};



class UClass* USeqAct_WwisePostTrigger::pClassPointer = NULL;

class UClass* USeqAct_WwisePostTrigger::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.SeqAct_WwisePostTrigger" );

		return pClassPointer;
	};



class UClass* USeqAct_WwiseSetRTPCValue::pClassPointer = NULL;

class UClass* USeqAct_WwiseSetRTPCValue::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.SeqAct_WwiseSetRTPCValue" );

		return pClassPointer;
	};



class UClass* USeqAct_WwiseSetState::pClassPointer = NULL;

class UClass* USeqAct_WwiseSetState::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.SeqAct_WwiseSetState" );

		return pClassPointer;
	};



class UClass* USeqAct_WwiseSetSwitch::pClassPointer = NULL;

class UClass* USeqAct_WwiseSetSwitch::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.SeqAct_WwiseSetSwitch" );

		return pClassPointer;
	};



class UClass* USeqAct_WwiseStartAudioObjects::pClassPointer = NULL;

class UClass* USeqAct_WwiseStartAudioObjects::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.SeqAct_WwiseStartAudioObjects" );

		return pClassPointer;
	};



class UClass* USeqAct_WwiseStopAll::pClassPointer = NULL;

class UClass* USeqAct_WwiseStopAll::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.SeqAct_WwiseStopAll" );

		return pClassPointer;
	};



class UClass* AWwiseAmbientSound::pClassPointer = NULL;

class UClass* AWwiseAmbientSound::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseAmbientSound" );

		return pClassPointer;
	};

// Function WwiseAudio.WwiseAmbientSound.HideEmitter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAmbientSound::HideEmitter ( )
{
	static UFunction* pFnHideEmitter = NULL;

	if ( ! pFnHideEmitter )
		pFnHideEmitter = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAmbientSound.HideEmitter" );

	AWwiseAmbientSound_execHideEmitter_Parms HideEmitter_Parms;

	pFnHideEmitter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHideEmitter, &HideEmitter_Parms, NULL );

	pFnHideEmitter->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAmbientSound.DrawEmitter
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAmbientSound::DrawEmitter ( )
{
	static UFunction* pFnDrawEmitter = NULL;

	if ( ! pFnDrawEmitter )
		pFnDrawEmitter = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAmbientSound.DrawEmitter" );

	AWwiseAmbientSound_execDrawEmitter_Parms DrawEmitter_Parms;

	pFnDrawEmitter->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawEmitter, &DrawEmitter_Parms, NULL );

	pFnDrawEmitter->FunctionFlags |= 0x400;
};



class UClass* UWwiseAudioComponent::pClassPointer = NULL;

class UClass* UWwiseAudioComponent::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseAudioComponent" );

		return pClassPointer;
	};

// Function WwiseAudio.WwiseAudioComponent.SetLocation
// [0x00020103] ( FUNC_Final )
// Parameters infos:
// struct FVector                 NewLocation                    ( CPF_Parm )

void UWwiseAudioComponent::SetLocation ( struct FVector NewLocation )
{
	static UFunction* pFnSetLocation = NULL;

	if ( ! pFnSetLocation )
		pFnSetLocation = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SetLocation" );

	UWwiseAudioComponent_execSetLocation_Parms SetLocation_Parms;
	memcpy ( &SetLocation_Parms.NewLocation, &NewLocation, 0xC );

	this->ProcessEvent ( pFnSetLocation, &SetLocation_Parms, NULL );
};

// Function WwiseAudio.WwiseAudioComponent.SetDrawMic
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bDraw                          ( CPF_Parm )

void UWwiseAudioComponent::SetDrawMic ( unsigned long bDraw )
{
	static UFunction* pFnSetDrawMic = NULL;

	if ( ! pFnSetDrawMic )
		pFnSetDrawMic = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SetDrawMic" );

	UWwiseAudioComponent_execSetDrawMic_Parms SetDrawMic_Parms;
	SetDrawMic_Parms.bDraw = bDraw;

	pFnSetDrawMic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDrawMic, &SetDrawMic_Parms, NULL );

	pFnSetDrawMic->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.KillSound
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseEvent*             Event                          ( CPF_Parm )

bool UWwiseAudioComponent::KillSound ( class UWwiseEvent* Event )
{
	static UFunction* pFnKillSound = NULL;

	if ( ! pFnKillSound )
		pFnKillSound = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.KillSound" );

	UWwiseAudioComponent_execKillSound_Parms KillSound_Parms;
	KillSound_Parms.Event = Event;

	pFnKillSound->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnKillSound, &KillSound_Parms, NULL );

	pFnKillSound->FunctionFlags |= 0x400;

	return KillSound_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.Set3D
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UWwiseAudioComponent::Set3D ( )
{
	static UFunction* pFnSet3D = NULL;

	if ( ! pFnSet3D )
		pFnSet3D = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.Set3D" );

	UWwiseAudioComponent_execSet3D_Parms Set3D_Parms;

	pFnSet3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet3D, &Set3D_Parms, NULL );

	pFnSet3D->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.Set2D
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UWwiseAudioComponent::Set2D ( )
{
	static UFunction* pFnSet2D = NULL;

	if ( ! pFnSet2D )
		pFnSet2D = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.Set2D" );

	UWwiseAudioComponent_execSet2D_Parms Set2D_Parms;

	pFnSet2D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet2D, &Set2D_Parms, NULL );

	pFnSet2D->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.RegisterGameObject
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 GameObjectName                 ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UWwiseAudioComponent::RegisterGameObject ( struct FString GameObjectName )
{
	static UFunction* pFnRegisterGameObject = NULL;

	if ( ! pFnRegisterGameObject )
		pFnRegisterGameObject = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.RegisterGameObject" );

	UWwiseAudioComponent_execRegisterGameObject_Parms RegisterGameObject_Parms;
	memcpy ( &RegisterGameObject_Parms.GameObjectName, &GameObjectName, 0x10 );

	pFnRegisterGameObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterGameObject, &RegisterGameObject_Parms, NULL );

	pFnRegisterGameObject->FunctionFlags |= 0x400;

	return RegisterGameObject_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.UnregisterGameObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::UnregisterGameObject ( )
{
	static UFunction* pFnUnregisterGameObject = NULL;

	if ( ! pFnUnregisterGameObject )
		pFnUnregisterGameObject = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.UnregisterGameObject" );

	UWwiseAudioComponent_execUnregisterGameObject_Parms UnregisterGameObject_Parms;

	pFnUnregisterGameObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterGameObject, &UnregisterGameObject_Parms, NULL );

	pFnUnregisterGameObject->FunctionFlags |= 0x400;

	return UnregisterGameObject_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.GetDistanceToListener
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UWwiseAudioComponent::GetDistanceToListener ( )
{
	static UFunction* pFnGetDistanceToListener = NULL;

	if ( ! pFnGetDistanceToListener )
		pFnGetDistanceToListener = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.GetDistanceToListener" );

	UWwiseAudioComponent_execGetDistanceToListener_Parms GetDistanceToListener_Parms;

	pFnGetDistanceToListener->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDistanceToListener, &GetDistanceToListener_Parms, NULL );

	pFnGetDistanceToListener->FunctionFlags |= 0x400;

	return GetDistanceToListener_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  i_bValue                       ( CPF_Parm )

void UWwiseAudioComponent::SetObstructionOcclusionEnabled ( unsigned long i_bValue )
{
	static UFunction* pFnSetObstructionOcclusionEnabled = NULL;

	if ( ! pFnSetObstructionOcclusionEnabled )
		pFnSetObstructionOcclusionEnabled = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SetObstructionOcclusionEnabled" );

	UWwiseAudioComponent_execSetObstructionOcclusionEnabled_Parms SetObstructionOcclusionEnabled_Parms;
	SetObstructionOcclusionEnabled_Parms.i_bValue = i_bValue;

	pFnSetObstructionOcclusionEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetObstructionOcclusionEnabled, &SetObstructionOcclusionEnabled_Parms, NULL );

	pFnSetObstructionOcclusionEnabled->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.SetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  i_bValue                       ( CPF_Parm )

void UWwiseAudioComponent::SetEnvironmentalAudioEnabled ( unsigned long i_bValue )
{
	static UFunction* pFnSetEnvironmentalAudioEnabled = NULL;

	if ( ! pFnSetEnvironmentalAudioEnabled )
		pFnSetEnvironmentalAudioEnabled = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SetEnvironmentalAudioEnabled" );

	UWwiseAudioComponent_execSetEnvironmentalAudioEnabled_Parms SetEnvironmentalAudioEnabled_Parms;
	SetEnvironmentalAudioEnabled_Parms.i_bValue = i_bValue;

	pFnSetEnvironmentalAudioEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEnvironmentalAudioEnabled, &SetEnvironmentalAudioEnabled_Parms, NULL );

	pFnSetEnvironmentalAudioEnabled->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioComponent.GetObstructionOcclusionEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::GetObstructionOcclusionEnabled ( )
{
	static UFunction* pFnGetObstructionOcclusionEnabled = NULL;

	if ( ! pFnGetObstructionOcclusionEnabled )
		pFnGetObstructionOcclusionEnabled = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.GetObstructionOcclusionEnabled" );

	UWwiseAudioComponent_execGetObstructionOcclusionEnabled_Parms GetObstructionOcclusionEnabled_Parms;

	pFnGetObstructionOcclusionEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetObstructionOcclusionEnabled, &GetObstructionOcclusionEnabled_Parms, NULL );

	pFnGetObstructionOcclusionEnabled->FunctionFlags |= 0x400;

	return GetObstructionOcclusionEnabled_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.GetEnvironmentalAudioEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::GetEnvironmentalAudioEnabled ( )
{
	static UFunction* pFnGetEnvironmentalAudioEnabled = NULL;

	if ( ! pFnGetEnvironmentalAudioEnabled )
		pFnGetEnvironmentalAudioEnabled = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.GetEnvironmentalAudioEnabled" );

	UWwiseAudioComponent_execGetEnvironmentalAudioEnabled_Parms GetEnvironmentalAudioEnabled_Parms;

	pFnGetEnvironmentalAudioEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEnvironmentalAudioEnabled, &GetEnvironmentalAudioEnabled_Parms, NULL );

	pFnGetEnvironmentalAudioEnabled->FunctionFlags |= 0x400;

	return GetEnvironmentalAudioEnabled_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.GetMicPosition
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UWwiseAudioComponent::GetMicPosition ( )
{
	static UFunction* pFnGetMicPosition = NULL;

	if ( ! pFnGetMicPosition )
		pFnGetMicPosition = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.GetMicPosition" );

	UWwiseAudioComponent_execGetMicPosition_Parms GetMicPosition_Parms;

	pFnGetMicPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetMicPosition, &GetMicPosition_Parms, NULL );

	pFnGetMicPosition->FunctionFlags |= 0x400;

	return GetMicPosition_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetGlobalRTPCFromScript
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 in_pszRtpcName                 ( CPF_Parm | CPF_NeedCtorLink )
// float                          in_value                       ( CPF_Parm )

bool UWwiseAudioComponent::SetGlobalRTPCFromScript ( struct FString in_pszRtpcName, float in_value )
{
	static UFunction* pFnSetGlobalRTPCFromScript = NULL;

	if ( ! pFnSetGlobalRTPCFromScript )
		pFnSetGlobalRTPCFromScript = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SetGlobalRTPCFromScript" );

	UWwiseAudioComponent_execSetGlobalRTPCFromScript_Parms SetGlobalRTPCFromScript_Parms;
	memcpy ( &SetGlobalRTPCFromScript_Parms.in_pszRtpcName, &in_pszRtpcName, 0x10 );
	SetGlobalRTPCFromScript_Parms.in_value = in_value;

	pFnSetGlobalRTPCFromScript->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetGlobalRTPCFromScript, &SetGlobalRTPCFromScript_Parms, NULL );

	pFnSetGlobalRTPCFromScript->FunctionFlags |= 0x400;

	return SetGlobalRTPCFromScript_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.StaticPostGlobalEventFromScript
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   GlobalEventName                ( CPF_Parm )

bool UWwiseAudioComponent::StaticPostGlobalEventFromScript ( struct FName GlobalEventName )
{
	static UFunction* pFnStaticPostGlobalEventFromScript = NULL;

	if ( ! pFnStaticPostGlobalEventFromScript )
		pFnStaticPostGlobalEventFromScript = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.StaticPostGlobalEventFromScript" );

	UWwiseAudioComponent_execStaticPostGlobalEventFromScript_Parms StaticPostGlobalEventFromScript_Parms;
	memcpy ( &StaticPostGlobalEventFromScript_Parms.GlobalEventName, &GlobalEventName, 0x8 );

	pFnStaticPostGlobalEventFromScript->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStaticPostGlobalEventFromScript, &StaticPostGlobalEventFromScript_Parms, NULL );

	pFnStaticPostGlobalEventFromScript->FunctionFlags |= 0x400;

	return StaticPostGlobalEventFromScript_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.CreateComponentFromScript
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UWwiseAudioComponent*    ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
// class AActor*                  pActor                         ( CPF_Parm )
// struct FString                 Label                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// struct FName                   ComponentGroup                 ( CPF_OptionalParm | CPF_Parm )
// struct FName                   AttachBone                     ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bRegister                      ( CPF_OptionalParm | CPF_Parm )

class UWwiseAudioComponent* UWwiseAudioComponent::CreateComponentFromScript ( class AActor* pActor, struct FString Label, struct FName ComponentGroup, struct FName AttachBone, unsigned long bRegister )
{
	static UFunction* pFnCreateComponentFromScript = NULL;

	if ( ! pFnCreateComponentFromScript )
		pFnCreateComponentFromScript = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.CreateComponentFromScript" );

	UWwiseAudioComponent_execCreateComponentFromScript_Parms CreateComponentFromScript_Parms;
	CreateComponentFromScript_Parms.pActor = pActor;
	memcpy ( &CreateComponentFromScript_Parms.Label, &Label, 0x10 );
	memcpy ( &CreateComponentFromScript_Parms.ComponentGroup, &ComponentGroup, 0x8 );
	memcpy ( &CreateComponentFromScript_Parms.AttachBone, &AttachBone, 0x8 );
	CreateComponentFromScript_Parms.bRegister = bRegister;

	pFnCreateComponentFromScript->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateComponentFromScript, &CreateComponentFromScript_Parms, NULL );

	pFnCreateComponentFromScript->FunctionFlags |= 0x400;

	return CreateComponentFromScript_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.IsEventPlaying
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            WwisePlayingID                 ( CPF_Parm )

bool UWwiseAudioComponent::IsEventPlaying ( int WwisePlayingID )
{
	static UFunction* pFnIsEventPlaying = NULL;

	if ( ! pFnIsEventPlaying )
		pFnIsEventPlaying = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.IsEventPlaying" );

	UWwiseAudioComponent_execIsEventPlaying_Parms IsEventPlaying_Parms;
	IsEventPlaying_Parms.WwisePlayingID = WwisePlayingID;

	pFnIsEventPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsEventPlaying, &IsEventPlaying_Parms, NULL );

	pFnIsEventPlaying->FunctionFlags |= 0x400;

	return IsEventPlaying_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.IsPlaying
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Event                          ( CPF_OptionalParm | CPF_Parm )

bool UWwiseAudioComponent::IsPlaying ( class UWwiseBaseSoundObject* Event )
{
	static UFunction* pFnIsPlaying = NULL;

	if ( ! pFnIsPlaying )
		pFnIsPlaying = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.IsPlaying" );

	UWwiseAudioComponent_execIsPlaying_Parms IsPlaying_Parms;
	IsPlaying_Parms.Event = Event;

	pFnIsPlaying->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnIsPlaying, &IsPlaying_Parms, NULL );

	pFnIsPlaying->FunctionFlags |= 0x400;

	return IsPlaying_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.PostGlobalEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   GlobalEventName                ( CPF_Parm )

bool UWwiseAudioComponent::PostGlobalEvent ( struct FName GlobalEventName )
{
	static UFunction* pFnPostGlobalEvent = NULL;

	if ( ! pFnPostGlobalEvent )
		pFnPostGlobalEvent = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.PostGlobalEvent" );

	UWwiseAudioComponent_execPostGlobalEvent_Parms PostGlobalEvent_Parms;
	memcpy ( &PostGlobalEvent_Parms.GlobalEventName, &GlobalEventName, 0x8 );

	pFnPostGlobalEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPostGlobalEvent, &PostGlobalEvent_Parms, NULL );

	pFnPostGlobalEvent->FunctionFlags |= 0x400;

	return PostGlobalEvent_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseTrigger
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sTrigger                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWwiseAudioComponent::SetWwiseTrigger ( struct FString sTrigger )
{
	static UFunction* pFnSetWwiseTrigger = NULL;

	if ( ! pFnSetWwiseTrigger )
		pFnSetWwiseTrigger = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SetWwiseTrigger" );

	UWwiseAudioComponent_execSetWwiseTrigger_Parms SetWwiseTrigger_Parms;
	memcpy ( &SetWwiseTrigger_Parms.sTrigger, &sTrigger, 0x10 );

	pFnSetWwiseTrigger->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseTrigger, &SetWwiseTrigger_Parms, NULL );

	pFnSetWwiseTrigger->FunctionFlags |= 0x400;

	return SetWwiseTrigger_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseSwitch
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sGroup                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sState                         ( CPF_Parm | CPF_NeedCtorLink )

bool UWwiseAudioComponent::SetWwiseSwitch ( struct FString sGroup, struct FString sState )
{
	static UFunction* pFnSetWwiseSwitch = NULL;

	if ( ! pFnSetWwiseSwitch )
		pFnSetWwiseSwitch = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SetWwiseSwitch" );

	UWwiseAudioComponent_execSetWwiseSwitch_Parms SetWwiseSwitch_Parms;
	memcpy ( &SetWwiseSwitch_Parms.sGroup, &sGroup, 0x10 );
	memcpy ( &SetWwiseSwitch_Parms.sState, &sState, 0x10 );

	pFnSetWwiseSwitch->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseSwitch, &SetWwiseSwitch_Parms, NULL );

	pFnSetWwiseSwitch->FunctionFlags |= 0x400;

	return SetWwiseSwitch_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPCs
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct TArray<struct FString>  sName                          ( CPF_Parm | CPF_NeedCtorLink )
// struct TArray<float>           fValue                         ( CPF_Parm | CPF_NeedCtorLink )

bool UWwiseAudioComponent::SetWwiseRTPCs ( struct TArray<struct FString> sName, struct TArray<float> fValue )
{
	static UFunction* pFnSetWwiseRTPCs = NULL;

	if ( ! pFnSetWwiseRTPCs )
		pFnSetWwiseRTPCs = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPCs" );

	UWwiseAudioComponent_execSetWwiseRTPCs_Parms SetWwiseRTPCs_Parms;
	memcpy ( &SetWwiseRTPCs_Parms.sName, &sName, 0x10 );
	memcpy ( &SetWwiseRTPCs_Parms.fValue, &fValue, 0x10 );

	pFnSetWwiseRTPCs->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseRTPCs, &SetWwiseRTPCs_Parms, NULL );

	pFnSetWwiseRTPCs->FunctionFlags |= 0x400;

	return SetWwiseRTPCs_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPC
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 sName                          ( CPF_Parm | CPF_NeedCtorLink )
// float                          fValue                         ( CPF_Parm )

bool UWwiseAudioComponent::SetWwiseRTPC ( struct FString sName, float fValue )
{
	static UFunction* pFnSetWwiseRTPC = NULL;

	if ( ! pFnSetWwiseRTPC )
		pFnSetWwiseRTPC = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SetWwiseRTPC" );

	UWwiseAudioComponent_execSetWwiseRTPC_Parms SetWwiseRTPC_Parms;
	memcpy ( &SetWwiseRTPC_Parms.sName, &sName, 0x10 );
	SetWwiseRTPC_Parms.fValue = fValue;

	pFnSetWwiseRTPC->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetWwiseRTPC, &SetWwiseRTPC_Parms, NULL );

	pFnSetWwiseRTPC->FunctionFlags |= 0x400;

	return SetWwiseRTPC_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Base                           ( CPF_Parm )

bool UWwiseAudioComponent::Stop ( class UWwiseBaseSoundObject* Base )
{
	static UFunction* pFnStop = NULL;

	if ( ! pFnStop )
		pFnStop = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.Stop" );

	UWwiseAudioComponent_execStop_Parms Stop_Parms;
	Stop_Parms.Base = Base;

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStop, &Stop_Parms, NULL );

	pFnStop->FunctionFlags |= 0x400;

	return Stop_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.StopWwiseEvent
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FWwiseEventPair         AudioEvent                     ( CPF_Parm )

bool UWwiseAudioComponent::StopWwiseEvent ( struct FWwiseEventPair AudioEvent )
{
	static UFunction* pFnStopWwiseEvent = NULL;

	if ( ! pFnStopWwiseEvent )
		pFnStopWwiseEvent = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.StopWwiseEvent" );

	UWwiseAudioComponent_execStopWwiseEvent_Parms StopWwiseEvent_Parms;
	memcpy ( &StopWwiseEvent_Parms.AudioEvent, &AudioEvent, 0x10 );

	pFnStopWwiseEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopWwiseEvent, &StopWwiseEvent_Parms, NULL );

	pFnStopWwiseEvent->FunctionFlags |= 0x400;

	return StopWwiseEvent_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.Play
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Base                           ( CPF_Parm )
// unsigned long                  bTrackPosition                 ( CPF_OptionalParm | CPF_Parm )

bool UWwiseAudioComponent::Play ( class UWwiseBaseSoundObject* Base, unsigned long bTrackPosition )
{
	static UFunction* pFnPlay = NULL;

	if ( ! pFnPlay )
		pFnPlay = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.Play" );

	UWwiseAudioComponent_execPlay_Parms Play_Parms;
	Play_Parms.Base = Base;
	Play_Parms.bTrackPosition = bTrackPosition;

	pFnPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlay, &Play_Parms, NULL );

	pFnPlay->FunctionFlags |= 0x400;

	return Play_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.PlayWwiseEvent
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FWwiseEventPair         AudioEvent                     ( CPF_Parm )
// unsigned long                  bTrackPosition                 ( CPF_OptionalParm | CPF_Parm )

bool UWwiseAudioComponent::PlayWwiseEvent ( struct FWwiseEventPair AudioEvent, unsigned long bTrackPosition )
{
	static UFunction* pFnPlayWwiseEvent = NULL;

	if ( ! pFnPlayWwiseEvent )
		pFnPlayWwiseEvent = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.PlayWwiseEvent" );

	UWwiseAudioComponent_execPlayWwiseEvent_Parms PlayWwiseEvent_Parms;
	memcpy ( &PlayWwiseEvent_Parms.AudioEvent, &AudioEvent, 0x10 );
	PlayWwiseEvent_Parms.bTrackPosition = bTrackPosition;

	pFnPlayWwiseEvent->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPlayWwiseEvent, &PlayWwiseEvent_Parms, NULL );

	pFnPlayWwiseEvent->FunctionFlags |= 0x400;

	return PlayWwiseEvent_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SoundPositionByID
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            WwisePlayingID                 ( CPF_Parm )

float UWwiseAudioComponent::SoundPositionByID ( int WwisePlayingID )
{
	static UFunction* pFnSoundPositionByID = NULL;

	if ( ! pFnSoundPositionByID )
		pFnSoundPositionByID = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SoundPositionByID" );

	UWwiseAudioComponent_execSoundPositionByID_Parms SoundPositionByID_Parms;
	SoundPositionByID_Parms.WwisePlayingID = WwisePlayingID;

	pFnSoundPositionByID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSoundPositionByID, &SoundPositionByID_Parms, NULL );

	pFnSoundPositionByID->FunctionFlags |= 0x400;

	return SoundPositionByID_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SoundPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   Base                           ( CPF_Parm )

float UWwiseAudioComponent::SoundPosition ( class UWwiseBaseSoundObject* Base )
{
	static UFunction* pFnSoundPosition = NULL;

	if ( ! pFnSoundPosition )
		pFnSoundPosition = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SoundPosition" );

	UWwiseAudioComponent_execSoundPosition_Parms SoundPosition_Parms;
	SoundPosition_Parms.Base = Base;

	pFnSoundPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSoundPosition, &SoundPosition_Parms, NULL );

	pFnSoundPosition->FunctionFlags |= 0x400;

	return SoundPosition_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.StopAll
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWwiseAudioComponent::StopAll ( )
{
	static UFunction* pFnStopAll = NULL;

	if ( ! pFnStopAll )
		pFnStopAll = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.StopAll" );

	UWwiseAudioComponent_execStopAll_Parms StopAll_Parms;

	pFnStopAll->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopAll, &StopAll_Parms, NULL );

	pFnStopAll->FunctionFlags |= 0x400;

	return StopAll_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.FindPlayingID
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWwiseBaseSoundObject*   BaseSound                      ( CPF_Parm )
// class UWwiseEvent*             StopEvent                      ( CPF_OptionalParm | CPF_Parm )

int UWwiseAudioComponent::FindPlayingID ( class UWwiseBaseSoundObject* BaseSound, class UWwiseEvent* StopEvent )
{
	static UFunction* pFnFindPlayingID = NULL;

	if ( ! pFnFindPlayingID )
		pFnFindPlayingID = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.FindPlayingID" );

	UWwiseAudioComponent_execFindPlayingID_Parms FindPlayingID_Parms;
	FindPlayingID_Parms.BaseSound = BaseSound;
	FindPlayingID_Parms.StopEvent = StopEvent;

	pFnFindPlayingID->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFindPlayingID, &FindPlayingID_Parms, NULL );

	pFnFindPlayingID->FunctionFlags |= 0x400;

	return FindPlayingID_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseAudioComponent.SetRTPCWithHandler
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          fValue                         ( CPF_Parm )
// struct FWwiseRTPCForActorHandler RTPCHandler                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWwiseAudioComponent::SetRTPCWithHandler ( float fValue, struct FWwiseRTPCForActorHandler* RTPCHandler )
{
	static UFunction* pFnSetRTPCWithHandler = NULL;

	if ( ! pFnSetRTPCWithHandler )
		pFnSetRTPCWithHandler = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponent.SetRTPCWithHandler" );

	UWwiseAudioComponent_execSetRTPCWithHandler_Parms SetRTPCWithHandler_Parms;
	SetRTPCWithHandler_Parms.fValue = fValue;

	pFnSetRTPCWithHandler->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetRTPCWithHandler, &SetRTPCWithHandler_Parms, NULL );

	pFnSetRTPCWithHandler->FunctionFlags |= 0x400;

	if ( RTPCHandler )
		memcpy ( RTPCHandler, &SetRTPCWithHandler_Parms.RTPCHandler, 0x1C );
};



class UClass* UWwiseAudioComponentMultiLoc::pClassPointer = NULL;

class UClass* UWwiseAudioComponentMultiLoc::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseAudioComponentMultiLoc" );

		return pClassPointer;
	};

// Function WwiseAudio.WwiseAudioComponentMultiLoc.Set3D
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UWwiseAudioComponentMultiLoc::Set3D ( )
{
	static UFunction* pFnSet3D = NULL;

	if ( ! pFnSet3D )
		pFnSet3D = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioComponentMultiLoc.Set3D" );

	UWwiseAudioComponentMultiLoc_execSet3D_Parms Set3D_Parms;

	pFnSet3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet3D, &Set3D_Parms, NULL );

	pFnSet3D->FunctionFlags |= 0x400;
};



class UClass* UWwiseAudioDevice::pClassPointer = NULL;

class UClass* UWwiseAudioDevice::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseAudioDevice" );

		return pClassPointer;
	};



class UClass* UWwiseBundleArchive::pClassPointer = NULL;

class UClass* UWwiseBundleArchive::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseBundleArchive" );

		return pClassPointer;
	};



class UClass* UWwiseComponentCallback::pClassPointer = NULL;

class UClass* UWwiseComponentCallback::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseComponentCallback" );

		return pClassPointer;
	};



class UClass* UWwiseEnvironmentSettings::pClassPointer = NULL;

class UClass* UWwiseEnvironmentSettings::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseEnvironmentSettings" );

		return pClassPointer;
	};



class UClass* AWwiseEnvironmentVolume::pClassPointer = NULL;

class UClass* AWwiseEnvironmentVolume::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseEnvironmentVolume" );

		return pClassPointer;
	};



class UClass* UWwiseEvent::pClassPointer = NULL;

class UClass* UWwiseEvent::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseEvent" );

		return pClassPointer;
	};



class UClass* UWwiseDialogueEvent::pClassPointer = NULL;

class UClass* UWwiseDialogueEvent::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseDialogueEvent" );

		return pClassPointer;
	};



class UClass* UWwiseEventPairObject::pClassPointer = NULL;

class UClass* UWwiseEventPairObject::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseEventPairObject" );

		return pClassPointer;
	};



class UClass* UWwiseFaceFXStopper::pClassPointer = NULL;

class UClass* UWwiseFaceFXStopper::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseFaceFXStopper" );

		return pClassPointer;
	};



class UClass* UWwiseFile::pClassPointer = NULL;

class UClass* UWwiseFile::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseFile" );

		return pClassPointer;
	};



class UClass* UWwiseBank::pClassPointer = NULL;

class UClass* UWwiseBank::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseBank" );

		return pClassPointer;
	};



class UClass* UWwiseStream::pClassPointer = NULL;

class UClass* UWwiseStream::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseStream" );

		return pClassPointer;
	};



class UClass* AWwiseMicPosOrient::pClassPointer = NULL;

class UClass* AWwiseMicPosOrient::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseMicPosOrient" );

		return pClassPointer;
	};

// Function WwiseAudio.WwiseMicPosOrient.GetUpVector
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector AWwiseMicPosOrient::GetUpVector ( )
{
	static UFunction* pFnGetUpVector = NULL;

	if ( ! pFnGetUpVector )
		pFnGetUpVector = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseMicPosOrient.GetUpVector" );

	AWwiseMicPosOrient_execGetUpVector_Parms GetUpVector_Parms;

	pFnGetUpVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetUpVector, &GetUpVector_Parms, NULL );

	pFnGetUpVector->FunctionFlags |= 0x400;

	return GetUpVector_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseMicPosOrient.GetFrontVector
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector AWwiseMicPosOrient::GetFrontVector ( )
{
	static UFunction* pFnGetFrontVector = NULL;

	if ( ! pFnGetFrontVector )
		pFnGetFrontVector = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseMicPosOrient.GetFrontVector" );

	AWwiseMicPosOrient_execGetFrontVector_Parms GetFrontVector_Parms;

	pFnGetFrontVector->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFrontVector, &GetFrontVector_Parms, NULL );

	pFnGetFrontVector->FunctionFlags |= 0x400;

	return GetFrontVector_Parms.ReturnValue;
};



class UClass* UWwiseProcFoleyComponent::pClassPointer = NULL;

class UClass* UWwiseProcFoleyComponent::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseProcFoleyComponent" );

		return pClassPointer;
	};

// Function WwiseAudio.WwiseProcFoleyComponent.GetMAX_PROC_FOLEY_BONES
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UWwiseProcFoleyComponent::eventGetMAX_PROC_FOLEY_BONES ( )
{
	static UFunction* pFnGetMAX_PROC_FOLEY_BONES = NULL;

	if ( ! pFnGetMAX_PROC_FOLEY_BONES )
		pFnGetMAX_PROC_FOLEY_BONES = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseProcFoleyComponent.GetMAX_PROC_FOLEY_BONES" );

	UWwiseProcFoleyComponent_eventGetMAX_PROC_FOLEY_BONES_Parms GetMAX_PROC_FOLEY_BONES_Parms;

	this->ProcessEvent ( pFnGetMAX_PROC_FOLEY_BONES, &GetMAX_PROC_FOLEY_BONES_Parms, NULL );

	return GetMAX_PROC_FOLEY_BONES_Parms.ReturnValue;
};



class UClass* AWwiseVolume::pClassPointer = NULL;

class UClass* AWwiseVolume::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseVolume" );

		return pClassPointer;
	};

// Function WwiseAudio.WwiseVolume.TimerPop
// [0x00020000] 
// Parameters infos:
// class AWwiseVolumeTimer*       T                              ( CPF_Parm )

void AWwiseVolume::TimerPop ( class AWwiseVolumeTimer* T )
{
	static UFunction* pFnTimerPop = NULL;

	if ( ! pFnTimerPop )
		pFnTimerPop = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseVolume.TimerPop" );

	AWwiseVolume_execTimerPop_Parms TimerPop_Parms;
	TimerPop_Parms.T = T;

	this->ProcessEvent ( pFnTimerPop, &TimerPop_Parms, NULL );
};

// Function WwiseAudio.WwiseVolume.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AWwiseVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseVolume.PostBeginPlay" );

	AWwiseVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};



class UClass* AWwiseAudioVolume::pClassPointer = NULL;

class UClass* AWwiseAudioVolume::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseAudioVolume" );

		return pClassPointer;
	};

// Function WwiseAudio.WwiseAudioVolume.HideVolume
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::HideVolume ( )
{
	static UFunction* pFnHideVolume = NULL;

	if ( ! pFnHideVolume )
		pFnHideVolume = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioVolume.HideVolume" );

	AWwiseAudioVolume_execHideVolume_Parms HideVolume_Parms;

	pFnHideVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnHideVolume, &HideVolume_Parms, NULL );

	pFnHideVolume->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.DrawVolume
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::DrawVolume ( )
{
	static UFunction* pFnDrawVolume = NULL;

	if ( ! pFnDrawVolume )
		pFnDrawVolume = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioVolume.DrawVolume" );

	AWwiseAudioVolume_execDrawVolume_Parms DrawVolume_Parms;

	pFnDrawVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnDrawVolume, &DrawVolume_Parms, NULL );

	pFnDrawVolume->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.Stop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::Stop ( )
{
	static UFunction* pFnStop = NULL;

	if ( ! pFnStop )
		pFnStop = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioVolume.Stop" );

	AWwiseAudioVolume_execStop_Parms Stop_Parms;

	pFnStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStop, &Stop_Parms, NULL );

	pFnStop->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.Start
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::Start ( )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioVolume.Start" );

	AWwiseAudioVolume_execStart_Parms Start_Parms;

	pFnStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	pFnStart->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseAudioVolume::myTimerPop ( )
{
	static UFunction* pFnmyTimerPop = NULL;

	if ( ! pFnmyTimerPop )
		pFnmyTimerPop = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioVolume.myTimerPop" );

	AWwiseAudioVolume_execmyTimerPop_Parms myTimerPop_Parms;

	pFnmyTimerPop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnmyTimerPop, &myTimerPop_Parms, NULL );

	pFnmyTimerPop->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseAudioVolume.TimerPop
// [0x00020002] 
// Parameters infos:
// class AWwiseVolumeTimer*       T                              ( CPF_Parm )

void AWwiseAudioVolume::TimerPop ( class AWwiseVolumeTimer* T )
{
	static UFunction* pFnTimerPop = NULL;

	if ( ! pFnTimerPop )
		pFnTimerPop = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioVolume.TimerPop" );

	AWwiseAudioVolume_execTimerPop_Parms TimerPop_Parms;
	TimerPop_Parms.T = T;

	this->ProcessEvent ( pFnTimerPop, &TimerPop_Parms, NULL );
};

// Function WwiseAudio.WwiseAudioVolume.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AWwiseAudioVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseAudioVolume.PostBeginPlay" );

	AWwiseAudioVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};



class UClass* AWwiseMusicVolume::pClassPointer = NULL;

class UClass* AWwiseMusicVolume::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseMusicVolume" );

		return pClassPointer;
	};

// Function WwiseAudio.WwiseMusicVolume.myTimerPop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMusicVolume::myTimerPop ( )
{
	static UFunction* pFnmyTimerPop = NULL;

	if ( ! pFnmyTimerPop )
		pFnmyTimerPop = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseMusicVolume.myTimerPop" );

	AWwiseMusicVolume_execmyTimerPop_Parms myTimerPop_Parms;

	pFnmyTimerPop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnmyTimerPop, &myTimerPop_Parms, NULL );

	pFnmyTimerPop->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.SetContainsPlayer
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bContainsPlayer                ( CPF_Parm )

void AWwiseMusicVolume::SetContainsPlayer ( unsigned long bContainsPlayer )
{
	static UFunction* pFnSetContainsPlayer = NULL;

	if ( ! pFnSetContainsPlayer )
		pFnSetContainsPlayer = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseMusicVolume.SetContainsPlayer" );

	AWwiseMusicVolume_execSetContainsPlayer_Parms SetContainsPlayer_Parms;
	SetContainsPlayer_Parms.bContainsPlayer = bContainsPlayer;

	pFnSetContainsPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetContainsPlayer, &SetContainsPlayer_Parms, NULL );

	pFnSetContainsPlayer->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.SetEnabled
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void AWwiseMusicVolume::SetEnabled ( unsigned long bEnabled )
{
	static UFunction* pFnSetEnabled = NULL;

	if ( ! pFnSetEnabled )
		pFnSetEnabled = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseMusicVolume.SetEnabled" );

	AWwiseMusicVolume_execSetEnabled_Parms SetEnabled_Parms;
	SetEnabled_Parms.bEnabled = bEnabled;

	pFnSetEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetEnabled, &SetEnabled_Parms, NULL );

	pFnSetEnabled->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.StopMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMusicVolume::StopMusic ( )
{
	static UFunction* pFnStopMusic = NULL;

	if ( ! pFnStopMusic )
		pFnStopMusic = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseMusicVolume.StopMusic" );

	AWwiseMusicVolume_execStopMusic_Parms StopMusic_Parms;

	pFnStopMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStopMusic, &StopMusic_Parms, NULL );

	pFnStopMusic->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.StartMusic
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AWwiseMusicVolume::StartMusic ( )
{
	static UFunction* pFnStartMusic = NULL;

	if ( ! pFnStartMusic )
		pFnStartMusic = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseMusicVolume.StartMusic" );

	AWwiseMusicVolume_execStartMusic_Parms StartMusic_Parms;

	pFnStartMusic->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStartMusic, &StartMusic_Parms, NULL );

	pFnStartMusic->FunctionFlags |= 0x400;
};

// Function WwiseAudio.WwiseMusicVolume.CheckPriority
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWwiseMusicVolume::CheckPriority ( )
{
	static UFunction* pFnCheckPriority = NULL;

	if ( ! pFnCheckPriority )
		pFnCheckPriority = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseMusicVolume.CheckPriority" );

	AWwiseMusicVolume_execCheckPriority_Parms CheckPriority_Parms;

	pFnCheckPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCheckPriority, &CheckPriority_Parms, NULL );

	pFnCheckPriority->FunctionFlags |= 0x400;

	return CheckPriority_Parms.ReturnValue;
};

// Function WwiseAudio.WwiseMusicVolume.TimerPop
// [0x00020002] 
// Parameters infos:
// class AWwiseVolumeTimer*       T                              ( CPF_Parm )

void AWwiseMusicVolume::TimerPop ( class AWwiseVolumeTimer* T )
{
	static UFunction* pFnTimerPop = NULL;

	if ( ! pFnTimerPop )
		pFnTimerPop = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseMusicVolume.TimerPop" );

	AWwiseMusicVolume_execTimerPop_Parms TimerPop_Parms;
	TimerPop_Parms.T = T;

	this->ProcessEvent ( pFnTimerPop, &TimerPop_Parms, NULL );
};

// Function WwiseAudio.WwiseMusicVolume.PostBeginPlay
// [0x00020002] 
// Parameters infos:

void AWwiseMusicVolume::PostBeginPlay ( )
{
	static UFunction* pFnPostBeginPlay = NULL;

	if ( ! pFnPostBeginPlay )
		pFnPostBeginPlay = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseMusicVolume.PostBeginPlay" );

	AWwiseMusicVolume_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent ( pFnPostBeginPlay, &PostBeginPlay_Parms, NULL );
};



class UClass* AWwiseVolumeTimer::pClassPointer = NULL;

class UClass* AWwiseVolumeTimer::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseVolumeTimer" );

		return pClassPointer;
	};

// Function WwiseAudio.WwiseVolumeTimer.Timer
// [0x00020002] 
// Parameters infos:

void AWwiseVolumeTimer::Timer ( )
{
	static UFunction* pFnTimer = NULL;

	if ( ! pFnTimer )
		pFnTimer = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseVolumeTimer.Timer" );

	AWwiseVolumeTimer_execTimer_Parms Timer_Parms;

	this->ProcessEvent ( pFnTimer, &Timer_Parms, NULL );
};



class UClass* UActorFactoryWwiseDistanceRTPC::pClassPointer = NULL;

class UClass* UActorFactoryWwiseDistanceRTPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.ActorFactoryWwiseDistanceRTPC" );

		return pClassPointer;
	};



class UClass* AWwiseDistanceRTPC::pClassPointer = NULL;

class UClass* AWwiseDistanceRTPC::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseDistanceRTPC" );

		return pClassPointer;
	};

// Function WwiseAudio.WwiseDistanceRTPC.Tick
// [0x00020002] 
// Parameters infos:
// float                          DeltaTime                      ( CPF_Parm )

void AWwiseDistanceRTPC::Tick ( float DeltaTime )
{
	static UFunction* pFnTick = NULL;

	if ( ! pFnTick )
		pFnTick = UObject::FindObject< UFunction > ( "Function WwiseAudio.WwiseDistanceRTPC.Tick" );

	AWwiseDistanceRTPC_execTick_Parms Tick_Parms;
	Tick_Parms.DeltaTime = DeltaTime;

	this->ProcessEvent ( pFnTick, &Tick_Parms, NULL );
};



class UClass* UActorFactoryWwiseMicPosOrient::pClassPointer = NULL;

class UClass* UActorFactoryWwiseMicPosOrient::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.ActorFactoryWwiseMicPosOrient" );

		return pClassPointer;
	};



class UClass* UWwiseCollection::pClassPointer = NULL;

class UClass* UWwiseCollection::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseCollection" );

		return pClassPointer;
	};



class UClass* AWwiseOcclusionVolume::pClassPointer = NULL;

class UClass* AWwiseOcclusionVolume::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class WwiseAudio.WwiseOcclusionVolume" );

		return pClassPointer;
	};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif