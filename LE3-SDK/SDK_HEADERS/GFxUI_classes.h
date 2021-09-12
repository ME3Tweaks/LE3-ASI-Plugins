/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: GFxUI_classes.h
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GFxUI.GFxMovie.GFxRenderTextureMode
/*enum GFxRenderTextureMode
{
	RTM_Opaque                                         = 0,
	RTM_Alpha                                          = 1,
	RTM_AlphaComposite                                 = 2,
	RTM_MAX                                            = 3
};*/

// Enum GFxUI.GFxMovie.GFxTimingMode
/*enum GFxTimingMode
{
	TM_Game                                            = 0,
	TM_Real                                            = 1,
	TM_MAX                                             = 2
};*/

// Enum GFxUI.GFxMovie.ASType
/*enum ASType
{
	AS_Undefined                                       = 0,
	AS_Null                                            = 1,
	AS_Number                                          = 2,
	AS_String                                          = 3,
	AS_Boolean                                         = 4,
	AS_MAX                                             = 5
};*/

// Enum GFxUI.GFxMovie.GFxAlign
/*enum GFxAlign
{
	Align_Center                                       = 0,
	Align_TopCenter                                    = 1,
	Align_BottomCenter                                 = 2,
	Align_CenterLeft                                   = 3,
	Align_CenterRight                                  = 4,
	Align_TopLeft                                      = 5,
	Align_TopRight                                     = 6,
	Align_BottomLeft                                   = 7,
	Align_BottomRight                                  = 8,
	Align_MAX                                          = 9
};*/

// Enum GFxUI.GFxMovie.GFxScaleMode
/*enum GFxScaleMode
{
	SM_NoScale                                         = 0,
	SM_ShowAll                                         = 1,
	SM_ExactFit                                        = 2,
	SM_NoBorder                                        = 3,
	SM_MAX                                             = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GFxUI.GFxEngine
// 0x0014 (0x0074 - 0x0060)
class UGFxEngine : public UObject
{
public:
	struct TArray<struct FGCReference>                 GCReferences;                                     		// 0x0060 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                RefCount;                                         		// 0x0070 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x0060 - 0x0060)
class UGFxFSCmdHandler : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventFSCommand ( class UGFxMovie* movie, struct FString Cmd, struct FString Arg );
};

// Class GFxUI.GFxGameViewportClient
// 0x0013 (0x01B0 - 0x019D)
class UGFxGameViewportClient : public UGameViewportClient
{
public:
	class UClass*                                      GFxUIControllerClass;                             		// 0x01A0 (0x0008) [0x0000000000000000]              
	class UGFxInteraction*                             GFxUIController;                                  		// 0x01A8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventInit ( struct FString* OutError );
};

// Class GFxUI.GFxInteraction
// 0x0008 (0x00A8 - 0x00A0)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x00A0 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void NotifyPlayerRemoved ( int PlayerIndex, class ULocalPlayer* RemovedPlayer );
	void NotifyPlayerAdded ( int PlayerIndex, class ULocalPlayer* AddedPlayer );
	void NotifyGameSessionEnded ( );
	class UGFxMovie* GetFocusMovie ( );
	bool SetFocusMovie ( struct FString MovieName, unsigned long captureInput );
};

// Class GFxUI.GFxMovie
// 0x0173 (0x01D3 - 0x0060)
class UGFxMovie : public UObject
{
public:
	struct TArray<struct FName>                        CaptureKeys;                                      		// 0x0060 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FName>                        FocusIgnoreKeys;                                  		// 0x0070 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FExternalTexture>             ExternalTextures;                                 		// 0x0080 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FGFxDataStoreBinding>         DataStoreBindings;                                		// 0x0090 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FPointer                                    pMovie;                                           		// 0x00A0 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    pCaptureKeys;                                     		// 0x00A8 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    pFocusIgnoreKeys;                                 		// 0x00B0 (0x0008) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x00B8 (0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMovie.OwnedGFxValues
	unsigned char                                      UnknownData01[ 0x48 ];                            		// 0x0100 (0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMovie.ASUClasses
	unsigned char                                      UnknownData02[ 0x48 ];                            		// 0x0148 (0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMovie.ASUObjects
	class UGFxMovieInfo*                               MovieInfo;                                        		// 0x0190 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x0198 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UGFxFSCmdHandler*                            FSCmdHandler;                                     		// 0x01A0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     ExternalInterface;                                		// 0x01A8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UGFxDataStoreSubscriber*                     DataStoreSubscriber;                              		// 0x01B0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                LocalPlayerOwnerIndex;                            		// 0x01B8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	int                                                NextASUObject;                                    		// 0x01BC (0x0004) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	int                                                nZOrder;                                          		// 0x01C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CreationTime;                                     		// 0x01C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fRenderTime;                                      		// 0x01C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x01CC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOnlyOwnerFocusable : 1;                          		// 0x01CC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDiscardNonOwnerInput : 1;                        		// 0x01CC (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      RequiresScaling : 1;                              		// 0x01CC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bGammaCorrection : 1;                             		// 0x01CC (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned char                                      SceneDPG;                                         		// 0x01D0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      TimingMode;                                       		// 0x01D1 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RenderTextureMode;                                		// 0x01D2 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool UnregisterGFxValue ( class UGFxValue* i_val );
	bool RegisterGFxValue ( class UGFxValue* i_val );
	void ActionScriptSetFunction ( class UGFxValue* Obj, struct FString member );
	class UGFxValue* ActionScriptObject ( struct FString Path );
	struct FString ActionScriptString ( struct FString Path );
	float ActionScriptFloat ( struct FString Path );
	int ActionScriptInt ( struct FString Path );
	void ActionScriptVoid ( struct FString Path );
	class APlayerController* GetPC ( );
	class ULocalPlayer* GetLP ( );
	void SetExternalInterface ( class UObject* H );
	void SetFsCmdHandler ( class UGFxFSCmdHandler* H );
	void SetVariableObject ( struct FString Path, class UGFxValue* Value );
	class UGFxValue* GetVariableObject ( struct FString Path, class UClass* Type );
	class UGFxValue* CreateArray ( );
	class UGFxValue* CreateObject ( struct FString ASClass, class UClass* Type );
	bool SetVariableStringArray ( struct FString Path, int Index, struct TArray<struct FString> Arg );
	bool SetVariableFloatArray ( struct FString Path, int Index, struct TArray<float> Arg );
	bool SetVariableIntArray ( struct FString Path, int Index, struct TArray<int> Arg );
	bool SetVariableArray ( struct FString Path, int Index, struct TArray<struct FASValue> Arg );
	bool GetVariableStringArray ( struct FString Path, int Index, struct TArray<struct FString>* Arg );
	bool GetVariableFloatArray ( struct FString Path, int Index, struct TArray<float>* Arg );
	bool GetVariableIntArray ( struct FString Path, int Index, struct TArray<int>* Arg );
	bool GetVariableArray ( struct FString Path, int Index, struct TArray<struct FASValue>* Arg );
	void SetVariableString ( struct FString Path, struct FString S );
	void SetVariableNumber ( struct FString Path, float F );
	void SetVariableBool ( struct FString Path, unsigned long B );
	void SetVariable ( struct FString Path, struct FASValue Arg );
	struct FString GetVariableString ( struct FString Path );
	float GetVariableNumber ( struct FString Path );
	bool GetVariableBool ( struct FString Path );
	struct FASValue GetVariable ( struct FString Path );
	void PublishDataStoreValues ( );
	void RefreshDataStoreBindings ( );
	struct FASValue Invoke ( struct FString method, struct TArray<struct FASValue>* Args );
	void SetTimingMode ( unsigned char mode );
	void Pause ( unsigned long pauseplay );
	void Advance ( float Time );
	bool SetExternalTexture ( struct FString Resource, class UTexture* Texture );
	void FlushPlayerInput ( unsigned long capturekeysonly );
	void ClearFocusIgnoreKeys ( );
	void AddFocusIgnoreKey ( struct FName Key );
	void ClearCaptureKeys ( );
	void AddCaptureKey ( struct FName Key );
	void SetFocus ( unsigned long captureInput, unsigned long Focus );
	void SetSceneDPG ( unsigned char NewDPG );
	void SetPerspective3D ( struct FMatrix* matPersp );
	void SetView3D ( struct FMatrix* matView );
	void GetVisibleFrameRect ( float* x0, float* y0, float* X1, float* Y1 );
	void SetAlignment ( unsigned char A );
	void SetViewScaleMode ( unsigned char sm );
	void SetViewport ( int X, int Y, int Width, int Height );
	class UGameViewportClient* GetGameViewportClient ( );
	void SetMovieInfo ( class UGFxMovieInfo* Data );
	void eventOnClose ( );
	void Close ( unsigned long Unload );
	bool eventStart ( unsigned long StartPaused );
};

// Class GFxUI.GFxMovieInfo
// 0x0048 (0x00A8 - 0x0060)
class UGFxMovieInfo : public UObject
{
public:
	struct TArray<unsigned char>                       RawData;                                          		// 0x0060 (0x0014) [0x2000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0064 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct TArray<class UObject*>                      References;                                       		// 0x0074 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<class UObject*>                      UserReferences;                                   		// 0x0084 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<class UObject*>                      CompressedTextureReferences;                      		// 0x0094 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bUsesFontlib : 1;                                 		// 0x00A4 (0x0004) [0x0000000000020001] [0x00000001] ( CPF_Edit | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GFxUI.GFxValue
// 0x0030 (0x0090 - 0x0060)
class UGFxValue : public UObject
{
public:
	int                                                Value[ 0xC ];                                     		// 0x0060 (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ActionScriptSetFunctionOn ( class UGFxValue* Target, struct FString member );
	void ActionScriptSetFunction ( struct FString member );
	struct TArray<class UGFxValue*> ActionScriptArray ( struct FString Path );
	class UGFxValue* ActionScriptObject ( struct FString Path );
	struct FString ActionScriptString ( struct FString method );
	float ActionScriptFloat ( struct FString method );
	int ActionScriptInt ( struct FString method );
	void ActionScriptVoid ( struct FString method );
	void SetElementMemberString ( int Index, struct FString member, struct FString S );
	void SetElementMemberNumber ( int Index, struct FString member, float F );
	void SetElementMemberBool ( int Index, struct FString member, unsigned long B );
	void SetElementMemberObject ( int Index, struct FString member, class UGFxValue* val );
	void SetElementMember ( int Index, struct FString member, struct FASValue Arg );
	struct FString GetElementMemberString ( int Index, struct FString member );
	float GetElementMemberNumber ( int Index, struct FString member );
	bool GetElementMemberBool ( int Index, struct FString member );
	class UGFxValue* GetElementMemberObject ( int Index, struct FString member, class UClass* Type );
	struct FASValue GetElementMember ( int Index, struct FString member );
	void SetElementColorTransform ( int Index, struct FASColorTransform cxform );
	void SetElementPosition ( int Index, float X, float Y );
	void SetElementVisible ( int Index, unsigned long visible );
	void SetElementDisplayMatrix ( int Index, struct FMatrix M );
	void SetElementDisplayInfo ( int Index, struct FASDisplayInfo D );
	void SetElementString ( int Index, struct FString S );
	void SetElementNumber ( int Index, float F );
	void SetElementBool ( int Index, unsigned long B );
	void SetElementObject ( int Index, class UGFxValue* val );
	void SetElement ( int Index, struct FASValue Arg );
	struct FMatrix GetElementDisplayMatrix ( int Index );
	struct FASDisplayInfo GetElementDisplayInfo ( int Index );
	struct FString GetElementString ( int Index );
	float GetElementNumber ( int Index );
	bool GetElementBool ( int Index );
	class UGFxValue* GetElementObject ( int Index, class UClass* Type );
	struct FASValue GetElement ( int Index );
	void SetMemberObjectText ( struct FString sMember, struct FString sText, unsigned long bIsHTML );
	void SetText ( struct FString Text, unsigned long bIsHTML );
	struct FString GetText ( );
	class UGFxValue* CastTo ( class UClass* Type );
	class UGFxValue* AttachMovie ( struct FString symbolname, struct FString InstanceName, int Depth, class UClass* Type );
	class UGFxValue* CreateEmptyMovieClip ( struct FString InstanceName, int Depth, class UClass* Type );
	void GotoAndStopI ( int frame );
	void GotoAndStop ( struct FString frame );
	void GotoAndPlayI ( int frame );
	void GotoAndPlay ( struct FString frame );
	void SetColorTransform ( struct FASColorTransform cxform );
	void SetPosition ( float X, float Y );
	void SetVisible ( unsigned long visible );
	void SetDisplayMatrix3D ( struct FMatrix M );
	void SetDisplayMatrix ( struct FMatrix M );
	void SetDisplayInfo ( struct FASDisplayInfo* D );
	bool GetPosition ( float* X, float* Y );
	struct FASColorTransform GetColorTransform ( );
	struct FMatrix GetDisplayMatrix ( );
	struct FASDisplayInfo GetDisplayInfo ( );
	void SetString ( struct FString member, struct FString S );
	void SetNumber ( struct FString member, float F );
	void SetBool ( struct FString member, unsigned long B );
	void SetFunction ( struct FString member, class UObject* Context, struct FName fname );
	void SetObject ( struct FString member, class UGFxValue* val );
	void Set ( struct FString member, struct FASValue Arg );
	struct FString GetString ( struct FString member );
	float GetNumber ( struct FString member );
	bool GetBool ( struct FString member );
	class UGFxValue* GetObject ( struct FString member, class UClass* Type );
	struct FASValue Get ( struct FString member );
	struct FASValue Invoke ( struct FString member, struct TArray<struct FASValue> Args );
};

// Class GFxUI.GFxAction_CloseMovie
// 0x000C (0x0104 - 0x00F8)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMovie*                                   movie;                                            		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bUnload : 1;                                      		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsValidLevelSequenceObject ( );
};

// Class GFxUI.GFxAction_GetVariable
// 0x0018 (0x0110 - 0x00F8)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	struct FString                                     Variable;                                         		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   movie;                                            		// 0x0108 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsValidLevelSequenceObject ( );
};

// Class GFxUI.GFxAction_Invoke
// 0x0028 (0x0120 - 0x00F8)
class UGFxAction_Invoke : public USequenceAction
{
public:
	struct FString                                     methodName;                                       		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct TArray<struct FASValue>                     Arguments;                                        		// 0x0108 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   movie;                                            		// 0x0118 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsValidLevelSequenceObject ( );
};

// Class GFxUI.GFxAction_OpenMovie
// 0x000C (0x0104 - 0x00F8)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class UGFxMovie*                                   movie;                                            		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bTakeFocus : 1;                                   		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x0100 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bStartPaused : 1;                                 		// 0x0100 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsValidLevelSequenceObject ( );
};

// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0018 (0x0110 - 0x00F8)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	struct TArray<struct FName>                        CaptureKeys;                                      		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   movie;                                            		// 0x0108 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GFxUI.GFxAction_SetFocus
// 0x000C (0x0104 - 0x00F8)
class UGFxAction_SetFocus : public USequenceAction
{
public:
	class UGFxMovie*                                   movie;                                            		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCaptureInput : 1;                                		// 0x0100 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GFxUI.GFxAction_SetVariable
// 0x0018 (0x0110 - 0x00F8)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	struct FString                                     Variable;                                         		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   movie;                                            		// 0x0108 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventIsValidLevelSequenceObject ( );
};

// Class GFxUI.GFxEvent_FsCommand
// 0x001A (0x0140 - 0x0126)
class UGFxEvent_FsCommand : public USequenceEvent
{
public:
	struct FString                                     FSCommand;                                        		// 0x0128 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UGFxMovie*                                   movie;                                            		// 0x0138 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0048 (0x00A8 - 0x0060)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0060 (0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxFSCmdHandler_Kismet.Events

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool eventFSCommand ( class UGFxMovie* movie, struct FString Cmd, struct FString Arg );
};

// Class GFxUI.GFxDataStoreSubscriber
// 0x0010 (0x0070 - 0x0060)
class UGFxDataStoreSubscriber : public UObject
{
public:
	struct FPointer                                    VfTable_IUIDataStorePublisher;                    		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UGFxMovie*                                   movie;                                            		// 0x0068 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool SaveSubscriberValue ( int BindingIndex, struct TArray<class UUIDataStore*>* out_BoundDataStores );
	void ClearBoundDataStores ( );
	void GetBoundDataStores ( struct TArray<class UUIDataStore*>* out_BoundDataStores );
	void NotifyDataStoreValueUpdated ( class UUIDataStore* SourceDataStore, unsigned long bValuesInvalidated, struct FName PropertyTag, class UUIDataProvider* SourceProvider, int ArrayIndex );
	bool RefreshSubscriberValue ( int BindingIndex );
	struct FString GetDataStoreBinding ( int BindingIndex );
	void SetDataStoreBinding ( struct FString MarkupText, int BindingIndex );
	void PublishValues ( );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif