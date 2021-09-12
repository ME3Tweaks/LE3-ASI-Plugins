/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: GFxUI_functions.cpp
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



class UClass* UGFxEngine::pClassPointer = NULL;

class UClass* UGFxEngine::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxEngine" );

		return pClassPointer;
	};



class UClass* UGFxFSCmdHandler::pClassPointer = NULL;

class UClass* UGFxFSCmdHandler::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxFSCmdHandler" );

		return pClassPointer;
	};

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxMovie*               movie                          ( CPF_Parm )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxFSCmdHandler::eventFSCommand ( class UGFxMovie* movie, struct FString Cmd, struct FString Arg )
{
	static UFunction* pFnFSCommand = NULL;

	if ( ! pFnFSCommand )
		pFnFSCommand = UObject::FindObject< UFunction > ( "Function GFxUI.GFxFSCmdHandler.FSCommand" );

	UGFxFSCmdHandler_eventFSCommand_Parms FSCommand_Parms;
	FSCommand_Parms.movie = movie;
	memcpy ( &FSCommand_Parms.Cmd, &Cmd, 0x10 );
	memcpy ( &FSCommand_Parms.Arg, &Arg, 0x10 );

	this->ProcessEvent ( pFnFSCommand, &FSCommand_Parms, NULL );

	return FSCommand_Parms.ReturnValue;
};



class UClass* UGFxGameViewportClient::pClassPointer = NULL;

class UClass* UGFxGameViewportClient::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxGameViewportClient" );

		return pClassPointer;
	};

// Function GFxUI.GFxGameViewportClient.Init
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 OutError                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxGameViewportClient::eventInit ( struct FString* OutError )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = UObject::FindObject< UFunction > ( "Function GFxUI.GFxGameViewportClient.Init" );

	UGFxGameViewportClient_eventInit_Parms Init_Parms;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	if ( OutError )
		memcpy ( OutError, &Init_Parms.OutError, 0x10 );

	return Init_Parms.ReturnValue;
};



class UClass* UGFxInteraction::pClassPointer = NULL;

class UClass* UGFxInteraction::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxInteraction" );

		return pClassPointer;
	};

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            PlayerIndex                    ( CPF_Parm )
// class ULocalPlayer*            RemovedPlayer                  ( CPF_Parm )

void UGFxInteraction::NotifyPlayerRemoved ( int PlayerIndex, class ULocalPlayer* RemovedPlayer )
{
	static UFunction* pFnNotifyPlayerRemoved = NULL;

	if ( ! pFnNotifyPlayerRemoved )
		pFnNotifyPlayerRemoved = UObject::FindObject< UFunction > ( "Function GFxUI.GFxInteraction.NotifyPlayerRemoved" );

	UGFxInteraction_execNotifyPlayerRemoved_Parms NotifyPlayerRemoved_Parms;
	NotifyPlayerRemoved_Parms.PlayerIndex = PlayerIndex;
	NotifyPlayerRemoved_Parms.RemovedPlayer = RemovedPlayer;

	pFnNotifyPlayerRemoved->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyPlayerRemoved, &NotifyPlayerRemoved_Parms, NULL );

	pFnNotifyPlayerRemoved->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            PlayerIndex                    ( CPF_Parm )
// class ULocalPlayer*            AddedPlayer                    ( CPF_Parm )

void UGFxInteraction::NotifyPlayerAdded ( int PlayerIndex, class ULocalPlayer* AddedPlayer )
{
	static UFunction* pFnNotifyPlayerAdded = NULL;

	if ( ! pFnNotifyPlayerAdded )
		pFnNotifyPlayerAdded = UObject::FindObject< UFunction > ( "Function GFxUI.GFxInteraction.NotifyPlayerAdded" );

	UGFxInteraction_execNotifyPlayerAdded_Parms NotifyPlayerAdded_Parms;
	NotifyPlayerAdded_Parms.PlayerIndex = PlayerIndex;
	NotifyPlayerAdded_Parms.AddedPlayer = AddedPlayer;

	pFnNotifyPlayerAdded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyPlayerAdded, &NotifyPlayerAdded_Parms, NULL );

	pFnNotifyPlayerAdded->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxInteraction::NotifyGameSessionEnded ( )
{
	static UFunction* pFnNotifyGameSessionEnded = NULL;

	if ( ! pFnNotifyGameSessionEnded )
		pFnNotifyGameSessionEnded = UObject::FindObject< UFunction > ( "Function GFxUI.GFxInteraction.NotifyGameSessionEnded" );

	UGFxInteraction_execNotifyGameSessionEnded_Parms NotifyGameSessionEnded_Parms;

	pFnNotifyGameSessionEnded->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Parms, NULL );

	pFnNotifyGameSessionEnded->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxMovie*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGFxMovie* UGFxInteraction::GetFocusMovie ( )
{
	static UFunction* pFnGetFocusMovie = NULL;

	if ( ! pFnGetFocusMovie )
		pFnGetFocusMovie = UObject::FindObject< UFunction > ( "Function GFxUI.GFxInteraction.GetFocusMovie" );

	UGFxInteraction_execGetFocusMovie_Parms GetFocusMovie_Parms;

	pFnGetFocusMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetFocusMovie, &GetFocusMovie_Parms, NULL );

	pFnGetFocusMovie->FunctionFlags |= 0x400;

	return GetFocusMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxInteraction.SetFocusMovie
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 MovieName                      ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  captureInput                   ( CPF_Parm )

bool UGFxInteraction::SetFocusMovie ( struct FString MovieName, unsigned long captureInput )
{
	static UFunction* pFnSetFocusMovie = NULL;

	if ( ! pFnSetFocusMovie )
		pFnSetFocusMovie = UObject::FindObject< UFunction > ( "Function GFxUI.GFxInteraction.SetFocusMovie" );

	UGFxInteraction_execSetFocusMovie_Parms SetFocusMovie_Parms;
	memcpy ( &SetFocusMovie_Parms.MovieName, &MovieName, 0x10 );
	SetFocusMovie_Parms.captureInput = captureInput;

	pFnSetFocusMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFocusMovie, &SetFocusMovie_Parms, NULL );

	pFnSetFocusMovie->FunctionFlags |= 0x400;

	return SetFocusMovie_Parms.ReturnValue;
};



class UClass* UGFxMovie::pClassPointer = NULL;

class UClass* UGFxMovie::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxMovie" );

		return pClassPointer;
	};

// Function GFxUI.GFxMovie.UnregisterGFxValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxValue*               i_val                          ( CPF_Parm )

bool UGFxMovie::UnregisterGFxValue ( class UGFxValue* i_val )
{
	static UFunction* pFnUnregisterGFxValue = NULL;

	if ( ! pFnUnregisterGFxValue )
		pFnUnregisterGFxValue = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.UnregisterGFxValue" );

	UGFxMovie_execUnregisterGFxValue_Parms UnregisterGFxValue_Parms;
	UnregisterGFxValue_Parms.i_val = i_val;

	pFnUnregisterGFxValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnUnregisterGFxValue, &UnregisterGFxValue_Parms, NULL );

	pFnUnregisterGFxValue->FunctionFlags |= 0x400;

	return UnregisterGFxValue_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.RegisterGFxValue
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxValue*               i_val                          ( CPF_Parm )

bool UGFxMovie::RegisterGFxValue ( class UGFxValue* i_val )
{
	static UFunction* pFnRegisterGFxValue = NULL;

	if ( ! pFnRegisterGFxValue )
		pFnRegisterGFxValue = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.RegisterGFxValue" );

	UGFxMovie_execRegisterGFxValue_Parms RegisterGFxValue_Parms;
	RegisterGFxValue_Parms.i_val = i_val;

	pFnRegisterGFxValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRegisterGFxValue, &RegisterGFxValue_Parms, NULL );

	pFnRegisterGFxValue->FunctionFlags |= 0x400;

	return RegisterGFxValue_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.ActionScriptSetFunction
// [0x00080401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxValue*               Obj                            ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMovie::ActionScriptSetFunction ( class UGFxValue* Obj, struct FString member )
{
	static UFunction* pFnActionScriptSetFunction = NULL;

	if ( ! pFnActionScriptSetFunction )
		pFnActionScriptSetFunction = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.ActionScriptSetFunction" );

	UGFxMovie_execActionScriptSetFunction_Parms ActionScriptSetFunction_Parms;
	ActionScriptSetFunction_Parms.Obj = Obj;
	memcpy ( &ActionScriptSetFunction_Parms.member, &member, 0x10 );

	pFnActionScriptSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunction, &ActionScriptSetFunction_Parms, NULL );

	pFnActionScriptSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.ActionScriptObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

class UGFxValue* UGFxMovie::ActionScriptObject ( struct FString Path )
{
	static UFunction* pFnActionScriptObject = NULL;

	if ( ! pFnActionScriptObject )
		pFnActionScriptObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.ActionScriptObject" );

	UGFxMovie_execActionScriptObject_Parms ActionScriptObject_Parms;
	memcpy ( &ActionScriptObject_Parms.Path, &Path, 0x10 );

	pFnActionScriptObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptObject, &ActionScriptObject_Parms, NULL );

	pFnActionScriptObject->FunctionFlags |= 0x400;

	return ActionScriptObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.ActionScriptString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxMovie::ActionScriptString ( struct FString Path )
{
	static UFunction* pFnActionScriptString = NULL;

	if ( ! pFnActionScriptString )
		pFnActionScriptString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.ActionScriptString" );

	UGFxMovie_execActionScriptString_Parms ActionScriptString_Parms;
	memcpy ( &ActionScriptString_Parms.Path, &Path, 0x10 );

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptString, &ActionScriptString_Parms, NULL );

	pFnActionScriptString->FunctionFlags |= 0x400;

	return ActionScriptString_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.ActionScriptFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

float UGFxMovie::ActionScriptFloat ( struct FString Path )
{
	static UFunction* pFnActionScriptFloat = NULL;

	if ( ! pFnActionScriptFloat )
		pFnActionScriptFloat = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.ActionScriptFloat" );

	UGFxMovie_execActionScriptFloat_Parms ActionScriptFloat_Parms;
	memcpy ( &ActionScriptFloat_Parms.Path, &Path, 0x10 );

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptFloat, &ActionScriptFloat_Parms, NULL );

	pFnActionScriptFloat->FunctionFlags |= 0x400;

	return ActionScriptFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.ActionScriptInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

int UGFxMovie::ActionScriptInt ( struct FString Path )
{
	static UFunction* pFnActionScriptInt = NULL;

	if ( ! pFnActionScriptInt )
		pFnActionScriptInt = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.ActionScriptInt" );

	UGFxMovie_execActionScriptInt_Parms ActionScriptInt_Parms;
	memcpy ( &ActionScriptInt_Parms.Path, &Path, 0x10 );

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptInt, &ActionScriptInt_Parms, NULL );

	pFnActionScriptInt->FunctionFlags |= 0x400;

	return ActionScriptInt_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.ActionScriptVoid
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMovie::ActionScriptVoid ( struct FString Path )
{
	static UFunction* pFnActionScriptVoid = NULL;

	if ( ! pFnActionScriptVoid )
		pFnActionScriptVoid = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.ActionScriptVoid" );

	UGFxMovie_execActionScriptVoid_Parms ActionScriptVoid_Parms;
	memcpy ( &ActionScriptVoid_Parms.Path, &Path, 0x10 );

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptVoid, &ActionScriptVoid_Parms, NULL );

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.GetPC
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class APlayerController*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class APlayerController* UGFxMovie::GetPC ( )
{
	static UFunction* pFnGetPC = NULL;

	if ( ! pFnGetPC )
		pFnGetPC = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetPC" );

	UGFxMovie_execGetPC_Parms GetPC_Parms;

	pFnGetPC->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPC, &GetPC_Parms, NULL );

	pFnGetPC->FunctionFlags |= 0x400;

	return GetPC_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetLP
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class ULocalPlayer*            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class ULocalPlayer* UGFxMovie::GetLP ( )
{
	static UFunction* pFnGetLP = NULL;

	if ( ! pFnGetLP )
		pFnGetLP = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetLP" );

	UGFxMovie_execGetLP_Parms GetLP_Parms;

	pFnGetLP->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetLP, &GetLP_Parms, NULL );

	pFnGetLP->FunctionFlags |= 0x400;

	return GetLP_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetExternalInterface
// [0x00020002] 
// Parameters infos:
// class UObject*                 H                              ( CPF_Parm )

void UGFxMovie::SetExternalInterface ( class UObject* H )
{
	static UFunction* pFnSetExternalInterface = NULL;

	if ( ! pFnSetExternalInterface )
		pFnSetExternalInterface = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetExternalInterface" );

	UGFxMovie_execSetExternalInterface_Parms SetExternalInterface_Parms;
	SetExternalInterface_Parms.H = H;

	this->ProcessEvent ( pFnSetExternalInterface, &SetExternalInterface_Parms, NULL );
};

// Function GFxUI.GFxMovie.SetFsCmdHandler
// [0x00020002] 
// Parameters infos:
// class UGFxFSCmdHandler*        H                              ( CPF_Parm )

void UGFxMovie::SetFsCmdHandler ( class UGFxFSCmdHandler* H )
{
	static UFunction* pFnSetFsCmdHandler = NULL;

	if ( ! pFnSetFsCmdHandler )
		pFnSetFsCmdHandler = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetFsCmdHandler" );

	UGFxMovie_execSetFsCmdHandler_Parms SetFsCmdHandler_Parms;
	SetFsCmdHandler_Parms.H = H;

	this->ProcessEvent ( pFnSetFsCmdHandler, &SetFsCmdHandler_Parms, NULL );
};

// Function GFxUI.GFxMovie.SetVariableObject
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxValue*               Value                          ( CPF_Parm )

void UGFxMovie::SetVariableObject ( struct FString Path, class UGFxValue* Value )
{
	static UFunction* pFnSetVariableObject = NULL;

	if ( ! pFnSetVariableObject )
		pFnSetVariableObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetVariableObject" );

	UGFxMovie_execSetVariableObject_Parms SetVariableObject_Parms;
	memcpy ( &SetVariableObject_Parms.Path, &Path, 0x10 );
	SetVariableObject_Parms.Value = Value;

	pFnSetVariableObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableObject, &SetVariableObject_Parms, NULL );

	pFnSetVariableObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.GetVariableObject
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxValue* UGFxMovie::GetVariableObject ( struct FString Path, class UClass* Type )
{
	static UFunction* pFnGetVariableObject = NULL;

	if ( ! pFnGetVariableObject )
		pFnGetVariableObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetVariableObject" );

	UGFxMovie_execGetVariableObject_Parms GetVariableObject_Parms;
	memcpy ( &GetVariableObject_Parms.Path, &Path, 0x10 );
	GetVariableObject_Parms.Type = Type;

	pFnGetVariableObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableObject, &GetVariableObject_Parms, NULL );

	pFnGetVariableObject->FunctionFlags |= 0x400;

	return GetVariableObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.CreateArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGFxValue* UGFxMovie::CreateArray ( )
{
	static UFunction* pFnCreateArray = NULL;

	if ( ! pFnCreateArray )
		pFnCreateArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.CreateArray" );

	UGFxMovie_execCreateArray_Parms CreateArray_Parms;

	pFnCreateArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateArray, &CreateArray_Parms, NULL );

	pFnCreateArray->FunctionFlags |= 0x400;

	return CreateArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.CreateObject
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ASClass                        ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxValue* UGFxMovie::CreateObject ( struct FString ASClass, class UClass* Type )
{
	static UFunction* pFnCreateObject = NULL;

	if ( ! pFnCreateObject )
		pFnCreateObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.CreateObject" );

	UGFxMovie_execCreateObject_Parms CreateObject_Parms;
	memcpy ( &CreateObject_Parms.ASClass, &ASClass, 0x10 );
	CreateObject_Parms.Type = Type;

	pFnCreateObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateObject, &CreateObject_Parms, NULL );

	pFnCreateObject->FunctionFlags |= 0x400;

	return CreateObject_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetVariableStringArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct TArray<struct FString>  Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMovie::SetVariableStringArray ( struct FString Path, int Index, struct TArray<struct FString> Arg )
{
	static UFunction* pFnSetVariableStringArray = NULL;

	if ( ! pFnSetVariableStringArray )
		pFnSetVariableStringArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetVariableStringArray" );

	UGFxMovie_execSetVariableStringArray_Parms SetVariableStringArray_Parms;
	memcpy ( &SetVariableStringArray_Parms.Path, &Path, 0x10 );
	SetVariableStringArray_Parms.Index = Index;
	memcpy ( &SetVariableStringArray_Parms.Arg, &Arg, 0x10 );

	pFnSetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableStringArray, &SetVariableStringArray_Parms, NULL );

	pFnSetVariableStringArray->FunctionFlags |= 0x400;

	return SetVariableStringArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetVariableFloatArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct TArray<float>           Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMovie::SetVariableFloatArray ( struct FString Path, int Index, struct TArray<float> Arg )
{
	static UFunction* pFnSetVariableFloatArray = NULL;

	if ( ! pFnSetVariableFloatArray )
		pFnSetVariableFloatArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetVariableFloatArray" );

	UGFxMovie_execSetVariableFloatArray_Parms SetVariableFloatArray_Parms;
	memcpy ( &SetVariableFloatArray_Parms.Path, &Path, 0x10 );
	SetVariableFloatArray_Parms.Index = Index;
	memcpy ( &SetVariableFloatArray_Parms.Arg, &Arg, 0x10 );

	pFnSetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableFloatArray, &SetVariableFloatArray_Parms, NULL );

	pFnSetVariableFloatArray->FunctionFlags |= 0x400;

	return SetVariableFloatArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetVariableIntArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct TArray<int>             Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMovie::SetVariableIntArray ( struct FString Path, int Index, struct TArray<int> Arg )
{
	static UFunction* pFnSetVariableIntArray = NULL;

	if ( ! pFnSetVariableIntArray )
		pFnSetVariableIntArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetVariableIntArray" );

	UGFxMovie_execSetVariableIntArray_Parms SetVariableIntArray_Parms;
	memcpy ( &SetVariableIntArray_Parms.Path, &Path, 0x10 );
	SetVariableIntArray_Parms.Index = Index;
	memcpy ( &SetVariableIntArray_Parms.Arg, &Arg, 0x10 );

	pFnSetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableIntArray, &SetVariableIntArray_Parms, NULL );

	pFnSetVariableIntArray->FunctionFlags |= 0x400;

	return SetVariableIntArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetVariableArray
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct TArray<struct FASValue> Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMovie::SetVariableArray ( struct FString Path, int Index, struct TArray<struct FASValue> Arg )
{
	static UFunction* pFnSetVariableArray = NULL;

	if ( ! pFnSetVariableArray )
		pFnSetVariableArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetVariableArray" );

	UGFxMovie_execSetVariableArray_Parms SetVariableArray_Parms;
	memcpy ( &SetVariableArray_Parms.Path, &Path, 0x10 );
	SetVariableArray_Parms.Index = Index;
	memcpy ( &SetVariableArray_Parms.Arg, &Arg, 0x10 );

	pFnSetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableArray, &SetVariableArray_Parms, NULL );

	pFnSetVariableArray->FunctionFlags |= 0x400;

	return SetVariableArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableStringArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct TArray<struct FString>  Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMovie::GetVariableStringArray ( struct FString Path, int Index, struct TArray<struct FString>* Arg )
{
	static UFunction* pFnGetVariableStringArray = NULL;

	if ( ! pFnGetVariableStringArray )
		pFnGetVariableStringArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetVariableStringArray" );

	UGFxMovie_execGetVariableStringArray_Parms GetVariableStringArray_Parms;
	memcpy ( &GetVariableStringArray_Parms.Path, &Path, 0x10 );
	GetVariableStringArray_Parms.Index = Index;

	pFnGetVariableStringArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableStringArray, &GetVariableStringArray_Parms, NULL );

	pFnGetVariableStringArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableStringArray_Parms.Arg, 0x10 );

	return GetVariableStringArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableFloatArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct TArray<float>           Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMovie::GetVariableFloatArray ( struct FString Path, int Index, struct TArray<float>* Arg )
{
	static UFunction* pFnGetVariableFloatArray = NULL;

	if ( ! pFnGetVariableFloatArray )
		pFnGetVariableFloatArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetVariableFloatArray" );

	UGFxMovie_execGetVariableFloatArray_Parms GetVariableFloatArray_Parms;
	memcpy ( &GetVariableFloatArray_Parms.Path, &Path, 0x10 );
	GetVariableFloatArray_Parms.Index = Index;

	pFnGetVariableFloatArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableFloatArray, &GetVariableFloatArray_Parms, NULL );

	pFnGetVariableFloatArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableFloatArray_Parms.Arg, 0x10 );

	return GetVariableFloatArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableIntArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct TArray<int>             Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMovie::GetVariableIntArray ( struct FString Path, int Index, struct TArray<int>* Arg )
{
	static UFunction* pFnGetVariableIntArray = NULL;

	if ( ! pFnGetVariableIntArray )
		pFnGetVariableIntArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetVariableIntArray" );

	UGFxMovie_execGetVariableIntArray_Parms GetVariableIntArray_Parms;
	memcpy ( &GetVariableIntArray_Parms.Path, &Path, 0x10 );
	GetVariableIntArray_Parms.Index = Index;

	pFnGetVariableIntArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableIntArray, &GetVariableIntArray_Parms, NULL );

	pFnGetVariableIntArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableIntArray_Parms.Arg, 0x10 );

	return GetVariableIntArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableArray
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct TArray<struct FASValue> Arg                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxMovie::GetVariableArray ( struct FString Path, int Index, struct TArray<struct FASValue>* Arg )
{
	static UFunction* pFnGetVariableArray = NULL;

	if ( ! pFnGetVariableArray )
		pFnGetVariableArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetVariableArray" );

	UGFxMovie_execGetVariableArray_Parms GetVariableArray_Parms;
	memcpy ( &GetVariableArray_Parms.Path, &Path, 0x10 );
	GetVariableArray_Parms.Index = Index;

	pFnGetVariableArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableArray, &GetVariableArray_Parms, NULL );

	pFnGetVariableArray->FunctionFlags |= 0x400;

	if ( Arg )
		memcpy ( Arg, &GetVariableArray_Parms.Arg, 0x10 );

	return GetVariableArray_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetVariableString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMovie::SetVariableString ( struct FString Path, struct FString S )
{
	static UFunction* pFnSetVariableString = NULL;

	if ( ! pFnSetVariableString )
		pFnSetVariableString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetVariableString" );

	UGFxMovie_execSetVariableString_Parms SetVariableString_Parms;
	memcpy ( &SetVariableString_Parms.Path, &Path, 0x10 );
	memcpy ( &SetVariableString_Parms.S, &S, 0x10 );

	pFnSetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableString, &SetVariableString_Parms, NULL );

	pFnSetVariableString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetVariableNumber
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

void UGFxMovie::SetVariableNumber ( struct FString Path, float F )
{
	static UFunction* pFnSetVariableNumber = NULL;

	if ( ! pFnSetVariableNumber )
		pFnSetVariableNumber = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetVariableNumber" );

	UGFxMovie_execSetVariableNumber_Parms SetVariableNumber_Parms;
	memcpy ( &SetVariableNumber_Parms.Path, &Path, 0x10 );
	SetVariableNumber_Parms.F = F;

	pFnSetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableNumber, &SetVariableNumber_Parms, NULL );

	pFnSetVariableNumber->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetVariableBool
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  B                              ( CPF_Parm )

void UGFxMovie::SetVariableBool ( struct FString Path, unsigned long B )
{
	static UFunction* pFnSetVariableBool = NULL;

	if ( ! pFnSetVariableBool )
		pFnSetVariableBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetVariableBool" );

	UGFxMovie_execSetVariableBool_Parms SetVariableBool_Parms;
	memcpy ( &SetVariableBool_Parms.Path, &Path, 0x10 );
	SetVariableBool_Parms.B = B;

	pFnSetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariableBool, &SetVariableBool_Parms, NULL );

	pFnSetVariableBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetVariable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxMovie::SetVariable ( struct FString Path, struct FASValue Arg )
{
	static UFunction* pFnSetVariable = NULL;

	if ( ! pFnSetVariable )
		pFnSetVariable = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetVariable" );

	UGFxMovie_execSetVariable_Parms SetVariable_Parms;
	memcpy ( &SetVariable_Parms.Path, &Path, 0x10 );
	memcpy ( &SetVariable_Parms.Arg, &Arg, 0x1C );

	pFnSetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVariable, &SetVariable_Parms, NULL );

	pFnSetVariable->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.GetVariableString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxMovie::GetVariableString ( struct FString Path )
{
	static UFunction* pFnGetVariableString = NULL;

	if ( ! pFnGetVariableString )
		pFnGetVariableString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetVariableString" );

	UGFxMovie_execGetVariableString_Parms GetVariableString_Parms;
	memcpy ( &GetVariableString_Parms.Path, &Path, 0x10 );

	pFnGetVariableString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableString, &GetVariableString_Parms, NULL );

	pFnGetVariableString->FunctionFlags |= 0x400;

	return GetVariableString_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableNumber
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

float UGFxMovie::GetVariableNumber ( struct FString Path )
{
	static UFunction* pFnGetVariableNumber = NULL;

	if ( ! pFnGetVariableNumber )
		pFnGetVariableNumber = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetVariableNumber" );

	UGFxMovie_execGetVariableNumber_Parms GetVariableNumber_Parms;
	memcpy ( &GetVariableNumber_Parms.Path, &Path, 0x10 );

	pFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableNumber, &GetVariableNumber_Parms, NULL );

	pFnGetVariableNumber->FunctionFlags |= 0x400;

	return GetVariableNumber_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariableBool
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxMovie::GetVariableBool ( struct FString Path )
{
	static UFunction* pFnGetVariableBool = NULL;

	if ( ! pFnGetVariableBool )
		pFnGetVariableBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetVariableBool" );

	UGFxMovie_execGetVariableBool_Parms GetVariableBool_Parms;
	memcpy ( &GetVariableBool_Parms.Path, &Path, 0x10 );

	pFnGetVariableBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariableBool, &GetVariableBool_Parms, NULL );

	pFnGetVariableBool->FunctionFlags |= 0x400;

	return GetVariableBool_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.GetVariable
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxMovie::GetVariable ( struct FString Path )
{
	static UFunction* pFnGetVariable = NULL;

	if ( ! pFnGetVariable )
		pFnGetVariable = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetVariable" );

	UGFxMovie_execGetVariable_Parms GetVariable_Parms;
	memcpy ( &GetVariable_Parms.Path, &Path, 0x10 );

	pFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVariable, &GetVariable_Parms, NULL );

	pFnGetVariable->FunctionFlags |= 0x400;

	return GetVariable_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.PublishDataStoreValues
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMovie::PublishDataStoreValues ( )
{
	static UFunction* pFnPublishDataStoreValues = NULL;

	if ( ! pFnPublishDataStoreValues )
		pFnPublishDataStoreValues = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.PublishDataStoreValues" );

	UGFxMovie_execPublishDataStoreValues_Parms PublishDataStoreValues_Parms;

	pFnPublishDataStoreValues->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPublishDataStoreValues, &PublishDataStoreValues_Parms, NULL );

	pFnPublishDataStoreValues->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.RefreshDataStoreBindings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGFxMovie::RefreshDataStoreBindings ( )
{
	static UFunction* pFnRefreshDataStoreBindings = NULL;

	if ( ! pFnRefreshDataStoreBindings )
		pFnRefreshDataStoreBindings = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.RefreshDataStoreBindings" );

	UGFxMovie_execRefreshDataStoreBindings_Parms RefreshDataStoreBindings_Parms;

	pFnRefreshDataStoreBindings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshDataStoreBindings, &RefreshDataStoreBindings_Parms, NULL );

	pFnRefreshDataStoreBindings->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.Invoke
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )
// struct TArray<struct FASValue> Args                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FASValue UGFxMovie::Invoke ( struct FString method, struct TArray<struct FASValue>* Args )
{
	static UFunction* pFnInvoke = NULL;

	if ( ! pFnInvoke )
		pFnInvoke = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.Invoke" );

	UGFxMovie_execInvoke_Parms Invoke_Parms;
	memcpy ( &Invoke_Parms.method, &method, 0x10 );

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvoke, &Invoke_Parms, NULL );

	pFnInvoke->FunctionFlags |= 0x400;

	if ( Args )
		memcpy ( Args, &Invoke_Parms.Args, 0x10 );

	return Invoke_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetTimingMode
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  mode                           ( CPF_Parm )

void UGFxMovie::SetTimingMode ( unsigned char mode )
{
	static UFunction* pFnSetTimingMode = NULL;

	if ( ! pFnSetTimingMode )
		pFnSetTimingMode = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetTimingMode" );

	UGFxMovie_execSetTimingMode_Parms SetTimingMode_Parms;
	SetTimingMode_Parms.mode = mode;

	pFnSetTimingMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetTimingMode, &SetTimingMode_Parms, NULL );

	pFnSetTimingMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.Pause
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  pauseplay                      ( CPF_OptionalParm | CPF_Parm )

void UGFxMovie::Pause ( unsigned long pauseplay )
{
	static UFunction* pFnPause = NULL;

	if ( ! pFnPause )
		pFnPause = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.Pause" );

	UGFxMovie_execPause_Parms Pause_Parms;
	Pause_Parms.pauseplay = pauseplay;

	pFnPause->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPause, &Pause_Parms, NULL );

	pFnPause->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.Advance
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// float                          Time                           ( CPF_Parm )

void UGFxMovie::Advance ( float Time )
{
	static UFunction* pFnAdvance = NULL;

	if ( ! pFnAdvance )
		pFnAdvance = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.Advance" );

	UGFxMovie_execAdvance_Parms Advance_Parms;
	Advance_Parms.Time = Time;

	pFnAdvance->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAdvance, &Advance_Parms, NULL );

	pFnAdvance->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetExternalTexture
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Resource                       ( CPF_Parm | CPF_NeedCtorLink )
// class UTexture*                Texture                        ( CPF_Parm )

bool UGFxMovie::SetExternalTexture ( struct FString Resource, class UTexture* Texture )
{
	static UFunction* pFnSetExternalTexture = NULL;

	if ( ! pFnSetExternalTexture )
		pFnSetExternalTexture = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetExternalTexture" );

	UGFxMovie_execSetExternalTexture_Parms SetExternalTexture_Parms;
	memcpy ( &SetExternalTexture_Parms.Resource, &Resource, 0x10 );
	SetExternalTexture_Parms.Texture = Texture;

	pFnSetExternalTexture->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetExternalTexture, &SetExternalTexture_Parms, NULL );

	pFnSetExternalTexture->FunctionFlags |= 0x400;

	return SetExternalTexture_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.FlushPlayerInput
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  capturekeysonly                ( CPF_Parm )

void UGFxMovie::FlushPlayerInput ( unsigned long capturekeysonly )
{
	static UFunction* pFnFlushPlayerInput = NULL;

	if ( ! pFnFlushPlayerInput )
		pFnFlushPlayerInput = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.FlushPlayerInput" );

	UGFxMovie_execFlushPlayerInput_Parms FlushPlayerInput_Parms;
	FlushPlayerInput_Parms.capturekeysonly = capturekeysonly;

	pFnFlushPlayerInput->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFlushPlayerInput, &FlushPlayerInput_Parms, NULL );

	pFnFlushPlayerInput->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.ClearFocusIgnoreKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMovie::ClearFocusIgnoreKeys ( )
{
	static UFunction* pFnClearFocusIgnoreKeys = NULL;

	if ( ! pFnClearFocusIgnoreKeys )
		pFnClearFocusIgnoreKeys = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.ClearFocusIgnoreKeys" );

	UGFxMovie_execClearFocusIgnoreKeys_Parms ClearFocusIgnoreKeys_Parms;

	pFnClearFocusIgnoreKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearFocusIgnoreKeys, &ClearFocusIgnoreKeys_Parms, NULL );

	pFnClearFocusIgnoreKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.AddFocusIgnoreKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )

void UGFxMovie::AddFocusIgnoreKey ( struct FName Key )
{
	static UFunction* pFnAddFocusIgnoreKey = NULL;

	if ( ! pFnAddFocusIgnoreKey )
		pFnAddFocusIgnoreKey = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.AddFocusIgnoreKey" );

	UGFxMovie_execAddFocusIgnoreKey_Parms AddFocusIgnoreKey_Parms;
	memcpy ( &AddFocusIgnoreKey_Parms.Key, &Key, 0x8 );

	pFnAddFocusIgnoreKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddFocusIgnoreKey, &AddFocusIgnoreKey_Parms, NULL );

	pFnAddFocusIgnoreKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.ClearCaptureKeys
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxMovie::ClearCaptureKeys ( )
{
	static UFunction* pFnClearCaptureKeys = NULL;

	if ( ! pFnClearCaptureKeys )
		pFnClearCaptureKeys = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.ClearCaptureKeys" );

	UGFxMovie_execClearCaptureKeys_Parms ClearCaptureKeys_Parms;

	pFnClearCaptureKeys->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearCaptureKeys, &ClearCaptureKeys_Parms, NULL );

	pFnClearCaptureKeys->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.AddCaptureKey
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   Key                            ( CPF_Parm )

void UGFxMovie::AddCaptureKey ( struct FName Key )
{
	static UFunction* pFnAddCaptureKey = NULL;

	if ( ! pFnAddCaptureKey )
		pFnAddCaptureKey = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.AddCaptureKey" );

	UGFxMovie_execAddCaptureKey_Parms AddCaptureKey_Parms;
	memcpy ( &AddCaptureKey_Parms.Key, &Key, 0x8 );

	pFnAddCaptureKey->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAddCaptureKey, &AddCaptureKey_Parms, NULL );

	pFnAddCaptureKey->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetFocus
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  captureInput                   ( CPF_Parm )
// unsigned long                  Focus                          ( CPF_OptionalParm | CPF_Parm )

void UGFxMovie::SetFocus ( unsigned long captureInput, unsigned long Focus )
{
	static UFunction* pFnSetFocus = NULL;

	if ( ! pFnSetFocus )
		pFnSetFocus = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetFocus" );

	UGFxMovie_execSetFocus_Parms SetFocus_Parms;
	SetFocus_Parms.captureInput = captureInput;
	SetFocus_Parms.Focus = Focus;

	pFnSetFocus->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFocus, &SetFocus_Parms, NULL );

	pFnSetFocus->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetSceneDPG
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  NewDPG                         ( CPF_Parm )

void UGFxMovie::SetSceneDPG ( unsigned char NewDPG )
{
	static UFunction* pFnSetSceneDPG = NULL;

	if ( ! pFnSetSceneDPG )
		pFnSetSceneDPG = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetSceneDPG" );

	UGFxMovie_execSetSceneDPG_Parms SetSceneDPG_Parms;
	SetSceneDPG_Parms.NewDPG = NewDPG;

	pFnSetSceneDPG->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetSceneDPG, &SetSceneDPG_Parms, NULL );

	pFnSetSceneDPG->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetPerspective3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 matPersp                       ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGFxMovie::SetPerspective3D ( struct FMatrix* matPersp )
{
	static UFunction* pFnSetPerspective3D = NULL;

	if ( ! pFnSetPerspective3D )
		pFnSetPerspective3D = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetPerspective3D" );

	UGFxMovie_execSetPerspective3D_Parms SetPerspective3D_Parms;

	pFnSetPerspective3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPerspective3D, &SetPerspective3D_Parms, NULL );

	pFnSetPerspective3D->FunctionFlags |= 0x400;

	if ( matPersp )
		memcpy ( matPersp, &SetPerspective3D_Parms.matPersp, 0x40 );
};

// Function GFxUI.GFxMovie.SetView3D
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 matView                        ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGFxMovie::SetView3D ( struct FMatrix* matView )
{
	static UFunction* pFnSetView3D = NULL;

	if ( ! pFnSetView3D )
		pFnSetView3D = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetView3D" );

	UGFxMovie_execSetView3D_Parms SetView3D_Parms;

	pFnSetView3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetView3D, &SetView3D_Parms, NULL );

	pFnSetView3D->FunctionFlags |= 0x400;

	if ( matView )
		memcpy ( matView, &SetView3D_Parms.matView, 0x40 );
};

// Function GFxUI.GFxMovie.GetVisibleFrameRect
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          x0                             ( CPF_Parm | CPF_OutParm )
// float                          y0                             ( CPF_Parm | CPF_OutParm )
// float                          X1                             ( CPF_Parm | CPF_OutParm )
// float                          Y1                             ( CPF_Parm | CPF_OutParm )

void UGFxMovie::GetVisibleFrameRect ( float* x0, float* y0, float* X1, float* Y1 )
{
	static UFunction* pFnGetVisibleFrameRect = NULL;

	if ( ! pFnGetVisibleFrameRect )
		pFnGetVisibleFrameRect = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetVisibleFrameRect" );

	UGFxMovie_execGetVisibleFrameRect_Parms GetVisibleFrameRect_Parms;

	pFnGetVisibleFrameRect->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetVisibleFrameRect, &GetVisibleFrameRect_Parms, NULL );

	pFnGetVisibleFrameRect->FunctionFlags |= 0x400;

	if ( x0 )
		*x0 = GetVisibleFrameRect_Parms.x0;

	if ( y0 )
		*y0 = GetVisibleFrameRect_Parms.y0;

	if ( X1 )
		*X1 = GetVisibleFrameRect_Parms.X1;

	if ( Y1 )
		*Y1 = GetVisibleFrameRect_Parms.Y1;
};

// Function GFxUI.GFxMovie.SetAlignment
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  A                              ( CPF_Parm )

void UGFxMovie::SetAlignment ( unsigned char A )
{
	static UFunction* pFnSetAlignment = NULL;

	if ( ! pFnSetAlignment )
		pFnSetAlignment = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetAlignment" );

	UGFxMovie_execSetAlignment_Parms SetAlignment_Parms;
	SetAlignment_Parms.A = A;

	pFnSetAlignment->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetAlignment, &SetAlignment_Parms, NULL );

	pFnSetAlignment->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetViewScaleMode
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned char                  sm                             ( CPF_Parm )

void UGFxMovie::SetViewScaleMode ( unsigned char sm )
{
	static UFunction* pFnSetViewScaleMode = NULL;

	if ( ! pFnSetViewScaleMode )
		pFnSetViewScaleMode = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetViewScaleMode" );

	UGFxMovie_execSetViewScaleMode_Parms SetViewScaleMode_Parms;
	SetViewScaleMode_Parms.sm = sm;

	pFnSetViewScaleMode->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewScaleMode, &SetViewScaleMode_Parms, NULL );

	pFnSetViewScaleMode->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.SetViewport
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            X                              ( CPF_Parm )
// int                            Y                              ( CPF_Parm )
// int                            Width                          ( CPF_Parm )
// int                            Height                         ( CPF_Parm )

void UGFxMovie::SetViewport ( int X, int Y, int Width, int Height )
{
	static UFunction* pFnSetViewport = NULL;

	if ( ! pFnSetViewport )
		pFnSetViewport = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetViewport" );

	UGFxMovie_execSetViewport_Parms SetViewport_Parms;
	SetViewport_Parms.X = X;
	SetViewport_Parms.Y = Y;
	SetViewport_Parms.Width = Width;
	SetViewport_Parms.Height = Height;

	pFnSetViewport->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetViewport, &SetViewport_Parms, NULL );

	pFnSetViewport->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.GetGameViewportClient
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGameViewportClient*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UGameViewportClient* UGFxMovie::GetGameViewportClient ( )
{
	static UFunction* pFnGetGameViewportClient = NULL;

	if ( ! pFnGetGameViewportClient )
		pFnGetGameViewportClient = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.GetGameViewportClient" );

	UGFxMovie_execGetGameViewportClient_Parms GetGameViewportClient_Parms;

	pFnGetGameViewportClient->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetGameViewportClient, &GetGameViewportClient_Parms, NULL );

	pFnGetGameViewportClient->FunctionFlags |= 0x400;

	return GetGameViewportClient_Parms.ReturnValue;
};

// Function GFxUI.GFxMovie.SetMovieInfo
// [0x00020002] 
// Parameters infos:
// class UGFxMovieInfo*           Data                           ( CPF_Parm )

void UGFxMovie::SetMovieInfo ( class UGFxMovieInfo* Data )
{
	static UFunction* pFnSetMovieInfo = NULL;

	if ( ! pFnSetMovieInfo )
		pFnSetMovieInfo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.SetMovieInfo" );

	UGFxMovie_execSetMovieInfo_Parms SetMovieInfo_Parms;
	SetMovieInfo_Parms.Data = Data;

	this->ProcessEvent ( pFnSetMovieInfo, &SetMovieInfo_Parms, NULL );
};

// Function GFxUI.GFxMovie.OnClose
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UGFxMovie::eventOnClose ( )
{
	static UFunction* pFnOnClose = NULL;

	if ( ! pFnOnClose )
		pFnOnClose = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.OnClose" );

	UGFxMovie_eventOnClose_Parms OnClose_Parms;

	this->ProcessEvent ( pFnOnClose, &OnClose_Parms, NULL );
};

// Function GFxUI.GFxMovie.Close
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  Unload                         ( CPF_OptionalParm | CPF_Parm )

void UGFxMovie::Close ( unsigned long Unload )
{
	static UFunction* pFnClose = NULL;

	if ( ! pFnClose )
		pFnClose = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.Close" );

	UGFxMovie_execClose_Parms Close_Parms;
	Close_Parms.Unload = Unload;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClose, &Close_Parms, NULL );

	pFnClose->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxMovie.Start
// [0x00024C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  StartPaused                    ( CPF_OptionalParm | CPF_Parm )

bool UGFxMovie::eventStart ( unsigned long StartPaused )
{
	static UFunction* pFnStart = NULL;

	if ( ! pFnStart )
		pFnStart = UObject::FindObject< UFunction > ( "Function GFxUI.GFxMovie.Start" );

	UGFxMovie_eventStart_Parms Start_Parms;
	Start_Parms.StartPaused = StartPaused;

	pFnStart->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnStart, &Start_Parms, NULL );

	pFnStart->FunctionFlags |= 0x400;

	return Start_Parms.ReturnValue;
};



class UClass* UGFxMovieInfo::pClassPointer = NULL;

class UClass* UGFxMovieInfo::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxMovieInfo" );

		return pClassPointer;
	};



class UClass* UGFxValue::pClassPointer = NULL;

class UClass* UGFxValue::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxValue" );

		return pClassPointer;
	};

// Function GFxUI.GFxValue.ActionScriptSetFunctionOn
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxValue*               Target                         ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::ActionScriptSetFunctionOn ( class UGFxValue* Target, struct FString member )
{
	static UFunction* pFnActionScriptSetFunctionOn = NULL;

	if ( ! pFnActionScriptSetFunctionOn )
		pFnActionScriptSetFunctionOn = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.ActionScriptSetFunctionOn" );

	UGFxValue_execActionScriptSetFunctionOn_Parms ActionScriptSetFunctionOn_Parms;
	ActionScriptSetFunctionOn_Parms.Target = Target;
	memcpy ( &ActionScriptSetFunctionOn_Parms.member, &member, 0x10 );

	pFnActionScriptSetFunctionOn->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunctionOn, &ActionScriptSetFunctionOn_Parms, NULL );

	pFnActionScriptSetFunctionOn->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.ActionScriptSetFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::ActionScriptSetFunction ( struct FString member )
{
	static UFunction* pFnActionScriptSetFunction = NULL;

	if ( ! pFnActionScriptSetFunction )
		pFnActionScriptSetFunction = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.ActionScriptSetFunction" );

	UGFxValue_execActionScriptSetFunction_Parms ActionScriptSetFunction_Parms;
	memcpy ( &ActionScriptSetFunction_Parms.member, &member, 0x10 );

	pFnActionScriptSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptSetFunction, &ActionScriptSetFunction_Parms, NULL );

	pFnActionScriptSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.ActionScriptArray
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct TArray<class UGFxValue*> ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

struct TArray<class UGFxValue*> UGFxValue::ActionScriptArray ( struct FString Path )
{
	static UFunction* pFnActionScriptArray = NULL;

	if ( ! pFnActionScriptArray )
		pFnActionScriptArray = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.ActionScriptArray" );

	UGFxValue_execActionScriptArray_Parms ActionScriptArray_Parms;
	memcpy ( &ActionScriptArray_Parms.Path, &Path, 0x10 );

	pFnActionScriptArray->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptArray, &ActionScriptArray_Parms, NULL );

	pFnActionScriptArray->FunctionFlags |= 0x400;

	return ActionScriptArray_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.ActionScriptObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Path                           ( CPF_Parm | CPF_NeedCtorLink )

class UGFxValue* UGFxValue::ActionScriptObject ( struct FString Path )
{
	static UFunction* pFnActionScriptObject = NULL;

	if ( ! pFnActionScriptObject )
		pFnActionScriptObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.ActionScriptObject" );

	UGFxValue_execActionScriptObject_Parms ActionScriptObject_Parms;
	memcpy ( &ActionScriptObject_Parms.Path, &Path, 0x10 );

	pFnActionScriptObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptObject, &ActionScriptObject_Parms, NULL );

	pFnActionScriptObject->FunctionFlags |= 0x400;

	return ActionScriptObject_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.ActionScriptString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxValue::ActionScriptString ( struct FString method )
{
	static UFunction* pFnActionScriptString = NULL;

	if ( ! pFnActionScriptString )
		pFnActionScriptString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.ActionScriptString" );

	UGFxValue_execActionScriptString_Parms ActionScriptString_Parms;
	memcpy ( &ActionScriptString_Parms.method, &method, 0x10 );

	pFnActionScriptString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptString, &ActionScriptString_Parms, NULL );

	pFnActionScriptString->FunctionFlags |= 0x400;

	return ActionScriptString_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.ActionScriptFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

float UGFxValue::ActionScriptFloat ( struct FString method )
{
	static UFunction* pFnActionScriptFloat = NULL;

	if ( ! pFnActionScriptFloat )
		pFnActionScriptFloat = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.ActionScriptFloat" );

	UGFxValue_execActionScriptFloat_Parms ActionScriptFloat_Parms;
	memcpy ( &ActionScriptFloat_Parms.method, &method, 0x10 );

	pFnActionScriptFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptFloat, &ActionScriptFloat_Parms, NULL );

	pFnActionScriptFloat->FunctionFlags |= 0x400;

	return ActionScriptFloat_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.ActionScriptInt
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

int UGFxValue::ActionScriptInt ( struct FString method )
{
	static UFunction* pFnActionScriptInt = NULL;

	if ( ! pFnActionScriptInt )
		pFnActionScriptInt = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.ActionScriptInt" );

	UGFxValue_execActionScriptInt_Parms ActionScriptInt_Parms;
	memcpy ( &ActionScriptInt_Parms.method, &method, 0x10 );

	pFnActionScriptInt->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptInt, &ActionScriptInt_Parms, NULL );

	pFnActionScriptInt->FunctionFlags |= 0x400;

	return ActionScriptInt_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.ActionScriptVoid
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 method                         ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::ActionScriptVoid ( struct FString method )
{
	static UFunction* pFnActionScriptVoid = NULL;

	if ( ! pFnActionScriptVoid )
		pFnActionScriptVoid = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.ActionScriptVoid" );

	UGFxValue_execActionScriptVoid_Parms ActionScriptVoid_Parms;
	memcpy ( &ActionScriptVoid_Parms.method, &method, 0x10 );

	pFnActionScriptVoid->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnActionScriptVoid, &ActionScriptVoid_Parms, NULL );

	pFnActionScriptVoid->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::SetElementMemberString ( int Index, struct FString member, struct FString S )
{
	static UFunction* pFnSetElementMemberString = NULL;

	if ( ! pFnSetElementMemberString )
		pFnSetElementMemberString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementMemberString" );

	UGFxValue_execSetElementMemberString_Parms SetElementMemberString_Parms;
	SetElementMemberString_Parms.Index = Index;
	memcpy ( &SetElementMemberString_Parms.member, &member, 0x10 );
	memcpy ( &SetElementMemberString_Parms.S, &S, 0x10 );

	pFnSetElementMemberString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberString, &SetElementMemberString_Parms, NULL );

	pFnSetElementMemberString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementMemberNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

void UGFxValue::SetElementMemberNumber ( int Index, struct FString member, float F )
{
	static UFunction* pFnSetElementMemberNumber = NULL;

	if ( ! pFnSetElementMemberNumber )
		pFnSetElementMemberNumber = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementMemberNumber" );

	UGFxValue_execSetElementMemberNumber_Parms SetElementMemberNumber_Parms;
	SetElementMemberNumber_Parms.Index = Index;
	memcpy ( &SetElementMemberNumber_Parms.member, &member, 0x10 );
	SetElementMemberNumber_Parms.F = F;

	pFnSetElementMemberNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberNumber, &SetElementMemberNumber_Parms, NULL );

	pFnSetElementMemberNumber->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  B                              ( CPF_Parm )

void UGFxValue::SetElementMemberBool ( int Index, struct FString member, unsigned long B )
{
	static UFunction* pFnSetElementMemberBool = NULL;

	if ( ! pFnSetElementMemberBool )
		pFnSetElementMemberBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementMemberBool" );

	UGFxValue_execSetElementMemberBool_Parms SetElementMemberBool_Parms;
	SetElementMemberBool_Parms.Index = Index;
	memcpy ( &SetElementMemberBool_Parms.member, &member, 0x10 );
	SetElementMemberBool_Parms.B = B;

	pFnSetElementMemberBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberBool, &SetElementMemberBool_Parms, NULL );

	pFnSetElementMemberBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementMemberObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxValue*               val                            ( CPF_Parm )

void UGFxValue::SetElementMemberObject ( int Index, struct FString member, class UGFxValue* val )
{
	static UFunction* pFnSetElementMemberObject = NULL;

	if ( ! pFnSetElementMemberObject )
		pFnSetElementMemberObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementMemberObject" );

	UGFxValue_execSetElementMemberObject_Parms SetElementMemberObject_Parms;
	SetElementMemberObject_Parms.Index = Index;
	memcpy ( &SetElementMemberObject_Parms.member, &member, 0x10 );
	SetElementMemberObject_Parms.val = val;

	pFnSetElementMemberObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMemberObject, &SetElementMemberObject_Parms, NULL );

	pFnSetElementMemberObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::SetElementMember ( int Index, struct FString member, struct FASValue Arg )
{
	static UFunction* pFnSetElementMember = NULL;

	if ( ! pFnSetElementMember )
		pFnSetElementMember = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementMember" );

	UGFxValue_execSetElementMember_Parms SetElementMember_Parms;
	SetElementMember_Parms.Index = Index;
	memcpy ( &SetElementMember_Parms.member, &member, 0x10 );
	memcpy ( &SetElementMember_Parms.Arg, &Arg, 0x1C );

	pFnSetElementMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementMember, &SetElementMember_Parms, NULL );

	pFnSetElementMember->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.GetElementMemberString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxValue::GetElementMemberString ( int Index, struct FString member )
{
	static UFunction* pFnGetElementMemberString = NULL;

	if ( ! pFnGetElementMemberString )
		pFnGetElementMemberString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementMemberString" );

	UGFxValue_execGetElementMemberString_Parms GetElementMemberString_Parms;
	GetElementMemberString_Parms.Index = Index;
	memcpy ( &GetElementMemberString_Parms.member, &member, 0x10 );

	pFnGetElementMemberString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberString, &GetElementMemberString_Parms, NULL );

	pFnGetElementMemberString->FunctionFlags |= 0x400;

	return GetElementMemberString_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetElementMemberNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

float UGFxValue::GetElementMemberNumber ( int Index, struct FString member )
{
	static UFunction* pFnGetElementMemberNumber = NULL;

	if ( ! pFnGetElementMemberNumber )
		pFnGetElementMemberNumber = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementMemberNumber" );

	UGFxValue_execGetElementMemberNumber_Parms GetElementMemberNumber_Parms;
	GetElementMemberNumber_Parms.Index = Index;
	memcpy ( &GetElementMemberNumber_Parms.member, &member, 0x10 );

	pFnGetElementMemberNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberNumber, &GetElementMemberNumber_Parms, NULL );

	pFnGetElementMemberNumber->FunctionFlags |= 0x400;

	return GetElementMemberNumber_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetElementMemberBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxValue::GetElementMemberBool ( int Index, struct FString member )
{
	static UFunction* pFnGetElementMemberBool = NULL;

	if ( ! pFnGetElementMemberBool )
		pFnGetElementMemberBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementMemberBool" );

	UGFxValue_execGetElementMemberBool_Parms GetElementMemberBool_Parms;
	GetElementMemberBool_Parms.Index = Index;
	memcpy ( &GetElementMemberBool_Parms.member, &member, 0x10 );

	pFnGetElementMemberBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberBool, &GetElementMemberBool_Parms, NULL );

	pFnGetElementMemberBool->FunctionFlags |= 0x400;

	return GetElementMemberBool_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetElementMemberObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxValue* UGFxValue::GetElementMemberObject ( int Index, struct FString member, class UClass* Type )
{
	static UFunction* pFnGetElementMemberObject = NULL;

	if ( ! pFnGetElementMemberObject )
		pFnGetElementMemberObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementMemberObject" );

	UGFxValue_execGetElementMemberObject_Parms GetElementMemberObject_Parms;
	GetElementMemberObject_Parms.Index = Index;
	memcpy ( &GetElementMemberObject_Parms.member, &member, 0x10 );
	GetElementMemberObject_Parms.Type = Type;

	pFnGetElementMemberObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMemberObject, &GetElementMemberObject_Parms, NULL );

	pFnGetElementMemberObject->FunctionFlags |= 0x400;

	return GetElementMemberObject_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetElementMember
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxValue::GetElementMember ( int Index, struct FString member )
{
	static UFunction* pFnGetElementMember = NULL;

	if ( ! pFnGetElementMember )
		pFnGetElementMember = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementMember" );

	UGFxValue_execGetElementMember_Parms GetElementMember_Parms;
	GetElementMember_Parms.Index = Index;
	memcpy ( &GetElementMember_Parms.member, &member, 0x10 );

	pFnGetElementMember->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementMember, &GetElementMember_Parms, NULL );

	pFnGetElementMember->FunctionFlags |= 0x400;

	return GetElementMember_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.SetElementColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FASColorTransform       cxform                         ( CPF_Parm )

void UGFxValue::SetElementColorTransform ( int Index, struct FASColorTransform cxform )
{
	static UFunction* pFnSetElementColorTransform = NULL;

	if ( ! pFnSetElementColorTransform )
		pFnSetElementColorTransform = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementColorTransform" );

	UGFxValue_execSetElementColorTransform_Parms SetElementColorTransform_Parms;
	SetElementColorTransform_Parms.Index = Index;
	memcpy ( &SetElementColorTransform_Parms.cxform, &cxform, 0x20 );

	pFnSetElementColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementColorTransform, &SetElementColorTransform_Parms, NULL );

	pFnSetElementColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

void UGFxValue::SetElementPosition ( int Index, float X, float Y )
{
	static UFunction* pFnSetElementPosition = NULL;

	if ( ! pFnSetElementPosition )
		pFnSetElementPosition = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementPosition" );

	UGFxValue_execSetElementPosition_Parms SetElementPosition_Parms;
	SetElementPosition_Parms.Index = Index;
	SetElementPosition_Parms.X = X;
	SetElementPosition_Parms.Y = Y;

	pFnSetElementPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementPosition, &SetElementPosition_Parms, NULL );

	pFnSetElementPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// unsigned long                  visible                        ( CPF_Parm )

void UGFxValue::SetElementVisible ( int Index, unsigned long visible )
{
	static UFunction* pFnSetElementVisible = NULL;

	if ( ! pFnSetElementVisible )
		pFnSetElementVisible = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementVisible" );

	UGFxValue_execSetElementVisible_Parms SetElementVisible_Parms;
	SetElementVisible_Parms.Index = Index;
	SetElementVisible_Parms.visible = visible;

	pFnSetElementVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementVisible, &SetElementVisible_Parms, NULL );

	pFnSetElementVisible->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FMatrix                 M                              ( CPF_Parm )

void UGFxValue::SetElementDisplayMatrix ( int Index, struct FMatrix M )
{
	static UFunction* pFnSetElementDisplayMatrix = NULL;

	if ( ! pFnSetElementDisplayMatrix )
		pFnSetElementDisplayMatrix = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementDisplayMatrix" );

	UGFxValue_execSetElementDisplayMatrix_Parms SetElementDisplayMatrix_Parms;
	SetElementDisplayMatrix_Parms.Index = Index;
	memcpy ( &SetElementDisplayMatrix_Parms.M, &M, 0x40 );

	pFnSetElementDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementDisplayMatrix, &SetElementDisplayMatrix_Parms, NULL );

	pFnSetElementDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FASDisplayInfo          D                              ( CPF_Parm )

void UGFxValue::SetElementDisplayInfo ( int Index, struct FASDisplayInfo D )
{
	static UFunction* pFnSetElementDisplayInfo = NULL;

	if ( ! pFnSetElementDisplayInfo )
		pFnSetElementDisplayInfo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementDisplayInfo" );

	UGFxValue_execSetElementDisplayInfo_Parms SetElementDisplayInfo_Parms;
	SetElementDisplayInfo_Parms.Index = Index;
	memcpy ( &SetElementDisplayInfo_Parms.D, &D, 0x2C );

	pFnSetElementDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementDisplayInfo, &SetElementDisplayInfo_Parms, NULL );

	pFnSetElementDisplayInfo->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::SetElementString ( int Index, struct FString S )
{
	static UFunction* pFnSetElementString = NULL;

	if ( ! pFnSetElementString )
		pFnSetElementString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementString" );

	UGFxValue_execSetElementString_Parms SetElementString_Parms;
	SetElementString_Parms.Index = Index;
	memcpy ( &SetElementString_Parms.S, &S, 0x10 );

	pFnSetElementString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementString, &SetElementString_Parms, NULL );

	pFnSetElementString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// float                          F                              ( CPF_Parm )

void UGFxValue::SetElementNumber ( int Index, float F )
{
	static UFunction* pFnSetElementNumber = NULL;

	if ( ! pFnSetElementNumber )
		pFnSetElementNumber = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementNumber" );

	UGFxValue_execSetElementNumber_Parms SetElementNumber_Parms;
	SetElementNumber_Parms.Index = Index;
	SetElementNumber_Parms.F = F;

	pFnSetElementNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementNumber, &SetElementNumber_Parms, NULL );

	pFnSetElementNumber->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm )

void UGFxValue::SetElementBool ( int Index, unsigned long B )
{
	static UFunction* pFnSetElementBool = NULL;

	if ( ! pFnSetElementBool )
		pFnSetElementBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementBool" );

	UGFxValue_execSetElementBool_Parms SetElementBool_Parms;
	SetElementBool_Parms.Index = Index;
	SetElementBool_Parms.B = B;

	pFnSetElementBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementBool, &SetElementBool_Parms, NULL );

	pFnSetElementBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElementObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// class UGFxValue*               val                            ( CPF_Parm )

void UGFxValue::SetElementObject ( int Index, class UGFxValue* val )
{
	static UFunction* pFnSetElementObject = NULL;

	if ( ! pFnSetElementObject )
		pFnSetElementObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElementObject" );

	UGFxValue_execSetElementObject_Parms SetElementObject_Parms;
	SetElementObject_Parms.Index = Index;
	SetElementObject_Parms.val = val;

	pFnSetElementObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElementObject, &SetElementObject_Parms, NULL );

	pFnSetElementObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Index                          ( CPF_Parm )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::SetElement ( int Index, struct FASValue Arg )
{
	static UFunction* pFnSetElement = NULL;

	if ( ! pFnSetElement )
		pFnSetElement = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetElement" );

	UGFxValue_execSetElement_Parms SetElement_Parms;
	SetElement_Parms.Index = Index;
	memcpy ( &SetElement_Parms.Arg, &Arg, 0x1C );

	pFnSetElement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetElement, &SetElement_Parms, NULL );

	pFnSetElement->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.GetElementDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

struct FMatrix UGFxValue::GetElementDisplayMatrix ( int Index )
{
	static UFunction* pFnGetElementDisplayMatrix = NULL;

	if ( ! pFnGetElementDisplayMatrix )
		pFnGetElementDisplayMatrix = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementDisplayMatrix" );

	UGFxValue_execGetElementDisplayMatrix_Parms GetElementDisplayMatrix_Parms;
	GetElementDisplayMatrix_Parms.Index = Index;

	pFnGetElementDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementDisplayMatrix, &GetElementDisplayMatrix_Parms, NULL );

	pFnGetElementDisplayMatrix->FunctionFlags |= 0x400;

	return GetElementDisplayMatrix_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetElementDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASDisplayInfo          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

struct FASDisplayInfo UGFxValue::GetElementDisplayInfo ( int Index )
{
	static UFunction* pFnGetElementDisplayInfo = NULL;

	if ( ! pFnGetElementDisplayInfo )
		pFnGetElementDisplayInfo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementDisplayInfo" );

	UGFxValue_execGetElementDisplayInfo_Parms GetElementDisplayInfo_Parms;
	GetElementDisplayInfo_Parms.Index = Index;

	pFnGetElementDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementDisplayInfo, &GetElementDisplayInfo_Parms, NULL );

	pFnGetElementDisplayInfo->FunctionFlags |= 0x400;

	return GetElementDisplayInfo_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetElementString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FString UGFxValue::GetElementString ( int Index )
{
	static UFunction* pFnGetElementString = NULL;

	if ( ! pFnGetElementString )
		pFnGetElementString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementString" );

	UGFxValue_execGetElementString_Parms GetElementString_Parms;
	GetElementString_Parms.Index = Index;

	pFnGetElementString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementString, &GetElementString_Parms, NULL );

	pFnGetElementString->FunctionFlags |= 0x400;

	return GetElementString_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetElementNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

float UGFxValue::GetElementNumber ( int Index )
{
	static UFunction* pFnGetElementNumber = NULL;

	if ( ! pFnGetElementNumber )
		pFnGetElementNumber = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementNumber" );

	UGFxValue_execGetElementNumber_Parms GetElementNumber_Parms;
	GetElementNumber_Parms.Index = Index;

	pFnGetElementNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementNumber, &GetElementNumber_Parms, NULL );

	pFnGetElementNumber->FunctionFlags |= 0x400;

	return GetElementNumber_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetElementBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )

bool UGFxValue::GetElementBool ( int Index )
{
	static UFunction* pFnGetElementBool = NULL;

	if ( ! pFnGetElementBool )
		pFnGetElementBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementBool" );

	UGFxValue_execGetElementBool_Parms GetElementBool_Parms;
	GetElementBool_Parms.Index = Index;

	pFnGetElementBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementBool, &GetElementBool_Parms, NULL );

	pFnGetElementBool->FunctionFlags |= 0x400;

	return GetElementBool_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetElementObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Index                          ( CPF_Parm )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxValue* UGFxValue::GetElementObject ( int Index, class UClass* Type )
{
	static UFunction* pFnGetElementObject = NULL;

	if ( ! pFnGetElementObject )
		pFnGetElementObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElementObject" );

	UGFxValue_execGetElementObject_Parms GetElementObject_Parms;
	GetElementObject_Parms.Index = Index;
	GetElementObject_Parms.Type = Type;

	pFnGetElementObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElementObject, &GetElementObject_Parms, NULL );

	pFnGetElementObject->FunctionFlags |= 0x400;

	return GetElementObject_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetElement
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            Index                          ( CPF_Parm )

struct FASValue UGFxValue::GetElement ( int Index )
{
	static UFunction* pFnGetElement = NULL;

	if ( ! pFnGetElement )
		pFnGetElement = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetElement" );

	UGFxValue_execGetElement_Parms GetElement_Parms;
	GetElement_Parms.Index = Index;

	pFnGetElement->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetElement, &GetElement_Parms, NULL );

	pFnGetElement->FunctionFlags |= 0x400;

	return GetElement_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.SetMemberObjectText
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 sMember                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 sText                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bIsHTML                        ( CPF_OptionalParm | CPF_Parm )

void UGFxValue::SetMemberObjectText ( struct FString sMember, struct FString sText, unsigned long bIsHTML )
{
	static UFunction* pFnSetMemberObjectText = NULL;

	if ( ! pFnSetMemberObjectText )
		pFnSetMemberObjectText = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetMemberObjectText" );

	UGFxValue_execSetMemberObjectText_Parms SetMemberObjectText_Parms;
	memcpy ( &SetMemberObjectText_Parms.sMember, &sMember, 0x10 );
	memcpy ( &SetMemberObjectText_Parms.sText, &sText, 0x10 );
	SetMemberObjectText_Parms.bIsHTML = bIsHTML;

	pFnSetMemberObjectText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetMemberObjectText, &SetMemberObjectText_Parms, NULL );

	pFnSetMemberObjectText->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetText
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bIsHTML                        ( CPF_OptionalParm | CPF_Parm )

void UGFxValue::SetText ( struct FString Text, unsigned long bIsHTML )
{
	static UFunction* pFnSetText = NULL;

	if ( ! pFnSetText )
		pFnSetText = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetText" );

	UGFxValue_execSetText_Parms SetText_Parms;
	memcpy ( &SetText_Parms.Text, &Text, 0x10 );
	SetText_Parms.bIsHTML = bIsHTML;

	pFnSetText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetText, &SetText_Parms, NULL );

	pFnSetText->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.GetText
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UGFxValue::GetText ( )
{
	static UFunction* pFnGetText = NULL;

	if ( ! pFnGetText )
		pFnGetText = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetText" );

	UGFxValue_execGetText_Parms GetText_Parms;

	pFnGetText->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetText, &GetText_Parms, NULL );

	pFnGetText->FunctionFlags |= 0x400;

	return GetText_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.CastTo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
// class UClass*                  Type                           ( CPF_Parm )

class UGFxValue* UGFxValue::CastTo ( class UClass* Type )
{
	static UFunction* pFnCastTo = NULL;

	if ( ! pFnCastTo )
		pFnCastTo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.CastTo" );

	UGFxValue_execCastTo_Parms CastTo_Parms;
	CastTo_Parms.Type = Type;

	pFnCastTo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCastTo, &CastTo_Parms, NULL );

	pFnCastTo->FunctionFlags |= 0x400;

	return CastTo_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.AttachMovie
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 symbolname                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 InstanceName                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Depth                          ( CPF_OptionalParm | CPF_Parm )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxValue* UGFxValue::AttachMovie ( struct FString symbolname, struct FString InstanceName, int Depth, class UClass* Type )
{
	static UFunction* pFnAttachMovie = NULL;

	if ( ! pFnAttachMovie )
		pFnAttachMovie = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.AttachMovie" );

	UGFxValue_execAttachMovie_Parms AttachMovie_Parms;
	memcpy ( &AttachMovie_Parms.symbolname, &symbolname, 0x10 );
	memcpy ( &AttachMovie_Parms.InstanceName, &InstanceName, 0x10 );
	AttachMovie_Parms.Depth = Depth;
	AttachMovie_Parms.Type = Type;

	pFnAttachMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnAttachMovie, &AttachMovie_Parms, NULL );

	pFnAttachMovie->FunctionFlags |= 0x400;

	return AttachMovie_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.CreateEmptyMovieClip
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 InstanceName                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Depth                          ( CPF_OptionalParm | CPF_Parm )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxValue* UGFxValue::CreateEmptyMovieClip ( struct FString InstanceName, int Depth, class UClass* Type )
{
	static UFunction* pFnCreateEmptyMovieClip = NULL;

	if ( ! pFnCreateEmptyMovieClip )
		pFnCreateEmptyMovieClip = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.CreateEmptyMovieClip" );

	UGFxValue_execCreateEmptyMovieClip_Parms CreateEmptyMovieClip_Parms;
	memcpy ( &CreateEmptyMovieClip_Parms.InstanceName, &InstanceName, 0x10 );
	CreateEmptyMovieClip_Parms.Depth = Depth;
	CreateEmptyMovieClip_Parms.Type = Type;

	pFnCreateEmptyMovieClip->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnCreateEmptyMovieClip, &CreateEmptyMovieClip_Parms, NULL );

	pFnCreateEmptyMovieClip->FunctionFlags |= 0x400;

	return CreateEmptyMovieClip_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GotoAndStopI
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            frame                          ( CPF_Parm )

void UGFxValue::GotoAndStopI ( int frame )
{
	static UFunction* pFnGotoAndStopI = NULL;

	if ( ! pFnGotoAndStopI )
		pFnGotoAndStopI = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GotoAndStopI" );

	UGFxValue_execGotoAndStopI_Parms GotoAndStopI_Parms;
	GotoAndStopI_Parms.frame = frame;

	pFnGotoAndStopI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndStopI, &GotoAndStopI_Parms, NULL );

	pFnGotoAndStopI->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.GotoAndStop
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 frame                          ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::GotoAndStop ( struct FString frame )
{
	static UFunction* pFnGotoAndStop = NULL;

	if ( ! pFnGotoAndStop )
		pFnGotoAndStop = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GotoAndStop" );

	UGFxValue_execGotoAndStop_Parms GotoAndStop_Parms;
	memcpy ( &GotoAndStop_Parms.frame, &frame, 0x10 );

	pFnGotoAndStop->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndStop, &GotoAndStop_Parms, NULL );

	pFnGotoAndStop->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.GotoAndPlayI
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            frame                          ( CPF_Parm )

void UGFxValue::GotoAndPlayI ( int frame )
{
	static UFunction* pFnGotoAndPlayI = NULL;

	if ( ! pFnGotoAndPlayI )
		pFnGotoAndPlayI = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GotoAndPlayI" );

	UGFxValue_execGotoAndPlayI_Parms GotoAndPlayI_Parms;
	GotoAndPlayI_Parms.frame = frame;

	pFnGotoAndPlayI->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndPlayI, &GotoAndPlayI_Parms, NULL );

	pFnGotoAndPlayI->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.GotoAndPlay
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 frame                          ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::GotoAndPlay ( struct FString frame )
{
	static UFunction* pFnGotoAndPlay = NULL;

	if ( ! pFnGotoAndPlay )
		pFnGotoAndPlay = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GotoAndPlay" );

	UGFxValue_execGotoAndPlay_Parms GotoAndPlay_Parms;
	memcpy ( &GotoAndPlay_Parms.frame, &frame, 0x10 );

	pFnGotoAndPlay->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGotoAndPlay, &GotoAndPlay_Parms, NULL );

	pFnGotoAndPlay->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASColorTransform       cxform                         ( CPF_Parm )

void UGFxValue::SetColorTransform ( struct FASColorTransform cxform )
{
	static UFunction* pFnSetColorTransform = NULL;

	if ( ! pFnSetColorTransform )
		pFnSetColorTransform = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetColorTransform" );

	UGFxValue_execSetColorTransform_Parms SetColorTransform_Parms;
	memcpy ( &SetColorTransform_Parms.cxform, &cxform, 0x20 );

	pFnSetColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetColorTransform, &SetColorTransform_Parms, NULL );

	pFnSetColorTransform->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetPosition
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          X                              ( CPF_Parm )
// float                          Y                              ( CPF_Parm )

void UGFxValue::SetPosition ( float X, float Y )
{
	static UFunction* pFnSetPosition = NULL;

	if ( ! pFnSetPosition )
		pFnSetPosition = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetPosition" );

	UGFxValue_execSetPosition_Parms SetPosition_Parms;
	SetPosition_Parms.X = X;
	SetPosition_Parms.Y = Y;

	pFnSetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetPosition, &SetPosition_Parms, NULL );

	pFnSetPosition->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetVisible
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  visible                        ( CPF_Parm )

void UGFxValue::SetVisible ( unsigned long visible )
{
	static UFunction* pFnSetVisible = NULL;

	if ( ! pFnSetVisible )
		pFnSetVisible = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetVisible" );

	UGFxValue_execSetVisible_Parms SetVisible_Parms;
	SetVisible_Parms.visible = visible;

	pFnSetVisible->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetVisible, &SetVisible_Parms, NULL );

	pFnSetVisible->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetDisplayMatrix3D
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 M                              ( CPF_Parm )

void UGFxValue::SetDisplayMatrix3D ( struct FMatrix M )
{
	static UFunction* pFnSetDisplayMatrix3D = NULL;

	if ( ! pFnSetDisplayMatrix3D )
		pFnSetDisplayMatrix3D = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetDisplayMatrix3D" );

	UGFxValue_execSetDisplayMatrix3D_Parms SetDisplayMatrix3D_Parms;
	memcpy ( &SetDisplayMatrix3D_Parms.M, &M, 0x40 );

	pFnSetDisplayMatrix3D->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayMatrix3D, &SetDisplayMatrix3D_Parms, NULL );

	pFnSetDisplayMatrix3D->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 M                              ( CPF_Parm )

void UGFxValue::SetDisplayMatrix ( struct FMatrix M )
{
	static UFunction* pFnSetDisplayMatrix = NULL;

	if ( ! pFnSetDisplayMatrix )
		pFnSetDisplayMatrix = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetDisplayMatrix" );

	UGFxValue_execSetDisplayMatrix_Parms SetDisplayMatrix_Parms;
	memcpy ( &SetDisplayMatrix_Parms.M, &M, 0x40 );

	pFnSetDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayMatrix, &SetDisplayMatrix_Parms, NULL );

	pFnSetDisplayMatrix->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetDisplayInfo
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASDisplayInfo          D                              ( CPF_Const | CPF_Parm | CPF_OutParm )

void UGFxValue::SetDisplayInfo ( struct FASDisplayInfo* D )
{
	static UFunction* pFnSetDisplayInfo = NULL;

	if ( ! pFnSetDisplayInfo )
		pFnSetDisplayInfo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetDisplayInfo" );

	UGFxValue_execSetDisplayInfo_Parms SetDisplayInfo_Parms;

	pFnSetDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDisplayInfo, &SetDisplayInfo_Parms, NULL );

	pFnSetDisplayInfo->FunctionFlags |= 0x400;

	if ( D )
		memcpy ( D, &SetDisplayInfo_Parms.D, 0x2C );
};

// Function GFxUI.GFxValue.GetPosition
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          X                              ( CPF_Parm | CPF_OutParm )
// float                          Y                              ( CPF_Parm | CPF_OutParm )

bool UGFxValue::GetPosition ( float* X, float* Y )
{
	static UFunction* pFnGetPosition = NULL;

	if ( ! pFnGetPosition )
		pFnGetPosition = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetPosition" );

	UGFxValue_execGetPosition_Parms GetPosition_Parms;

	pFnGetPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetPosition, &GetPosition_Parms, NULL );

	pFnGetPosition->FunctionFlags |= 0x400;

	if ( X )
		*X = GetPosition_Parms.X;

	if ( Y )
		*Y = GetPosition_Parms.Y;

	return GetPosition_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetColorTransform
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASColorTransform       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FASColorTransform UGFxValue::GetColorTransform ( )
{
	static UFunction* pFnGetColorTransform = NULL;

	if ( ! pFnGetColorTransform )
		pFnGetColorTransform = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetColorTransform" );

	UGFxValue_execGetColorTransform_Parms GetColorTransform_Parms;

	pFnGetColorTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetColorTransform, &GetColorTransform_Parms, NULL );

	pFnGetColorTransform->FunctionFlags |= 0x400;

	return GetColorTransform_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetDisplayMatrix
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FMatrix UGFxValue::GetDisplayMatrix ( )
{
	static UFunction* pFnGetDisplayMatrix = NULL;

	if ( ! pFnGetDisplayMatrix )
		pFnGetDisplayMatrix = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetDisplayMatrix" );

	UGFxValue_execGetDisplayMatrix_Parms GetDisplayMatrix_Parms;

	pFnGetDisplayMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDisplayMatrix, &GetDisplayMatrix_Parms, NULL );

	pFnGetDisplayMatrix->FunctionFlags |= 0x400;

	return GetDisplayMatrix_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetDisplayInfo
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASDisplayInfo          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FASDisplayInfo UGFxValue::GetDisplayInfo ( )
{
	static UFunction* pFnGetDisplayInfo = NULL;

	if ( ! pFnGetDisplayInfo )
		pFnGetDisplayInfo = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetDisplayInfo" );

	UGFxValue_execGetDisplayInfo_Parms GetDisplayInfo_Parms;

	pFnGetDisplayInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDisplayInfo, &GetDisplayInfo_Parms, NULL );

	pFnGetDisplayInfo->FunctionFlags |= 0x400;

	return GetDisplayInfo_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.SetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::SetString ( struct FString member, struct FString S )
{
	static UFunction* pFnSetString = NULL;

	if ( ! pFnSetString )
		pFnSetString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetString" );

	UGFxValue_execSetString_Parms SetString_Parms;
	memcpy ( &SetString_Parms.member, &member, 0x10 );
	memcpy ( &SetString_Parms.S, &S, 0x10 );

	pFnSetString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetString, &SetString_Parms, NULL );

	pFnSetString->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// float                          F                              ( CPF_Parm )

void UGFxValue::SetNumber ( struct FString member, float F )
{
	static UFunction* pFnSetNumber = NULL;

	if ( ! pFnSetNumber )
		pFnSetNumber = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetNumber" );

	UGFxValue_execSetNumber_Parms SetNumber_Parms;
	memcpy ( &SetNumber_Parms.member, &member, 0x10 );
	SetNumber_Parms.F = F;

	pFnSetNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetNumber, &SetNumber_Parms, NULL );

	pFnSetNumber->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  B                              ( CPF_Parm )

void UGFxValue::SetBool ( struct FString member, unsigned long B )
{
	static UFunction* pFnSetBool = NULL;

	if ( ! pFnSetBool )
		pFnSetBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetBool" );

	UGFxValue_execSetBool_Parms SetBool_Parms;
	memcpy ( &SetBool_Parms.member, &member, 0x10 );
	SetBool_Parms.B = B;

	pFnSetBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetBool, &SetBool_Parms, NULL );

	pFnSetBool->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetFunction
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UObject*                 Context                        ( CPF_Parm )
// struct FName                   fname                          ( CPF_Parm )

void UGFxValue::SetFunction ( struct FString member, class UObject* Context, struct FName fname )
{
	static UFunction* pFnSetFunction = NULL;

	if ( ! pFnSetFunction )
		pFnSetFunction = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetFunction" );

	UGFxValue_execSetFunction_Parms SetFunction_Parms;
	memcpy ( &SetFunction_Parms.member, &member, 0x10 );
	SetFunction_Parms.Context = Context;
	memcpy ( &SetFunction_Parms.fname, &fname, 0x8 );

	pFnSetFunction->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetFunction, &SetFunction_Parms, NULL );

	pFnSetFunction->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.SetObject
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UGFxValue*               val                            ( CPF_Parm )

void UGFxValue::SetObject ( struct FString member, class UGFxValue* val )
{
	static UFunction* pFnSetObject = NULL;

	if ( ! pFnSetObject )
		pFnSetObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.SetObject" );

	UGFxValue_execSetObject_Parms SetObject_Parms;
	memcpy ( &SetObject_Parms.member, &member, 0x10 );
	SetObject_Parms.val = val;

	pFnSetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetObject, &SetObject_Parms, NULL );

	pFnSetObject->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.Set
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FASValue                Arg                            ( CPF_Parm | CPF_NeedCtorLink )

void UGFxValue::Set ( struct FString member, struct FASValue Arg )
{
	static UFunction* pFnSet = NULL;

	if ( ! pFnSet )
		pFnSet = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.Set" );

	UGFxValue_execSet_Parms Set_Parms;
	memcpy ( &Set_Parms.member, &member, 0x10 );
	memcpy ( &Set_Parms.Arg, &Arg, 0x1C );

	pFnSet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSet, &Set_Parms, NULL );

	pFnSet->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxValue.GetString
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FString UGFxValue::GetString ( struct FString member )
{
	static UFunction* pFnGetString = NULL;

	if ( ! pFnGetString )
		pFnGetString = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetString" );

	UGFxValue_execGetString_Parms GetString_Parms;
	memcpy ( &GetString_Parms.member, &member, 0x10 );

	pFnGetString->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetString, &GetString_Parms, NULL );

	pFnGetString->FunctionFlags |= 0x400;

	return GetString_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

float UGFxValue::GetNumber ( struct FString member )
{
	static UFunction* pFnGetNumber = NULL;

	if ( ! pFnGetNumber )
		pFnGetNumber = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetNumber" );

	UGFxValue_execGetNumber_Parms GetNumber_Parms;
	memcpy ( &GetNumber_Parms.member, &member, 0x10 );

	pFnGetNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetNumber, &GetNumber_Parms, NULL );

	pFnGetNumber->FunctionFlags |= 0x400;

	return GetNumber_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetBool
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxValue::GetBool ( struct FString member )
{
	static UFunction* pFnGetBool = NULL;

	if ( ! pFnGetBool )
		pFnGetBool = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetBool" );

	UGFxValue_execGetBool_Parms GetBool_Parms;
	memcpy ( &GetBool_Parms.member, &member, 0x10 );

	pFnGetBool->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBool, &GetBool_Parms, NULL );

	pFnGetBool->FunctionFlags |= 0x400;

	return GetBool_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.GetObject
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UGFxValue*               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  Type                           ( CPF_OptionalParm | CPF_Parm )

class UGFxValue* UGFxValue::GetObject ( struct FString member, class UClass* Type )
{
	static UFunction* pFnGetObject = NULL;

	if ( ! pFnGetObject )
		pFnGetObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.GetObject" );

	UGFxValue_execGetObject_Parms GetObject_Parms;
	memcpy ( &GetObject_Parms.member, &member, 0x10 );
	GetObject_Parms.Type = Type;

	pFnGetObject->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetObject, &GetObject_Parms, NULL );

	pFnGetObject->FunctionFlags |= 0x400;

	return GetObject_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.Get
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxValue::Get ( struct FString member )
{
	static UFunction* pFnGet = NULL;

	if ( ! pFnGet )
		pFnGet = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.Get" );

	UGFxValue_execGet_Parms Get_Parms;
	memcpy ( &Get_Parms.member, &member, 0x10 );

	pFnGet->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGet, &Get_Parms, NULL );

	pFnGet->FunctionFlags |= 0x400;

	return Get_Parms.ReturnValue;
};

// Function GFxUI.GFxValue.Invoke
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FASValue                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 member                         ( CPF_Parm | CPF_NeedCtorLink )
// struct TArray<struct FASValue> Args                           ( CPF_Parm | CPF_NeedCtorLink )

struct FASValue UGFxValue::Invoke ( struct FString member, struct TArray<struct FASValue> Args )
{
	static UFunction* pFnInvoke = NULL;

	if ( ! pFnInvoke )
		pFnInvoke = UObject::FindObject< UFunction > ( "Function GFxUI.GFxValue.Invoke" );

	UGFxValue_execInvoke_Parms Invoke_Parms;
	memcpy ( &Invoke_Parms.member, &member, 0x10 );
	memcpy ( &Invoke_Parms.Args, &Args, 0x10 );

	pFnInvoke->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInvoke, &Invoke_Parms, NULL );

	pFnInvoke->FunctionFlags |= 0x400;

	return Invoke_Parms.ReturnValue;
};



class UClass* UGFxAction_CloseMovie::pClassPointer = NULL;

class UClass* UGFxAction_CloseMovie::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxAction_CloseMovie" );

		return pClassPointer;
	};

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_CloseMovie::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject" );

	UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};



class UClass* UGFxAction_GetVariable::pClassPointer = NULL;

class UClass* UGFxAction_GetVariable::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxAction_GetVariable" );

		return pClassPointer;
	};

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_GetVariable::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject" );

	UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};



class UClass* UGFxAction_Invoke::pClassPointer = NULL;

class UClass* UGFxAction_Invoke::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxAction_Invoke" );

		return pClassPointer;
	};

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_Invoke::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject" );

	UGFxAction_Invoke_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};



class UClass* UGFxAction_OpenMovie::pClassPointer = NULL;

class UClass* UGFxAction_OpenMovie::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxAction_OpenMovie" );

		return pClassPointer;
	};

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_OpenMovie::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject" );

	UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};



class UClass* UGFxAction_SetCaptureKeys::pClassPointer = NULL;

class UClass* UGFxAction_SetCaptureKeys::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxAction_SetCaptureKeys" );

		return pClassPointer;
	};



class UClass* UGFxAction_SetFocus::pClassPointer = NULL;

class UClass* UGFxAction_SetFocus::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxAction_SetFocus" );

		return pClassPointer;
	};



class UClass* UGFxAction_SetVariable::pClassPointer = NULL;

class UClass* UGFxAction_SetVariable::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxAction_SetVariable" );

		return pClassPointer;
	};

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UGFxAction_SetVariable::eventIsValidLevelSequenceObject ( )
{
	static UFunction* pFnIsValidLevelSequenceObject = NULL;

	if ( ! pFnIsValidLevelSequenceObject )
		pFnIsValidLevelSequenceObject = UObject::FindObject< UFunction > ( "Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject" );

	UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Parms IsValidLevelSequenceObject_Parms;

	this->ProcessEvent ( pFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Parms, NULL );

	return IsValidLevelSequenceObject_Parms.ReturnValue;
};



class UClass* UGFxEvent_FsCommand::pClassPointer = NULL;

class UClass* UGFxEvent_FsCommand::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxEvent_FsCommand" );

		return pClassPointer;
	};



class UClass* UGFxFSCmdHandler_Kismet::pClassPointer = NULL;

class UClass* UGFxFSCmdHandler_Kismet::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxFSCmdHandler_Kismet" );

		return pClassPointer;
	};

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UGFxMovie*               movie                          ( CPF_Parm )
// struct FString                 Cmd                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Arg                            ( CPF_Parm | CPF_NeedCtorLink )

bool UGFxFSCmdHandler_Kismet::eventFSCommand ( class UGFxMovie* movie, struct FString Cmd, struct FString Arg )
{
	static UFunction* pFnFSCommand = NULL;

	if ( ! pFnFSCommand )
		pFnFSCommand = UObject::FindObject< UFunction > ( "Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand" );

	UGFxFSCmdHandler_Kismet_eventFSCommand_Parms FSCommand_Parms;
	FSCommand_Parms.movie = movie;
	memcpy ( &FSCommand_Parms.Cmd, &Cmd, 0x10 );
	memcpy ( &FSCommand_Parms.Arg, &Arg, 0x10 );

	pFnFSCommand->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnFSCommand, &FSCommand_Parms, NULL );

	pFnFSCommand->FunctionFlags |= 0x400;

	return FSCommand_Parms.ReturnValue;
};



class UClass* UGFxDataStoreSubscriber::pClassPointer = NULL;

class UClass* UGFxDataStoreSubscriber::StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = UObject::FindClass ( "Class GFxUI.GFxDataStoreSubscriber" );

		return pClassPointer;
	};

// Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue
// [0x00424400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )
// struct TArray<class UUIDataStore*> out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UGFxDataStoreSubscriber::SaveSubscriberValue ( int BindingIndex, struct TArray<class UUIDataStore*>* out_BoundDataStores )
{
	static UFunction* pFnSaveSubscriberValue = NULL;

	if ( ! pFnSaveSubscriberValue )
		pFnSaveSubscriberValue = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.SaveSubscriberValue" );

	UGFxDataStoreSubscriber_execSaveSubscriberValue_Parms SaveSubscriberValue_Parms;
	SaveSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnSaveSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSaveSubscriberValue, &SaveSubscriberValue_Parms, NULL );

	pFnSaveSubscriberValue->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &SaveSubscriberValue_Parms.out_BoundDataStores, 0x10 );

	return SaveSubscriberValue_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxDataStoreSubscriber::ClearBoundDataStores ( )
{
	static UFunction* pFnClearBoundDataStores = NULL;

	if ( ! pFnClearBoundDataStores )
		pFnClearBoundDataStores = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.ClearBoundDataStores" );

	UGFxDataStoreSubscriber_execClearBoundDataStores_Parms ClearBoundDataStores_Parms;

	pFnClearBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnClearBoundDataStores, &ClearBoundDataStores_Parms, NULL );

	pFnClearBoundDataStores->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct TArray<class UUIDataStore*> out_BoundDataStores            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UGFxDataStoreSubscriber::GetBoundDataStores ( struct TArray<class UUIDataStore*>* out_BoundDataStores )
{
	static UFunction* pFnGetBoundDataStores = NULL;

	if ( ! pFnGetBoundDataStores )
		pFnGetBoundDataStores = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.GetBoundDataStores" );

	UGFxDataStoreSubscriber_execGetBoundDataStores_Parms GetBoundDataStores_Parms;

	pFnGetBoundDataStores->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBoundDataStores, &GetBoundDataStores_Parms, NULL );

	pFnGetBoundDataStores->FunctionFlags |= 0x400;

	if ( out_BoundDataStores )
		memcpy ( out_BoundDataStores, &GetBoundDataStores_Parms.out_BoundDataStores, 0x10 );
};

// Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UUIDataStore*            SourceDataStore                ( CPF_Parm )
// unsigned long                  bValuesInvalidated             ( CPF_Parm )
// struct FName                   PropertyTag                    ( CPF_Parm )
// class UUIDataProvider*         SourceProvider                 ( CPF_Parm )
// int                            ArrayIndex                     ( CPF_Parm )

void UGFxDataStoreSubscriber::NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex )
{
	static UFunction* pFnNotifyDataStoreValueUpdated = NULL;

	if ( ! pFnNotifyDataStoreValueUpdated )
		pFnNotifyDataStoreValueUpdated = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.NotifyDataStoreValueUpdated" );

	UGFxDataStoreSubscriber_execNotifyDataStoreValueUpdated_Parms NotifyDataStoreValueUpdated_Parms;
	NotifyDataStoreValueUpdated_Parms.SourceDataStore = SourceDataStore;
	NotifyDataStoreValueUpdated_Parms.bValuesInvalidated = bValuesInvalidated;
	memcpy ( &NotifyDataStoreValueUpdated_Parms.PropertyTag, &PropertyTag, 0x8 );
	NotifyDataStoreValueUpdated_Parms.SourceProvider = SourceProvider;
	NotifyDataStoreValueUpdated_Parms.ArrayIndex = ArrayIndex;

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnNotifyDataStoreValueUpdated, &NotifyDataStoreValueUpdated_Parms, NULL );

	pFnNotifyDataStoreValueUpdated->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

bool UGFxDataStoreSubscriber::RefreshSubscriberValue ( int BindingIndex )
{
	static UFunction* pFnRefreshSubscriberValue = NULL;

	if ( ! pFnRefreshSubscriberValue )
		pFnRefreshSubscriberValue = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.RefreshSubscriberValue" );

	UGFxDataStoreSubscriber_execRefreshSubscriberValue_Parms RefreshSubscriberValue_Parms;
	RefreshSubscriberValue_Parms.BindingIndex = BindingIndex;

	pFnRefreshSubscriberValue->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnRefreshSubscriberValue, &RefreshSubscriberValue_Parms, NULL );

	pFnRefreshSubscriberValue->FunctionFlags |= 0x400;

	return RefreshSubscriberValue_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

struct FString UGFxDataStoreSubscriber::GetDataStoreBinding ( int BindingIndex )
{
	static UFunction* pFnGetDataStoreBinding = NULL;

	if ( ! pFnGetDataStoreBinding )
		pFnGetDataStoreBinding = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.GetDataStoreBinding" );

	UGFxDataStoreSubscriber_execGetDataStoreBinding_Parms GetDataStoreBinding_Parms;
	GetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnGetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetDataStoreBinding, &GetDataStoreBinding_Parms, NULL );

	pFnGetDataStoreBinding->FunctionFlags |= 0x400;

	return GetDataStoreBinding_Parms.ReturnValue;
};

// Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 MarkupText                     ( CPF_Parm | CPF_NeedCtorLink )
// int                            BindingIndex                   ( CPF_OptionalParm | CPF_Parm )

void UGFxDataStoreSubscriber::SetDataStoreBinding ( struct FString MarkupText, int BindingIndex )
{
	static UFunction* pFnSetDataStoreBinding = NULL;

	if ( ! pFnSetDataStoreBinding )
		pFnSetDataStoreBinding = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.SetDataStoreBinding" );

	UGFxDataStoreSubscriber_execSetDataStoreBinding_Parms SetDataStoreBinding_Parms;
	memcpy ( &SetDataStoreBinding_Parms.MarkupText, &MarkupText, 0x10 );
	SetDataStoreBinding_Parms.BindingIndex = BindingIndex;

	pFnSetDataStoreBinding->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnSetDataStoreBinding, &SetDataStoreBinding_Parms, NULL );

	pFnSetDataStoreBinding->FunctionFlags |= 0x400;
};

// Function GFxUI.GFxDataStoreSubscriber.PublishValues
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UGFxDataStoreSubscriber::PublishValues ( )
{
	static UFunction* pFnPublishValues = NULL;

	if ( ! pFnPublishValues )
		pFnPublishValues = UObject::FindObject< UFunction > ( "Function GFxUI.GFxDataStoreSubscriber.PublishValues" );

	UGFxDataStoreSubscriber_execPublishValues_Parms PublishValues_Parms;

	pFnPublishValues->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnPublishValues, &PublishValues_Parms, NULL );

	pFnPublishValues->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif