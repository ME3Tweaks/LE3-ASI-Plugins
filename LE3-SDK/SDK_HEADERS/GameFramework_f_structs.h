/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: GameFramework_f_structs.h
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

// Function GameFramework.GameAIController.GetActionString
// [0x00020903] ( FUNC_Final | FUNC_Event )
struct AGameAIController_eventGetActionString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FString                                  ActionStr;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGameAICommand*                           ActiveCmd;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.GeneratePathToLocation
// [0x00024800] ( FUNC_Event )
struct AGameAIController_eventGeneratePathToLocation_Parms
{
	struct FVector                                     Goal;                                             		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              WithinDistance;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowPartialPath;                                		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAIController.GeneratePathToActor
// [0x00024800] ( FUNC_Event )
struct AGameAIController_eventGeneratePathToActor_Parms
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              WithinDistance;                                   		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bAllowPartialPath;                                		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAIController.SetDesiredRotation
// [0x00024002] 
struct AGameAIController_execSetDesiredRotation_Parms
{
	struct FRotator                                    TargetDesiredRotation;                            		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      InLockDesiredRotation;                            		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      InUnlockWhenReached;                              		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              InterpolationTime;                                		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GameAIController.AILog_Internal
// [0x00024802] ( FUNC_Event )
struct AGameAIController_eventAILog_Internal_Parms
{
	struct FString                                     LogText;                                          		// 0x0000 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	struct FName                                       LogCategory;                                      		// 0x0010 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bForce;                                           		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// int                                             idx;                                              		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FString                                  ActionStr;                                        		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  FinalStr;                                         		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Filename;                                         		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class UGameAICommand*                           ActiveCommand;                                    		// 0x0050 (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAIController.RecordDemoAILog
// [0x00080000] 
struct AGameAIController_execRecordDemoAILog_Parms
{
	struct FString                                     LogText;                                          		// 0x0000 (0x0010) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameAIController.Destroyed
// [0x00020802] ( FUNC_Event )
struct AGameAIController_eventDestroyed_Parms
{
};

// Function GameFramework.GameAIController.GetAICommandInStack
// [0x00020400] ( FUNC_Native )
struct AGameAIController_execGetAICommandInStack_Parms
{
	class UClass*                                      InClass;                                          		// 0x0000 (0x0008) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	class UGameAICommand*                              ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAIController.FindCommandOfClass
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execFindCommandOfClass_Parms
{
	class UClass*                                      SearchClass;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UGameAICommand*                              ReturnValue;                                      		// 0x0008 (0x0008) [0x0000000000000D80]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
};

// Function GameFramework.GameAIController.DumpCommandStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execDumpCommandStack_Parms
{
};

// Function GameFramework.GameAIController.CheckCommandCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execCheckCommandCount_Parms
{
};

// Function GameFramework.GameAIController.GetActiveCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execGetActiveCommand_Parms
{
	class UGameAICommand*                              ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAIController.AbortCommand
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execAbortCommand_Parms
{
	class UGameAICommand*                              AbortCmd;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      AbortClass;                                       		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAIController.PopCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execPopCommand_Parms
{
	class UGameAICommand*                              ToBePoppedCommand;                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAIController.PushCommand
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct AGameAIController_execPushCommand_Parms
{
	class UGameAICommand*                              NewCommand;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.GetDebugOverheadText
// [0x00420000] 
struct UGameAICommand_execGetDebugOverheadText_Parms
{
	class APlayerController*                           PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct TArray<struct FString>                      OutText;                                          		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameAICommand.DrawDebug
// [0x00020800] ( FUNC_Event )
struct UGameAICommand_eventDrawDebug_Parms
{
	class AHUD*                                        H;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Category;                                         		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.GetDumpString
// [0x00020802] ( FUNC_Event )
struct UGameAICommand_eventGetDumpString_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function GameFramework.GameAICommand.Resumed
// [0x00020002] 
struct UGameAICommand_execResumed_Parms
{
	struct FName                                       OldCommandName;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.Paused
// [0x00020002] 
struct UGameAICommand_execPaused_Parms
{
	class UGameAICommand*                              NewCommand;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.Popped
// [0x00020002] 
struct UGameAICommand_execPopped_Parms
{
};

// Function GameFramework.GameAICommand.Pushed
// [0x00020002] 
struct UGameAICommand_execPushed_Parms
{
};

// Function GameFramework.GameAICommand.PostPopped
// [0x00020000] 
struct UGameAICommand_execPostPopped_Parms
{
};

// Function GameFramework.GameAICommand.PrePushed
// [0x00020000] 
struct UGameAICommand_execPrePushed_Parms
{
	class AGameAIController*                           AI;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.AllowStateTransitionTo
// [0x00020002] 
struct UGameAICommand_execAllowStateTransitionTo_Parms
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAICommand.AllowTransitionTo
// [0x00020002] 
struct UGameAICommand_execAllowTransitionTo_Parms
{
	class UClass*                                      AttemptCommand;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAICommand.Tick
// [0x00020000] 
struct UGameAICommand_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UGameAICommand_execShouldIgnoreNotifies_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameAICommand.InternalTick
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGameAICommand_eventInternalTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.InternalResumed
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGameAICommand_eventInternalResumed_Parms
{
	struct FName                                       OldCommandName;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.InternalPaused
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGameAICommand_eventInternalPaused_Parms
{
	class UGameAICommand*                              NewCommand;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.InternalPopped
// [0x00020802] ( FUNC_Event )
struct UGameAICommand_eventInternalPopped_Parms
{
};

// Function GameFramework.GameAICommand.InternalPushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGameAICommand_eventInternalPushed_Parms
{
};

// Function GameFramework.GameAICommand.InternalPrePushed
// [0x00020803] ( FUNC_Final | FUNC_Event )
struct UGameAICommand_eventInternalPrePushed_Parms
{
	class AGameAIController*                           AI;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GameAICommand.InitCommand
// [0x00022002] 
struct UGameAICommand_execInitCommand_Parms
{
	class AGameAIController*                           AI;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UGameAICommand*                           Cmd;                                              		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function GameFramework.GameAICommand.InitCommandUserActor
// [0x00022002] 
struct UGameAICommand_execInitCommandUserActor_Parms
{
	class AGameAIController*                           AI;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      UserActor;                                        		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif