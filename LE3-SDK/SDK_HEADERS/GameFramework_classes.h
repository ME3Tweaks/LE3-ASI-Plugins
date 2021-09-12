/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: GameFramework_classes.h
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

#define CONST_LOADING_MOVIE                                      "LoadingMovie"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GameFramework.GameTypes.EShakeParam
/*enum EShakeParam
{
	ESP_OffsetRandom                                   = 0,
	ESP_OffsetZero                                     = 1,
	ESP_MAX                                            = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GameFramework.GameAIController
// 0x0034 (0x04DC - 0x04A8)
class AGameAIController : public AAIController
{
public:
	struct TArray<struct FName>                        AILogFilter;                                      		// 0x04A8 (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DemoActionString;                                 		// 0x04B8 (0x0010) [0x0000000000400020]              ( CPF_Net | CPF_NeedCtorLink )
	class UGameAICommand*                              CommandList;                                      		// 0x04C8 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class AFileLog*                                    AILogFile;                                        		// 0x04D0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bHasRunawayCommandList : 1;                       		// 0x04D8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bAILogging : 1;                                   		// 0x04D8 (0x0004) [0x0000000000004001] [0x00000002] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAILogToWindow : 1;                               		// 0x04D8 (0x0004) [0x0000000000004001] [0x00000004] ( CPF_Edit | CPF_Config )
	unsigned long                                      bFlushAILogEachLine : 1;                          		// 0x04D8 (0x0004) [0x0000000000004001] [0x00000008] ( CPF_Edit | CPF_Config )
	unsigned long                                      bMapBasedLogName : 1;                             		// 0x04D8 (0x0004) [0x0000000000004001] [0x00000010] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAIDrawDebug : 1;                                 		// 0x04D8 (0x0004) [0x0000000000004001] [0x00000020] ( CPF_Edit | CPF_Config )
	unsigned long                                      bAIBroken : 1;                                    		// 0x04D8 (0x0004) [0x0000000000002000] [0x00000040] ( CPF_Transient )
	unsigned long                                      bUseIterativePathFinding : 1;                     		// 0x04D8 (0x0004) [0x0000000000004000] [0x00000080] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FString eventGetActionString ( );
	bool eventGeneratePathToLocation ( struct FVector Goal, float WithinDistance, unsigned long bAllowPartialPath );
	bool eventGeneratePathToActor ( class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath );
	void SetDesiredRotation ( struct FRotator TargetDesiredRotation, unsigned long InLockDesiredRotation, unsigned long InUnlockWhenReached, float InterpolationTime );
	void eventAILog_Internal ( struct FString LogText, struct FName LogCategory, unsigned long bForce );
	void RecordDemoAILog ( struct FString LogText );
	void eventDestroyed ( );
	class UGameAICommand* GetAICommandInStack ( class UClass* InClass );
	class UGameAICommand* FindCommandOfClass ( class UClass* SearchClass );
	void DumpCommandStack ( );
	void CheckCommandCount ( );
	class UGameAICommand* GetActiveCommand ( );
	bool AbortCommand ( class UGameAICommand* AbortCmd, class UClass* AbortClass );
	void PopCommand ( class UGameAICommand* ToBePoppedCommand );
	void PushCommand ( class UGameAICommand* NewCommand );
};

// Class GameFramework.GameAICommand
// 0x0024 (0x0084 - 0x0060)
class UGameAICommand : public UObject
{
public:
	class UGameAICommand*                              ChildCommand;                                     		// 0x0060 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	struct FName                                       ChildStatus;                                      		// 0x0068 (0x0008) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
	class AGameAIController*                           GameAIOwner;                                      		// 0x0070 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       Status;                                           		// 0x0078 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bAllowNewSameClassInstance : 1;                   		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReplaceActiveSameClassInstance : 1;              		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bAborted : 1;                                     		// 0x0080 (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bIgnoreNotifies : 1;                              		// 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bPendingPop : 1;                                  		// 0x0080 (0x0004) [0x0000000000002000] [0x00000010] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void GetDebugOverheadText ( class APlayerController* PC, struct TArray<struct FString>* OutText );
	void eventDrawDebug ( class AHUD* H, struct FName Category );
	struct FString eventGetDumpString ( );
	void Resumed ( struct FName OldCommandName );
	void Paused ( class UGameAICommand* NewCommand );
	void Popped ( );
	void Pushed ( );
	void PostPopped ( );
	void PrePushed ( class AGameAIController* AI );
	bool AllowStateTransitionTo ( struct FName StateName );
	bool AllowTransitionTo ( class UClass* AttemptCommand );
	void Tick ( float DeltaTime );
	bool ShouldIgnoreNotifies ( );
	void eventInternalTick ( float DeltaTime );
	void eventInternalResumed ( struct FName OldCommandName );
	void eventInternalPaused ( class UGameAICommand* NewCommand );
	void eventInternalPopped ( );
	void eventInternalPushed ( );
	void eventInternalPrePushed ( class AGameAIController* AI );
	bool InitCommand ( class AGameAIController* AI );
	bool InitCommandUserActor ( class AGameAIController* AI, class AActor* UserActor );
};

// Class GameFramework.GameTypes
// 0x0000 (0x0060 - 0x0060)
class UGameTypes : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class GameFramework.SeqAct_ModifyProperty
// 0x0010 (0x0108 - 0x00F8)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	struct TArray<struct FPropertyInfo>                Properties;                                       		// 0x00F8 (0x0010) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif