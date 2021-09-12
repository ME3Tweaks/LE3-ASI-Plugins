/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_f_structs.h
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

// Function SFXGameContent.SFXGameInfoSP.AwardItem
// [0x00024002] 
struct ASFXGameInfoSP_execAwardItem_Parms
{
	struct FName                                       ItemName;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Level;                                            		// 0x0008 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               oEngine;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FTD                                      TreasureData;                                     		// 0x0024 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bFoundData;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// struct FLevelTreasureSaveRecord                 NewTreasureRecord;                                		// 0x007C (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             idx;                                              		// 0x009C (0x0004) [0x0000000000000000]              
	// struct FString                                  S;                                                		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FName                                    N;                                                		// 0x00B0 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameInfoSP.AwardCredits
// [0x00024002] 
struct ASFXGameInfoSP_execAwardCredits_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Level;                                            		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowNotification;                                		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               oEngine;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FTD                                      TreasureData;                                     		// 0x0024 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bFoundData;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             CreditBudget;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	// int                                             CreditsSoFar;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0084 (0x0004) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x0088 (0x0008) [0x0000000000000000]              
	// struct FLevelTreasureSaveRecord                 NewTreasureRecord;                                		// 0x0090 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXGameInfoSP.AwardCreditPercent
// [0x00024002] 
struct ASFXGameInfoSP_execAwardCreditPercent_Parms
{
	float                                              fAmount;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Level;                                            		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowNotifications;                               		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               oEngine;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FTD                                      TreasureData;                                     		// 0x0024 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bFoundData;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             CreditBudget;                                     		// 0x007C (0x0004) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x0080 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameInfoSP.AwardXP
// [0x00024002] 
struct ASFXGameInfoSP_execAwardXP_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Level;                                            		// 0x0004 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bShowNotifications;                               		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               oEngine;                                          		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FTD                                      TreasureData;                                     		// 0x0024 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   bFoundData;                                       		// 0x0078 (0x0004) [0x0000000000000000]              
	// int                                             XPBudget;                                         		// 0x007C (0x0004) [0x0000000000000000]              
	// int                                             XPSoFar;                                          		// 0x0080 (0x0004) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0084 (0x0004) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0088 (0x0008) [0x0000000000000000]              
	// struct FLevelTreasureSaveRecord                 NewTreasureRecord;                                		// 0x0090 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXGameInfoSP.FindPlayerStart
// [0x00024002] 
struct ASFXGameInfoSP_execFindPlayerStart_Parms
{
	class AController*                                 Player;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      InTeam;                                           		// 0x0008 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     IncomingName;                                     		// 0x000C (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	class ANavigationPoint*                            ReturnValue;                                      		// 0x001C (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               Engine;                                           		// 0x0024 (0x0008) [0x0000000000000000]              
	// struct FName                                    ATStart;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class AActor*                                   ChkActor;                                         		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioStartLocation*                        ChkBioStartLocation;                              		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameInfoSP.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct ASFXGameInfoSP_eventPostBeginPlay_Parms
{
	// class UEngine*                                  oEngine;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UClass*                                   TreasureClass;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UObject*                                  DynamicLoadedClassObject;                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_DebugImportXP.Activated
// [0x00020002] 
struct USFXSeqAct_DebugImportXP_execActivated_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            WI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UBioGlobalVariableTable*                  VarTable;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// int                                             XP;                                               		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_GiveStartingConsumables.Activated
// [0x00020002] 
struct USFXSeqAct_GiveStartingConsumables_execActivated_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Player*                          pPawn;                                            		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     InvManager;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            pSquad;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	// class APawn*                                    MemberPawn;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Henchman*                        HPawn;                                            		// 0x0038 (0x0008) [0x0000000000000000]              
	// class USFXModule_DamagePlayer*                  DamageModule;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	// int                                             MaxHealth;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.OnMovieClosedDelegate
// [0x00020002] 
struct USFXSeqAct_OpenWeaponSelection_execOnMovieClosedDelegate_Parms
{
	class USFXGUIMovie*                                i_ScreenToClose;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.UpdateOp
// [0x00020002] 
struct USFXSeqAct_OpenWeaponSelection_execUpdateOp_Parms
{
	float                                              fDeltaT;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXSeqAct_OpenWeaponSelection.Activated
// [0x00020002] 
struct USFXSeqAct_OpenWeaponSelection_execActivated_Parms
{
	// class USFXGUIInteraction*                       oGUI;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGUI_WeaponSelection*                  oWeapGUI;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     oPC;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_Revive.BodyStanceAnimEndNotification
// [0x00020000] 
struct USFXCustomAction_Revive_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_Revive.Replicate
// [0x00020002] 
struct USFXCustomAction_Revive_execReplicate_Parms
{
};

// Function SFXGameContent.SFXCustomAction_Revive.ClientDoCustomAction
// [0x00024002] 
struct USFXCustomAction_Revive_execClientDoCustomAction_Parms
{
	unsigned long                                      bForced;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_Revive.CheckFiring
// [0x00020002] 
struct USFXCustomAction_Revive_execCheckFiring_Parms
{
};

// Function SFXGameContent.SFXCustomAction_Revive.TickCustomAction
// [0x00020002] 
struct USFXCustomAction_Revive_execTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_Revive.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_Revive_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_Revive.Resurrect
// [0x00020002] 
struct USFXCustomAction_Revive_execResurrect_Parms
{
	// class UBioRemoteLogger*                         GLogger;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXAccomplishmentManager*                AccManager;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_Revive.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_Revive_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_Revive.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_Revive_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_Reload.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_Reload_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_Reload.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_Reload_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_Reload.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_Reload_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_ActivateWeaponFlashlight_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_ActivateWeaponFlashlight_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_MantleLookAt_execFlinchActionOverride_Parms
{
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_MantleLookAt_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetEndBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_MantleLookAt_execGetEndBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetLoopBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_MantleLookAt_execGetLoopBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_MantleLookAt.GetStartBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_MantleLookAt_execGetStartBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_CoverSlipLookAt_execFlinchActionOverride_Parms
{
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_CoverSlipLookAt_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetEndBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_CoverSlipLookAt_execGetEndBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetLoopBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_CoverSlipLookAt_execGetLoopBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_CoverSlipLookAt.GetStartBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_CoverSlipLookAt_execGetStartBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_StdCoverSlipLookAt_execFlinchActionOverride_Parms
{
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_StdCoverSlipLookAt_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetEndBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdCoverSlipLookAt_execGetEndBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetLoopBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdCoverSlipLookAt_execGetLoopBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_StdCoverSlipLookAt.GetStartBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdCoverSlipLookAt_execGetStartBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_SwatTurnLookAt_execFlinchActionOverride_Parms
{
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_SwatTurnLookAt_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetEndBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_SwatTurnLookAt_execGetEndBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetLoopBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_SwatTurnLookAt_execGetLoopBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_SwatTurnLookAt.GetStartBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_SwatTurnLookAt_execGetStartBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_StdSwatTurnLookAt_execFlinchActionOverride_Parms
{
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_StdSwatTurnLookAt_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetEndBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdSwatTurnLookAt_execGetEndBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetLoopBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdSwatTurnLookAt_execGetLoopBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_StdSwatTurnLookAt.GetStartBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_StdSwatTurnLookAt_execGetStartBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_GapJump.NotifyBump
// [0x00020002] 
struct USFXCustomAction_GapJump_execNotifyBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 OtherPawn;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_GapJump.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_GapJump_execEndThisCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_GapJump.RemoveBlockingEndPoints
// [0x00020002] 
struct USFXCustomAction_GapJump_execRemoveBlockingEndPoints_Parms
{
	// class USFXCustomReachSpec*                      CustomReachSpec;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_GapJump.BlockMoveEndPoints
// [0x00020002] 
struct USFXCustomAction_GapJump_execBlockMoveEndPoints_Parms
{
	// class USFXCustomReachSpec*                      CustomReachSpec;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_GapJump.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_GapJump_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_GapJump.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_GapJump_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_GapJump.StartAnimation
// [0x00020002] 
struct USFXCustomAction_GapJump_execStartAnimation_Parms
{
};

// Function SFXGameContent.SFXCustomAction_GapJump.ReachedPrecisePosition
// [0x00020002] 
struct USFXCustomAction_GapJump_execReachedPrecisePosition_Parms
{
};

// Function SFXGameContent.SFXCustomAction_GapJump.AlignmentTimeout
// [0x00020002] 
struct USFXCustomAction_GapJump_execAlignmentTimeout_Parms
{
};

// Function SFXGameContent.SFXCustomAction_GapJump.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_GapJump_execStartCustomAction_Parms
{
	// class USFXJumpReachSpec*                        JumpSpec;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_GapJump.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_GapJump_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_JumpDown.TickInput
// [0x00020002] 
struct USFXCustomAction_JumpDown_execTickInput_Parms
{
	class UBioPlayerInput*                             Input;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_JumpDown.PlayStartAnimation
// [0x00020002] 
struct USFXCustomAction_JumpDown_execPlayStartAnimation_Parms
{
	// class USFXCustomReachSpec*                      ReachSpec;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXNav_BlockingPathNode*                 StartPoint;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXNav_BlockingPathNode*                 EndPoint;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetEndAnim
// [0x00420002] 
struct USFXCustomAction_PlayerMantleOverCover_execGetEndAnim_Parms
{
	struct FBodyStance                                 Stance;                                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetLoopAnim
// [0x00420002] 
struct USFXCustomAction_PlayerMantleOverCover_execGetLoopAnim_Parms
{
	struct FBodyStance                                 Stance;                                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetStartAnim
// [0x00420002] 
struct USFXCustomAction_PlayerMantleOverCover_execGetStartAnim_Parms
{
	struct FBodyStance                                 Stance;                                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_PlayerMantleOverCover_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_PlayerMantleOverCover_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.TickCustomAction
// [0x00020802] ( FUNC_Event )
struct USFXCustomAction_PlayerMantleOverCover_eventTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 PawnRotation;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerMantleOverCover_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleOverCover.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerMantleOverCover_execStartCustomAction_Parms
{
	// unsigned long                                   bWasStorming;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.ClientDoCustomAction
// [0x00024002] 
struct USFXCustomAction_PlayerMantleUp_execClientDoCustomAction_Parms
{
	unsigned long                                      bForced;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.ServerStartCustomAction
// [0x00024002] 
struct USFXCustomAction_PlayerMantleUp_execServerStartCustomAction_Parms
{
	int                                                NewAction;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    Sync;                                             		// 0x0004 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                NewPowerAction;                                   		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.Replicate
// [0x00020002] 
struct USFXCustomAction_PlayerMantleUp_execReplicate_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.GetBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_PlayerMantleUp_execGetBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerMantleUp_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerMantleUp_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.InternalCanDoCustomAction
// [0x00880002] 
struct USFXCustomAction_PlayerMantleUp_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FCovPosInfo                              FoundCover;                                       		// 0x0010 (0x0038) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerMantleUp.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_PlayerMantleUp_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.ClientDoCustomAction
// [0x00024002] 
struct USFXCustomAction_SimpleMoveBase_execClientDoCustomAction_Parms
{
	unsigned long                                      bForced;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.Replicate
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execReplicate_Parms
{
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.CanBeInterrupted
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execCanBeInterrupted_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.DestTimeout
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execDestTimeout_Parms
{
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execStopCustomAction_Parms
{
	// struct FBodyStance                              BS_ToPlay;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.PlayStartAnimation
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execPlayStartAnimation_Parms
{
	// float                                           DistToEnd;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	// float                                           RootMotionScaleFactor;                            		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FBodyStance                              BS_ToPlay;                                        		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.GetBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execGetBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execStartCustomAction_Parms
{
	// class ANavigationPoint*                         Start;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           RotYaw;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_SimpleMoveBase_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.RemoveBlockingEndPoints
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execRemoveBlockingEndPoints_Parms
{
	// class USFXCustomReachSpec*                      CustomReachSpec;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNav;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.BlockMoveEndPoints
// [0x00020002] 
struct USFXCustomAction_SimpleMoveBase_execBlockMoveEndPoints_Parms
{
	// class USFXCustomReachSpec*                      CustomReachSpec;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNav;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.ReachedPrecisePosition
// [0x00020802] ( FUNC_Event )
struct USFXCustomAction_SimpleMoveBase_eventReachedPrecisePosition_Parms
{
};

// Function SFXGameContent.SFXCustomAction_SimpleMoveBase.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_SimpleMoveBase_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipLeft_execEndThisCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipLeft_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipLeftStanding_execEndThisCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipLeftStanding_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRight.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipRight_execEndThisCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRight.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipRight_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipRightStanding_execEndThisCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerCoverSlipRightStanding_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.PreAlignPawnLocation
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execPreAlignPawnLocation_Parms
{
	// class ANavigationPoint*                         StartNode;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNode;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FVector                                  PlayerOffset;                                     		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SetMoveStage
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execSetMoveStage_Parms
{
	unsigned char                                      NextStage;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartNode;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNode;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  ToEnd;                                            		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  StartLocation;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execTickCustomAction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartNode;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNode;                                          		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SyncRotation
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execSyncRotation_Parms
{
	float                                              Alpha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ANavigationPoint*                         StartNode;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         EndNode;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  ToEnd2D;                                          		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 R;                                                		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.SyncJumpEntrance
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execSyncJumpEntrance_Parms
{
	float                                              Alpha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  PlayerPos;                                        		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickAlignment
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execTickAlignment_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  PlayerOffset;                                     		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Alpha;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execStartCustomAction_Parms
{
	// class ASFXNav_LadderNode*                       LadderNode;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.TickInput
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbUp_execTickInput_Parms
{
	class UBioPlayerInput*                             Input;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbUp.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_PlayerLadderClimbUp_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_PlayerLadderClimbDown.TickInput
// [0x00020002] 
struct USFXCustomAction_PlayerLadderClimbDown_execTickInput_Parms
{
	class UBioPlayerInput*                             Input;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DeltaTime;                                        		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.RollOverride
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeLeft_execRollOverride_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeLeft_execStartCustomAction_Parms
{
	// struct FVector                                  ToEnd2D;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeLeft.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_PlayerEvadeLeft_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.RollOverride
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeRight_execRollOverride_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeRight_execStartCustomAction_Parms
{
	// struct FVector                                  ToEnd2D;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeRight.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_PlayerEvadeRight_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_PlayerEvadeForward_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.RollOverride
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execRollOverride_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.TurnOnHitWall
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execTurnOnHitWall_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.NotifyHitWall
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execNotifyHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     oPlayer;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execEndThisCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.SyncRotation
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execSyncRotation_Parms
{
	float                                              Alpha;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ToEnd2D;                                          		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FRotator                                 R;                                                		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeForward_execStartCustomAction_Parms
{
	// struct FVector                                  ToEnd2D;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeForward.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_PlayerEvadeForward_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_PlayerEvadeBackwards_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.RollOverride
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeBackwards_execRollOverride_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeBackwards_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PlayerEvadeBackwards_execStartCustomAction_Parms
{
	// struct FVector                                  ToEnd2D;                                          		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PlayerEvadeBackwards.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_PlayerEvadeBackwards_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_MantleMelee_execEndThisCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.Breakout
// [0x00020002] 
struct USFXCustomAction_MantleMelee_execBreakout_Parms
{
	// class UBioPlayerInput*                          Input;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.NotifyBump
// [0x00020002] 
struct USFXCustomAction_MantleMelee_execNotifyBump_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_MantleMelee_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_MantleMelee_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_MantleMelee.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_MantleMelee_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.NonSyncedAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execNonSyncedAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.SyncAttack
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execSyncAttack_Parms
{
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetVictimAnim
// [0x00420002] 
struct USFXCustomAction_SyncCoverGrab_execGetVictimAnim_Parms
{
	struct FBodyStance                                 Stance;                                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetAttackerAnim
// [0x00420002] 
struct USFXCustomAction_SyncCoverGrab_execGetAttackerAnim_Parms
{
	struct FBodyStance                                 Stance;                                           		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.GetVictimPawn
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execGetVictimPawn_Parms
{
	class ABioPawn*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 FoundPawn;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 BestVictimPawn;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           BestDistToPawnSq;                                 		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           PawnDistSq;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	// struct FVector                                  VectToPawn;                                       		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  VictimDest;                                       		// 0x002C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execStartCustomAction_Parms
{
	// struct FVector                                  CylLoc;                                           		// 0x0000 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.ShouldPlayMirrorAnim
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execShouldPlayMirrorAnim_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  X;                                                		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x001C (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0034 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.VerifyVictimDestIsClear
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execVerifyVictimDestIsClear_Parms
{
	class ABioPawn*                                    VictimPawn;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     DestinationPos;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  StartTrace;                                       		// 0x0018 (0x000C) [0x0000000000000000]              
	// struct FVector                                  EndTrace;                                         		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x003C (0x000C) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0048 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0050 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 BlockingPawn;                                     		// 0x005C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_SyncCoverGrab_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  VictimDest;                                       		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SyncCoverGrab.StartMeleeAttack
// [0x00020002] 
struct USFXCustomAction_SyncCoverGrab_execStartMeleeAttack_Parms
{
	// class USFXSeqEvt_PerformedMeleeOverCover*       oMeleeEvent;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USequenceEvent*                           oSequenceEvent;                                   		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.MeleeImpact
// [0x00020002] 
struct USFXCustomAction_SyncCoverMelee_execMeleeImpact_Parms
{
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverMelee_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.EndThisCustomAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverMelee_execEndThisCustomAction_Parms
{
	// class ABioPlayerController*                     oPlayer;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_SyncCoverMelee_execStartCustomAction_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SyncCoverMelee.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_SyncCoverMelee_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_CoverMeleeLeft.NonSyncedAction
// [0x00020002] 
struct USFXCustomAction_CoverMeleeLeft_execNonSyncedAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_CoverMeleeRight.GetVictimPawn
// [0x00020002] 
struct USFXCustomAction_CoverMeleeRight_execGetVictimPawn_Parms
{
	class ABioPawn*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 FoundPawn;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_CoverMeleeRight.GetMeleeImpactParameters
// [0x00420002] 
struct USFXCustomAction_CoverMeleeRight_execGetMeleeImpactParameters_Parms
{
	struct FAreaEffectParameters                       ImpactParams;                                     		// 0x0000 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXGameContent.SFXCustomAction_CoverMeleeRight.NonSyncedAction
// [0x00020002] 
struct USFXCustomAction_CoverMeleeRight_execNonSyncedAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeLeft.NonSyncedAction
// [0x00020002] 
struct USFXCustomAction_HvyCoverMeleeLeft_execNonSyncedAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.GetVictimPawn
// [0x00020002] 
struct USFXCustomAction_HvyCoverMeleeRight_execGetVictimPawn_Parms
{
	class ABioPawn*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 FoundPawn;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.GetMeleeImpactParameters
// [0x00420002] 
struct USFXCustomAction_HvyCoverMeleeRight_execGetMeleeImpactParameters_Parms
{
	struct FAreaEffectParameters                       ImpactParams;                                     		// 0x0000 (0x0020) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function SFXGameContent.SFXCustomAction_HvyCoverMeleeRight.NonSyncedAction
// [0x00020002] 
struct USFXCustomAction_HvyCoverMeleeRight_execNonSyncedAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StopMove
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execStopMove_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
	// class ASFXObjectPool*                           Pool;                                             		// 0x0038 (0x0008) [0x0000000000000000]              
	// class UParticleSystemComponent*                 ImpactPSC;                                        		// 0x0040 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0048 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_RifleMeleeOne_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.EndAction
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execEndAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execNoHeavyMelee_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.DoRifleMeleeTwo
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execDoRifleMeleeTwo_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.RifleMeleeSecondary
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execRifleMeleeSecondary_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeOne.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_RifleMeleeOne_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_RifleMeleeTwo_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeTwo_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeTwo_execNoHeavyMelee_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.DoRifleMeleeThree
// [0x00020002] 
struct USFXCustomAction_RifleMeleeTwo_execDoRifleMeleeThree_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeTwo.RifleMeleeThird
// [0x00020002] 
struct USFXCustomAction_RifleMeleeTwo_execRifleMeleeThird_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_RifleMeleeThree_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeThree_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_RifleMeleeThree_execNoHeavyMelee_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.RifleMeleeThird
// [0x00020002] 
struct USFXCustomAction_RifleMeleeThree_execRifleMeleeThird_Parms
{
};

// Function SFXGameContent.SFXCustomAction_RifleMeleeThree.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_RifleMeleeThree_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StopMove
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execStopMove_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bResult;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0030 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0038 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 ImpactedPawn;                                     		// 0x0040 (0x0008) [0x0000000000000000]              
	// float                                           fDummyDamage;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vDummyForce;                                      		// 0x004C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_PistolMeleeOne_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.EndAction
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execEndAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execNoHeavyMelee_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.DoPistolMeleeTwo
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execDoPistolMeleeTwo_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.PistolMeleeSecondary
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execPistolMeleeSecondary_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeOne.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_PistolMeleeOne_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_PistolMeleeTwo_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeTwo_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeTwo_execNoHeavyMelee_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.DoPistolMeleeThree
// [0x00020002] 
struct USFXCustomAction_PistolMeleeTwo_execDoPistolMeleeThree_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeTwo.PistolMeleeThird
// [0x00020002] 
struct USFXCustomAction_PistolMeleeTwo_execPistolMeleeThird_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_PistolMeleeThree_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.HeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeThree_execHeavyMelee_Parms
{
	// class ABioPlayerController*                     BioPC;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.NoHeavyMelee
// [0x00020002] 
struct USFXCustomAction_PistolMeleeThree_execNoHeavyMelee_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.PistolMeleeThird
// [0x00020002] 
struct USFXCustomAction_PistolMeleeThree_execPistolMeleeThird_Parms
{
};

// Function SFXGameContent.SFXCustomAction_PistolMeleeThree.ReplicateImpact
// [0x00024002] 
struct USFXCustomAction_PistolMeleeThree_execReplicateImpact_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.PlayImpactSound
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execPlayImpactSound_Parms
{
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.PlayWhizSound
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execPlayWhizSound_Parms
{
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.FlinchActionOverride
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execFlinchActionOverride_Parms
{
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.GetBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_FlinchBase_execGetBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// float                                           F;                                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_FlinchBase_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_FlinchBase.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_FlinchBase_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXPowerCustomAction_CryoAmmo.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_CryoAmmo_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_CryoAmmo.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_CryoAmmo_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_CryoAmmo.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_CryoAmmo_execResetPower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_CryoAmmo.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_CryoAmmo_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_CryoAmmo.DoConcussiveShotSpecialImpact
// [0x00020002] 
struct USFXPowerCustomAction_CryoAmmo_execDoConcussiveShotSpecialImpact_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ImpactEffectDuration;                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXGameEffect_DelayedCryoFreeze*         FreezeEffect;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_CryoAmmo.ConcussiveShotCustomImpact
// [0x00820002] 
struct USFXPowerCustomAction_CryoAmmo_execConcussiveShotCustomImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0028 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
	// struct FRvrClientEffectTarget                   TargetInfo;                                       		// 0x0038 (0x007C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_CryoAmmo.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXPowerCustomAction_CryoAmmo_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_CryoAmmo*                  oEffect;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
	// float                                           fDelay;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x0040 (0x0001) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_CryoAmmo.SetupEffect
// [0x00024002] 
struct USFXPowerCustomAction_CryoAmmo_execSetupEffect_Parms
{
	class USFXGameEffect_AmmoPower*                    Effect;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oPawn;                                            		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXGameEffect_CryoAmmo*                  effectCryoAmmo;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           fEffectValue;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_CryoAmmo.ApplyPowerEffects
// [0x00020002] 
struct USFXPowerCustomAction_CryoAmmo_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_CryoAmmo*                  oEffect;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DelayedSetWeaponPower
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_AmmoPower_execDelayedSetWeaponPower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXPowerCustomAction_AmmoPower_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DoJoinInProgress
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execDoJoinInProgress_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.SetupEffect
// [0x00024000] 
struct USFXPowerCustomAction_AmmoPower_execSetupEffect_Parms
{
	class USFXGameEffect_AmmoPower*                    Effect;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oPawn;                                            		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.OnPowerRankIncreased
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execOnPowerRankIncreased_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_AmmoPower_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXWeapon*                               Weapon;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DoConcussiveShotSpecialImpact
// [0x00020000] 
struct USFXPowerCustomAction_AmmoPower_execDoConcussiveShotSpecialImpact_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ImpactEffectDuration;                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_AmmoPower_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ReplicateConcussiveShotSpecialImpact
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execReplicateConcussiveShotSpecialImpact_Parms
{
	class ABioPawn*                                    oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              DurationOfEffect;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ConcussiveShotCustomImpact
// [0x00020000] 
struct USFXPowerCustomAction_AmmoPower_execConcussiveShotCustomImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ApplyPowerEffects
// [0x00020000] 
struct USFXPowerCustomAction_AmmoPower_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.SetWeaponPower
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execSetWeaponPower_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bOverrideCurrentPower;                            		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0014 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXHeavyWeapon*                          oHeavyWeapon;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0020 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_WeaponVFXChange*           WeaponVFXEffect;                                  		// 0x0028 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.DeferedSetWeaponPower
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execDeferedSetWeaponPower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.ReloadAmmoPower
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execReloadAmmoPower_Parms
{
	class ABioPawn*                                    Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  Weapon;                                           		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.StopOmniTool
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_AmmoPower_execStopOmniTool_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.StartCustomAction
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.CanUsePower
// [0x00020002] 
struct USFXPowerCustomAction_AmmoPower_execCanUsePower_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXWeapon*                               Weapon;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_AmmoPower.PrecacheVFX
// [0x00022002] 
struct USFXPowerCustomAction_AmmoPower_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_Shockwave_execApplyBonus_Parms
{
	struct FName                                       Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Shockwave_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Shockwave_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oBioPawn;                                         		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_Shockwave_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// struct FVector                                  ImpactLocation;                                   		// 0x001C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.DoSubsequentImpact
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execDoSubsequentImpact_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ImpactLocation;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                nImpactCount;                                     		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXPawn*                                 HitPawn;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FVector                                  Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x0038 (0x0001) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x003C (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0044 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bHasReacted;                                      		// 0x0048 (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x004C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0054 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_PowerCombo_Biotic*         BioticEffect;                                     		// 0x005C (0x0008) [0x0000000000000000]              
	// class UClass*                                   dmgType;                                          		// 0x0064 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bRagdolled;                                       		// 0x006C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.DoImpact
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execDoImpact_Parms
{
	struct FVector                                     location;                                         		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FRotator                                    ProjectileRotation;                               		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   HitActor;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct TArray<class AActor*>                    NearbyActors;                                     		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FVector                                  Param;                                            		// 0x0030 (0x000C) [0x0000000000000000]              
	// int                                             nImpactCount;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	// struct FAreaEffectParameters                    Params;                                           		// 0x0040 (0x0020) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.OnPowerDetonated
// [0x00024000] 
struct USFXPowerCustomAction_Shockwave_execOnPowerDetonated_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      HitActor;                                         		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Shockwave.ReleaseProjectilePower
// [0x00020002] 
struct USFXPowerCustomAction_Shockwave_execReleaseProjectilePower_Parms
{
	class ASFXProjectile_PowerCustomAction*            ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AActor*                                   HitActor;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct TArray<class AActor*>                    NearbyActors;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// int                                             nImpactCount;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	// struct FAreaEffectParameters                    Params;                                           		// 0x0024 (0x0020) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_Pull_execApplyBonus_Parms
{
	struct FName                                       Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execResetPower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Pull_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Pull_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.DropCurrentTargets
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execDropCurrentTargets_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oActor;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FVector                                  vForce;                                           		// 0x0034 (0x000C) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0040 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_Pull*                      oPullEffect;                                      		// 0x0048 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0050 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.GetImpactForce
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execGetImpactForce_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_Pull.StartPower
// [0x00020002] 
struct USFXPowerCustomAction_Pull_execStartPower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.FindSecondTarget
// [0x00020002] 
struct USFXPowerCustomAction_MultiProjectile_execFindSecondTarget_Parms
{
	// struct TArray<class AActor*>                    NearbyActors;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class AActor*                                   oActor;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Player*                          Player;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.ReleaseSecondProjectile
// [0x00020002] 
struct USFXPowerCustomAction_MultiProjectile_execReleaseSecondProjectile_Parms
{
	// unsigned char                                   eType;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	// class ABioPawn*                                 oPawnTarget;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ASFXProjectile_PowerCustomAction*         oProjectile;                                      		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_MultiProjectile.ReleasePower
// [0x00020002] 
struct USFXPowerCustomAction_MultiProjectile_execReleasePower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Discharge_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Discharge_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Discharge_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_Discharge_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.CanUsePower
// [0x00020002] 
struct USFXPowerCustomAction_Discharge_execCanUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXShield_Base*                          Shield;                                           		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_Discharge_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_Discharge_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.GetNonRagdollDamageType
// [0x00020002] 
struct USFXPowerCustomAction_Discharge_execGetNonRagdollDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.GetDamageType
// [0x00020002] 
struct USFXPowerCustomAction_Discharge_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.GetDamageFromShields
// [0x00020002] 
struct USFXPowerCustomAction_Discharge_execGetDamageFromShields_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXShield_Base*                          Shield;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           ShieldPct;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.ReleaseInstantPower
// [0x00020002] 
struct USFXPowerCustomAction_Discharge_execReleaseInstantPower_Parms
{
	// class ASFXShield_Base*                          Shield;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// float                                           fCurrenShields;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vLocation;                                        		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Discharge.StartPower
// [0x00020002] 
struct USFXPowerCustomAction_Discharge_execStartPower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execApplyBonus_Parms
{
	struct FName                                       Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execResetPower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.GetIncendiaryAmmoEffect
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execGetIncendiaryAmmoEffect_Parms
{
	class USFXGameEffect_IncendiaryAmmo*               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.OnActorImpacted
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_IncendiaryAmmo*            IncendiaryAmmoEffect;                             		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.DoConcussiveShotSpecialImpact
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execDoConcussiveShotSpecialImpact_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ImpactEffectDuration;                             		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_FireDamageOverTime*        DamageEffect;                                     		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ConcussiveShotCustomImpact
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execConcussiveShotCustomImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oImpactedPawn;                                    		// 0x0028 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXGameEffect_IncendiaryAmmo*            IncendiaryAmmoEffect;                             		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.DoEvolvedAoEImpact
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execDoEvolvedAoEImpact_Parms
{
	struct FImpactInfo                                 Impact;                                           		// 0x0000 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect_IncendiaryAmmo*               Effect;                                           		// 0x0064 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x006C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.SpawnRandomImpactVFX
// [0x00040003] ( FUNC_Final )
struct USFXPowerCustomAction_IncendiaryAmmo_execSpawnRandomImpactVFX_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UParticleSystem*                             ImpactParticleSystem;                             		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      inInstigator;                                     		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXDuringAsyncWorkTicker*                oTicker;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.SetupEffect
// [0x00024002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execSetupEffect_Parms
{
	class USFXGameEffect_AmmoPower*                    Effect;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ABioPawn*                                    oPawn;                                            		// 0x0008 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXGameEffect_IncendiaryAmmo*            effectIncendiaryAmmo;                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           fEffectValue;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.GetDamageType
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_IncendiaryAmmo_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.ApplyPowerEffects
// [0x00020002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execApplyPowerEffects_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXWeapon*                                  oWeapon;                                          		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_IncendiaryAmmo*            oEffect;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo.PrecacheVFX
// [0x00022002] 
struct USFXPowerCustomAction_IncendiaryAmmo_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_BioticCharge_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_BioticCharge_execApplyBonus_Parms
{
	struct FName                                       Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execResetPower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.StartPowerCooldown
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execStartPowerCooldown_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.Replicate
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execReplicate_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.DoPowerDetonatedForActor
// [0x00024000] 
struct USFXPowerCustomAction_BioticCharge_execDoPowerDetonatedForActor_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                nImpactCount;                                     		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0028 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0030 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.PlayFailedChargeEffects
// [0x00820002] 
struct USFXPowerCustomAction_BioticCharge_execPlayFailedChargeEffects_Parms
{
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x0000 (0x007C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.SpawnProjectile
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execSpawnProjectile_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.TimeStinger
// [0x00040003] ( FUNC_Final )
struct USFXPowerCustomAction_BioticCharge_execTimeStinger_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oBioPawn;                                         		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.GetImpactForce
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execGetImpactForce_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fForce;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_BioticCharge_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.OnChargeImpact
// [0x00820002] 
struct USFXPowerCustomAction_BioticCharge_execOnChargeImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXAI_Core*                              AI;                                               		// 0x002C (0x0008) [0x0000000000000000]              
	// class ASFXPawn*                                 HitBioPawn;                                       		// 0x0034 (0x0008) [0x0000000000000000]              
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x003C (0x007C) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x00B8 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bRagdolled;                                       		// 0x00C0 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.Impact
// [0x00820002] 
struct USFXPowerCustomAction_BioticCharge_execImpact_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x0008 (0x007C) [0x0000000000000000]              
	// class ASFXShield_Base*                          Shield;                                           		// 0x0084 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x008C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.Teleport
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execTeleport_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.StartTeleport
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execStartTeleport_Parms
{
	// class ASFXEmitter*                              TeleportOut;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.PrecacheVFX
// [0x00022002] 
struct USFXPowerCustomAction_BioticCharge_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.StopCustomAction
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execStopCustomAction_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.InterruptThisCustomAction
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execInterruptThisCustomAction_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.StartCustomAction
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execStartCustomAction_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXPlayerCamera*                         Camera;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           fDistanceToTarget;                                		// 0x0010 (0x0004) [0x0000000000000000]              
	// float                                           fCameraTransitionTime;                            		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.TickCustomAction
// [0x00020802] ( FUNC_Event )
struct USFXPowerCustomAction_BioticCharge_eventTickCustomAction_Parms
{
	float                                              fDeltaTime;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// int                                             idx;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct TArray<class USequenceEvent*>            EventsList;                                       		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USequenceEvent*                           Event;                                            		// 0x0018 (0x0008) [0x0000000000000000]              
	// class USeqEvent_Touch*                          TouchEvent;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	// unsigned long                                   OldOverlapping;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.FinalizePawnMove
// [0x00444003] ( FUNC_Final )
struct USFXPowerCustomAction_BioticCharge_execFinalizePawnMove_Parms
{
	struct FVector                                     Loc;                                              		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     TargetLoc;                                        		// 0x000C (0x000C) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	// struct FVector                                  Dir;                                              		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.ValidateTarget
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execValidateTarget_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  NewLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewTargetLocation;                                		// 0x0010 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Dir;                                              		// 0x001C (0x000C) [0x0000000000000000]              
	// float                                           MoveDist;                                         		// 0x0028 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oTargetPawn;                                      		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.FindSpace
// [0x00420002] 
struct USFXPowerCustomAction_BioticCharge_execFindSpace_Parms
{
	struct FVector                                     NearLocation;                                     		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Extent;                                           		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      TraceActor;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  X;                                                		// 0x0024 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Y;                                                		// 0x0030 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Z;                                                		// 0x003C (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0048 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0054 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TestLoc;                                          		// 0x0060 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 RotToTarget;                                      		// 0x006C (0x000C) [0x0000000000000000]              
	// float                                           XIdx;                                             		// 0x0078 (0x0004) [0x0000000000000000]              
	// float                                           YIdx;                                             		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.TryMove
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execTryMove_Parms
{
	struct FVector                                     NewLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Dir;                                              		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       CollisionActor;                                   		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.CollectVolumes
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execCollectVolumes_Parms
{
	// class APlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ATriggerVolume*                           ChkVolume;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct TArray<class ATriggerVolume*>            AllVolumes;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class ANavigationPoint*                         Nav;                                              		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         TargetNav;                                        		// 0x0028 (0x0008) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x0030 (0x0004) [0x0000000000000000]              
	// int                                             VolumeIdx;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	// struct FCharge_PendingVolume                    NewVolume;                                        		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Extent;                                           		// 0x0044 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.ValidateTargetLocation
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_BioticCharge_execValidateTargetLocation_Parms
{
	struct FVector                                     TargetLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ANavigationPoint*                         TargetAnchor;                                     		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ANavigationPoint*                         Nav;                                              		// 0x0018 (0x0008) [0x0000000000000000]              
	// class AActor*                                   FirstTarget;                                      		// 0x0020 (0x0008) [0x0000000000000000]              
	// class AActor*                                   HitActor;                                         		// 0x0028 (0x0008) [0x0000000000000000]              
	// float                                           DistToAnchor;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0034 (0x0008) [0x0000000000000000]              
	// float                                           CylHeight;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           CylWidth;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0044 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0050 (0x000C) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x005C (0x0028) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.TestPathReachability
// [0x00420003] ( FUNC_Final )
struct USFXPowerCustomAction_BioticCharge_execTestPathReachability_Parms
{
	struct FVector                                     StartLocation;                                    		// 0x0000 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	class ANavigationPoint*                            Anchor;                                           		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Extent;                                           		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0020 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AnchorLocation;                                   		// 0x0024 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.NewVector
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_BioticCharge_execNewVector_Parms
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  V;                                                		// 0x0018 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.CanUsePower
// [0x00020002] 
struct USFXPowerCustomAction_BioticCharge_execCanUsePower_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  TargetLocation;                                   		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  CamLocation;                                      		// 0x0020 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_BioticCharge.InternalCanDoCustomAction
// [0x00080002] 
struct USFXPowerCustomAction_BioticCharge_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_VanguardPassive.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_VanguardPassive_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_VanguardPassive.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_VanguardPassive_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_VanguardPassive.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_VanguardPassive_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_VanguardPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomAction_VanguardPassive_execApplyGlobalBonus_Parms
{
	// int                                             Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0004 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           fForceBonus;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	// class ASFXWeapon_Shotgun_Base*                  Shotgun;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_VanguardMeleePassive.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_VanguardMeleePassive_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_VanguardMeleePassive.ApplyBonus
// [0x00024002] 
struct USFXPowerCustomAction_VanguardMeleePassive_execApplyBonus_Parms
{
	struct FName                                       Parameter;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class USFXGameEffect*                              Bonus;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRemove;                                          		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_VanguardMeleePassive.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_VanguardMeleePassive_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_VanguardMeleePassive.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_VanguardMeleePassive_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_VanguardMeleePassive.OnHeavyMeleeKill
// [0x00020002] 
struct USFXPowerCustomAction_VanguardMeleePassive_execOnHeavyMeleeKill_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXPowerCustomAction_BioticCharge*       Charge;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_VanguardMeleePassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomAction_VanguardMeleePassive_execApplyGlobalBonus_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Unity_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.GetHUDWheelIconInfo
// [0x00020802] ( FUNC_Event )
struct USFXPowerCustomAction_Unity_eventGetHUDWheelIconInfo_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.CountMediGel
// [0x00020002] 
struct USFXPowerCustomAction_Unity_execCountMediGel_Parms
{
	class ABioBaseSquad*                               oPlayerSquad;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXInventoryManager*                     oInventory;                                       		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.ShouldUsePower
// [0x00420802] ( FUNC_Event )
struct USFXPowerCustomAction_Unity_eventShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ASFXShield_Base*                          Shields;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// unsigned long                                   bSquadHealthFull;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_Unity_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn_Henchman*                        Henchman;                                         		// 0x002C (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Player*                          Player;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ASFXGame*                                 Game;                                             		// 0x003C (0x0008) [0x0000000000000000]              
	// class ASFXGRI*                                  GRI;                                              		// 0x0044 (0x0008) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x004C (0x0008) [0x0000000000000000]              
	// class USFXDifficultyHandler*                    DH;                                               		// 0x0054 (0x0008) [0x0000000000000000]              
	// float                                           HealAmount;                                       		// 0x005C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.StartPower
// [0x00020002] 
struct USFXPowerCustomAction_Unity_execStartPower_Parms
{
	// class UBioGlobalVariableTable*                  GlobalVariables;                                  		// 0x0000 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bSuperMedigel;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Unity.CanUsePower
// [0x00020002] 
struct USFXPowerCustomAction_Unity_execCanUsePower_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  EmptyString;                                      		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_VanguardPunch.StopMove
// [0x00020002] 
struct USFXCustomAction_VanguardPunch_execStopMove_Parms
{
};

// Function SFXGameContent.SFXCustomAction_VanguardPunch.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_VanguardPunch_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_VanguardStormPunch.OnActorImpacted
// [0x00020002] 
struct USFXCustomAction_VanguardStormPunch_execOnActorImpacted_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_VanguardStormPunch.PrecacheVFX
// [0x00022002] 
struct USFXCustomAction_VanguardStormPunch_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_VanguardStormPunch.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_VanguardStormPunch_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_VanguardStormPunch.MeleeImpact
// [0x00020002] 
struct USFXCustomAction_VanguardStormPunch_execMeleeImpact_Parms
{
};

// Function SFXGameContent.SFXCustomAction_VanguardStormPunch.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_VanguardStormPunch_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_BioticStormPunch.MeleeImpact
// [0x00020002] 
struct USFXCustomAction_BioticStormPunch_execMeleeImpact_Parms
{
};

// Function SFXGameContent.SFXCustomAction_BioticStormPunch.PrecacheVFX
// [0x00022002] 
struct USFXCustomAction_BioticStormPunch_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_BioticStormPunch.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_BioticStormPunch_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_BioticStormPunch.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_BioticStormPunch_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXGameEffect_DisableAI.OnRemoved
// [0x00020002] 
struct USFXGameEffect_DisableAI_execOnRemoved_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Core*                              oController;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_DisableAI.OnApplied
// [0x00020002] 
struct USFXGameEffect_DisableAI_execOnApplied_Parms
{
	// class ABioPawn*                                 oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Core*                              oController;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnUpdate
// [0x00020802] ( FUNC_Event )
struct USFXGameEffect_AmmoPower_eventOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioWorldInfo*                            Info;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponUnequip
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponUnequip_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponEquip
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponEquip_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponReload
// [0x00020000] 
struct USFXGameEffect_AmmoPower_execOnWeaponReload_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetDamageVocProbabilityMod
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execGetDamageVocProbabilityMod_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0008 (0x0064) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnRemoved
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnRemoved_Parms
{
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetBulletsPerSecond
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execGetBulletsPerSecond_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           RateOfFire;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	// class ASFXWeapon_Shotgun_Base*                  oShotgun;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetWeaponDamage
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execGetWeaponDamage_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0008 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x006C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           fDamage;                                          		// 0x0070 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.GetHitTarget
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execGetHitTarget_Parms
{
	struct FImpactInfo                                 Impact;                                           		// 0x0000 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      ReturnValue;                                      		// 0x0064 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x006C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.SetupFromWeapon
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execSetupFromWeapon_Parms
{
};

// Function SFXGameContent.SFXGameEffect_AmmoPower.OnApplied
// [0x00020002] 
struct USFXGameEffect_AmmoPower_execOnApplied_Parms
{
};

// Function SFXGameContent.SFXGameEffect_AntiGravity.OnRemoved
// [0x00020002] 
struct USFXGameEffect_AntiGravity_execOnRemoved_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_AntiGravity.OnApplied
// [0x00020002] 
struct USFXGameEffect_AntiGravity_execOnApplied_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_ArmorWeakness.OnRemoved
// [0x00020002] 
struct USFXGameEffect_ArmorWeakness_execOnRemoved_Parms
{
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_ArmorWeakness.OnApplied
// [0x00020002] 
struct USFXGameEffect_ArmorWeakness_execOnApplied_Parms
{
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_ConstraintDmgBonus.OnRemoved
// [0x00020002] 
struct USFXGameEffect_ConstraintDmgBonus_execOnRemoved_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_ConstraintDmgBonus.OnApplied
// [0x00020002] 
struct USFXGameEffect_ConstraintDmgBonus_execOnApplied_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_CryoAmmo.GetDamageVocProbabilityMod
// [0x00020002] 
struct USFXGameEffect_CryoAmmo_execGetDamageVocProbabilityMod_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXGameEffect_CryoAmmo.DoFreezeEffect
// [0x00824002] 
struct USFXGameEffect_CryoAmmo_execDoFreezeEffect_Parms
{
	class ABioPawn*                                    oHitPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fDelay;                                           		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ForcedResistance;                                 		// 0x0028 (0x0001) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x0034 (0x0001) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x0038 (0x0008) [0x0000000000000000]              
	// struct FVector                                  vForce;                                           		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FRvrClientEffectTarget                   TargetInfo;                                       		// 0x004C (0x007C) [0x0000000000000000]              
	// class USFXGameEffect_MovementSpeedBonus*        SpeedEffect;                                      		// 0x00C8 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x00D0 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x00D4 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DelayedCryoFreeze*         FreezeEffect;                                     		// 0x00DC (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_CryoAmmo.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_CryoAmmo_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0008 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x006C (0x0008) [0x0000000000000000]              
	// class AActor*                                   oHitActor;                                        		// 0x0074 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x007C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_CryoAmmo.OnApplied
// [0x00020002] 
struct USFXGameEffect_CryoAmmo_execOnApplied_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_SpareAmmo.OnRemoved
// [0x00020002] 
struct USFXGameEffect_SpareAmmo_execOnRemoved_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_SpareAmmo.OnApplied
// [0x00020002] 
struct USFXGameEffect_SpareAmmo_execOnApplied_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnRemoved
// [0x00020002] 
struct USFXGameEffect_DelayedCryoFreeze_execOnRemoved_Parms
{
	// class USFXGameEffect_CryoFreeze*                FreezeEffect;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_HealthRegenPenalty*        HoTDebuffEffect;                                  		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnUpdate
// [0x00820002] 
struct USFXGameEffect_DelayedCryoFreeze_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRvrClientEffectTarget                   TargetInfo;                                       		// 0x0004 (0x007C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnApplied
// [0x00820002] 
struct USFXGameEffect_DelayedCryoFreeze_execOnApplied_Parms
{
	// struct FRvrClientEffectTarget                   TargetInfo;                                       		// 0x0000 (0x007C) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x007C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_DelayedCryoFreeze.OnFrozenPawnDied
// [0x00120000] 
struct USFXGameEffect_DelayedCryoFreeze_execOnFrozenPawnDied_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnRemoved
// [0x00020002] 
struct USFXGameEffect_CryoFreeze_execOnRemoved_Parms
{
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnUpdate
// [0x00820002] 
struct USFXGameEffect_CryoFreeze_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FRvrClientEffectTarget                   TargetInfo;                                       		// 0x0004 (0x007C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnApplied
// [0x00020002] 
struct USFXGameEffect_CryoFreeze_execOnApplied_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_CryoFreeze.OnFrozenPawnDied
// [0x00120000] 
struct USFXGameEffect_CryoFreeze_execOnFrozenPawnDied_Parms
{
	class ABioPawn*                                    oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_PartBasedDamageTakenBonus.OnRemoved
// [0x00020002] 
struct USFXGameEffect_PartBasedDamageTakenBonus_execOnRemoved_Parms
{
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_PartBasedDamageTakenBonus.OnApplied
// [0x00020002] 
struct USFXGameEffect_PartBasedDamageTakenBonus_execOnApplied_Parms
{
	// class USFXModule_Damage*                        DmgModule;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_DamageImmunity.OnRemoved
// [0x00020002] 
struct USFXGameEffect_DamageImmunity_execOnRemoved_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_DamageImmunity.OnApplied
// [0x00020002] 
struct USFXGameEffect_DamageImmunity_execOnApplied_Parms
{
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Cryo.OnImpact
// [0x00820002] 
struct USFXGameEffect_PowerCombo_Cryo_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0034 (0x0008) [0x0000000000000000]              
	// struct FRvrClientEffectTarget                   TargetInfo;                                       		// 0x003C (0x007C) [0x0000000000000000]              
	// class USFXGameEffect_MovementSpeedBonus*        SpeedEffect;                                      		// 0x00B8 (0x0008) [0x0000000000000000]              
	// float                                           SlowDuration;                                     		// 0x00C0 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x00C4 (0x0008) [0x0000000000000000]              
	// int                                             nMaxRagdoll;                                      		// 0x00CC (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnRemoved
// [0x00020002] 
struct USFXGameEffect_ElectricComboBeam_execOnRemoved_Parms
{
	// class ABioPawn*                                 SourcePawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class AKActor*                                  oKActor;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnUpdate
// [0x00020002] 
struct USFXGameEffect_ElectricComboBeam_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.PlayBeamEffect
// [0x00020003] ( FUNC_Final )
struct USFXGameEffect_ElectricComboBeam_execPlayBeamEffect_Parms
{
	class UParticleSystemComponent*                    PS;                                               		// 0x0000 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     TargetLocation;                                   		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_ElectricComboBeam.OnApplied
// [0x00820002] 
struct USFXGameEffect_ElectricComboBeam_execOnApplied_Parms
{
	// class ASFXKActor*                               oKActor;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x0008 (0x007C) [0x0000000000000000]              
	// class ABioPawn*                                 SourcePawn;                                       		// 0x0084 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 OwnerPawn;                                        		// 0x008C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_FireDamageOverTime.DoDamage
// [0x00020002] 
struct USFXGameEffect_FireDamageOverTime_execDoDamage_Parms
{
	// unsigned char                                   Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	// class AActor*                                   oTarget;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  Force;                                            		// 0x0020 (0x000C) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oTargetPawn;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_FireDamageOverTime.AddFireDamage
// [0x00020002] 
struct USFXGameEffect_FireDamageOverTime_execAddFireDamage_Parms
{
	float                                              AddedDamage;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              NewDuration;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class USFXGameEffect_PowerCombo_Fire*           ComboEffect;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_FireDamageOverTime.OnApplied
// [0x00020002] 
struct USFXGameEffect_FireDamageOverTime_execOnApplied_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 Target;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Fire.OnImpact
// [0x00020002] 
struct USFXGameEffect_PowerCombo_Fire_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_FireDamageOverTime*        Effect;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x003C (0x0008) [0x0000000000000000]              
	// class ASFXDuringAsyncWorkTicker*                oTicker;                                          		// 0x0044 (0x0008) [0x0000000000000000]              
	// struct FName                                    BoneName;                                         		// 0x004C (0x0008) [0x0000000000000000]              
	// int                                             nIndex;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
	// struct FVector                                  BoneLocation;                                     		// 0x0058 (0x000C) [0x0000000000000000]              
	// int                                             nFlameCount;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Fire.OnPowerComboDetonated
// [0x00020002] 
struct USFXGameEffect_PowerCombo_Fire_execOnPowerComboDetonated_Parms
{
	class USFXPowerCustomAction*                       DetonationPower;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_HealShieldOverTime.OnUpdate
// [0x00020002] 
struct USFXGameEffect_HealShieldOverTime_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oPawn;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           RegenAmount;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	// class ASFXShield_Base*                          oShield;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.AddGameEffects
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execAddGameEffects_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.GetDamageVocProbabilityMod
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execGetDamageVocProbabilityMod_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnWeaponImpact
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execOnWeaponImpact_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FImpactInfo                                 Impact;                                           		// 0x0008 (0x0064) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   oHitActor;                                        		// 0x006C (0x0008) [0x0000000000000000]              
	// float                                           fExtraDamage;                                     		// 0x0074 (0x0004) [0x0000000000000000]              
	// float                                           LastExplosionTime;                                		// 0x0078 (0x0004) [0x0000000000000000]              
	// class USFXGameEffect_FireDamageOverTime*        DamageEffect;                                     		// 0x007C (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0084 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 HitPawn;                                          		// 0x008C (0x0008) [0x0000000000000000]              
	// float                                           fZeroDamage;                                      		// 0x0094 (0x0004) [0x0000000000000000]              
	// struct FVector                                  fZeroForce;                                       		// 0x0098 (0x000C) [0x0000000000000000]              
	// class AActor*                                   oTargetOverride;                                  		// 0x00A4 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x00AC (0x0001) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnRemoved
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execOnRemoved_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.OnApplied
// [0x00020002] 
struct USFXGameEffect_IncendiaryAmmo_execOnApplied_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_IncendiaryAmmo.PrecacheVFX
// [0x00022002] 
struct USFXGameEffect_IncendiaryAmmo_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Biotic.OnPowerComboDetonated
// [0x00020002] 
struct USFXGameEffect_PowerCombo_Biotic_execOnPowerComboDetonated_Parms
{
	class USFXPowerCustomAction*                       DetonationPower;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_PowerCombo_Electric.OnImpact
// [0x00020002] 
struct USFXGameEffect_PowerCombo_Electric_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_ElectricComboBeam*         BeamEffect;                                       		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_Pull.OnRemoved
// [0x00020002] 
struct USFXGameEffect_Pull_execOnRemoved_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_Pull.MoveActor
// [0x00020002] 
struct USFXGameEffect_Pull_execMoveActor_Parms
{
	struct FVector                                     vForce;                                           		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_Pull.OnUpdate
// [0x00020002] 
struct USFXGameEffect_Pull_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXGameEffect_Pull.OnApplied
// [0x00020002] 
struct USFXGameEffect_Pull_execOnApplied_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           Effect;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_Ragdoll.OnRemoved
// [0x00020002] 
struct USFXGameEffect_Ragdoll_execOnRemoved_Parms
{
	// class ABioPawn*                                 Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_Ragdoll.OnApplied
// [0x00020002] 
struct USFXGameEffect_Ragdoll_execOnApplied_Parms
{
	// class ABioPawn*                                 Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// struct FVector                                  impulse;                                          		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.HasOtherGravityEffects
// [0x00020002] 
struct USFXGameEffect_ShockwaveLift_execHasOtherGravityEffects_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0004 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect*                           oEffect;                                          		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnRemoved
// [0x00020002] 
struct USFXGameEffect_ShockwaveLift_execOnRemoved_Parms
{
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnUpdate
// [0x00020002] 
struct USFXGameEffect_ShockwaveLift_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  Force;                                            		// 0x0004 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_ShockwaveLift.OnApplied
// [0x00020002] 
struct USFXGameEffect_ShockwaveLift_execOnApplied_Parms
{
};

// Function SFXGameContent.SFXGameEffect_WeaponVFXChange.OnRemoved
// [0x00020002] 
struct USFXGameEffect_WeaponVFXChange_execOnRemoved_Parms
{
};

// Function SFXGameContent.SFXGameEffect_WeaponVFXChange.OnApplied
// [0x00020002] 
struct USFXGameEffect_WeaponVFXChange_execOnApplied_Parms
{
};

// Function SFXGameContent.SFXGameEffect_WeightCapacity.OnRemoved
// [0x00020002] 
struct USFXGameEffect_WeightCapacity_execOnRemoved_Parms
{
	// class ASFXPawn_Player*                          Player;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_WeightCapacity.OnApplied
// [0x00020002] 
struct USFXGameEffect_WeightCapacity_execOnApplied_Parms
{
	// class ASFXPawn_Player*                          Player;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPlaceable.ActivatePlaceable
// [0x00020102] 
struct ASFXPlaceable_execActivatePlaceable_Parms
{
};

// Function SFXGameContent.SFXPlaceable.DeactivatePlaceable
// [0x00020102] 
struct ASFXPlaceable_execDeactivatePlaceable_Parms
{
};

// Function SFXGameContent.SFXPlaceable.AllowPlaceableDamageEvents
// [0x00020002] 
struct ASFXPlaceable_execAllowPlaceableDamageEvents_Parms
{
	class AController*                                 EventInstigator;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPlaceable.ImpactWithPower
// [0x00020102] 
struct ASFXPlaceable_execImpactWithPower_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       Caster;                                           		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Force;                                            		// 0x0028 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0034 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x003C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPlaceable.AreaDamage
// [0x00020002] 
struct ASFXPlaceable_execAreaDamage_Parms
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Force;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ImpactRadius;                                     		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AActor*                                   NearbyActor;                                      		// 0x0014 (0x0008) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000000]              
	// class AActor*                                   TargetOverride;                                   		// 0x0028 (0x0008) [0x0000000000000000]              
	// unsigned char                                   Resistance;                                       		// 0x0030 (0x0001) [0x0000000000000000]              
	// struct FVector                                  vForce;                                           		// 0x0034 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPlaceable.AreaDamageForActor
// [0x00020000] 
struct ASFXPlaceable_execAreaDamageForActor_Parms
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPlaceable.PlaceableDestroyed
// [0x00020102] 
struct ASFXPlaceable_execPlaceableDestroyed_Parms
{
};

// Function SFXGameContent.SFXPlaceable.ResetPlaceable
// [0x00020102] 
struct ASFXPlaceable_execResetPlaceable_Parms
{
};

// Function SFXGameContent.SFXPlaceable.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASFXPlaceable_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking.InitializeRotation
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_SuperSeeking_execInitializeRotation_Parms
{
	class APawn*                                       oCasterPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// float                                           fAngle;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FVector                                  vToTarget;                                        		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rToTarget;                                        		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 rDeltaRot;                                        		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FQuat                                    qToTarget;                                        		// 0x0040 (0x0010) [0x0000000000000000]              
	// struct FQuat                                    qCameraRot;                                       		// 0x0050 (0x0010) [0x0000000000000000]              
	// struct FQuat                                    qDeltaRot;                                        		// 0x0060 (0x0010) [0x0000000000000000]              
	// float                                           fPitchRatio;                                      		// 0x0070 (0x0004) [0x0000000000000000]              
	// struct FQuat                                    AimOffset;                                        		// 0x0080 (0x0010) [0x0000000000000000]              
	// float                                           fAimScale;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking.TickAimRotation
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_SuperSeeking_execTickAimRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SeekVector;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// float                                           Factor;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	// struct FQuat                                    Q;                                                		// 0x0020 (0x0010) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Tick_Prediction
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_Seeking_execTick_Prediction_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXProjectile_PowerCustomAction_Seeking* oTargetProjectile;                                		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FRotator                                 NewRotation;                                      		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Recycle
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_Seeking_execRecycle_Parms
{
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.InitializeRotation
// [0x00020000] 
struct ASFXProjectile_PowerCustomAction_Seeking_execInitializeRotation_Parms
{
	class APawn*                                       oCasterPawn;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.InitializePowerProjectile
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_Seeking_execInitializePowerProjectile_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTravelSpeed;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRadius;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXPowerCustomAction*                       oPower;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class APawn*                                    oCasterPawn;                                      		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.PawnEvadedPower
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_Seeking_execPawnEvadedPower_Parms
{
	class ABioPawn*                                    Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Label;                                            		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              TimeBeforeImpact;                                 		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.CanLockOn
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_Seeking_execCanLockOn_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class APawn*                                       CasterPawn;                                       		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class AKActor*                                  oKActor;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// class USFXSelectionModule*                      Module;                                           		// 0x001C (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ASFXPlaceable*                            oCP;                                              		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Tick
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_Seeking_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.TickAimRotation
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_Seeking_execTickAimRotation_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     SeekVector;                                       		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// struct FQuat                                    Q;                                                		// 0x0010 (0x0010) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.TickAim
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_Seeking_execTickAim_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  V;                                                		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.GetAimLocation
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_Seeking_execGetAimLocation_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  AimLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x0020 (0x0008) [0x0000000000000000]              
	// class ASFXPlaceable*                            CP;                                               		// 0x0028 (0x0008) [0x0000000000000000]              
	// class USFXSimpleUseModule*                      UseModule;                                        		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.Timer
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_Seeking_execTimer_Parms
{
	// class APawn*                                    PawnTarget;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Seeking.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASFXProjectile_PowerCustomAction_Seeking_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.ReplicateExplode
// [0x00020000] 
struct ASFXProjectile_PowerCustomAction_Shockwave_execReplicateExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.Tick
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_Shockwave_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.InitializePowerProjectile
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_Shockwave_execInitializePowerProjectile_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTravelSpeed;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRadius;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXPowerCustomAction*                       oPower;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     PC;                                               		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.ProcessTouch
// [0x00020002] 
struct ASFXProjectile_PowerCustomAction_Shockwave_execProcessTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave.HitWall
// [0x00020802] ( FUNC_Event )
struct ASFXProjectile_PowerCustomAction_Shockwave_eventHitWall_Parms
{
	struct FVector                                     HitNormal;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      Wall;                                             		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         WallComp;                                         		// 0x0014 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
};

// Function SFXGameContent.SFXWeaponGameEffect_DamageBonus.OnRemoved
// [0x00020002] 
struct USFXWeaponGameEffect_DamageBonus_execOnRemoved_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXWeaponGameEffect_DamageBonus.OnApplied
// [0x00020002] 
struct USFXWeaponGameEffect_DamageBonus_execOnApplied_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXWeapon_Pistol_Predator.GetWeaponSpecificDecalData
// [0x00420102] 
struct ASFXWeapon_Pistol_Predator_execGetWeaponSpecificDecalData_Parms
{
	class USFXPhysicalMaterialDecals*                  DecalEffects;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UDecalComponent*                             ReturnValue;                                      		// 0x000C (0x0008) [0x0000000004000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_EditInline )
	// int                                             DecalLength;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_IsTreasureUnlocked.Activated
// [0x00020002] 
struct USFXSeqAct_IsTreasureUnlocked_execActivated_Parms
{
	// int                                             ModLevel;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	// class AWorldInfo*                               WI;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ASFXGame*                                 Game;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_ToggleTutorialTracking.Activated
// [0x00020002] 
struct USFXSeqAct_ToggleTutorialTracking_execActivated_Parms
{
	// class ASFXGame*                                 oGame;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.BioPlaypenVolumeAdditive.UnTouch
// [0x00020802] ( FUNC_Event )
struct ABioPlaypenVolumeAdditive_eventUnTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 Pawn;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         Controller;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.BioPlaypenVolumeAdditive.Touch
// [0x00020802] ( FUNC_Event )
struct ABioPlaypenVolumeAdditive_eventTouch_Parms
{
	class AActor*                                      Other;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UPrimitiveComponent*                         OtherComp;                                        		// 0x0008 (0x0008) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 Pawn;                                             		// 0x0028 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         Controller;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0038 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bPreviouslyInPlaypen;                             		// 0x003C (0x0004) [0x0000000000000000]              
	// class ABioPlaypenVolume*                        oPlaypen;                                         		// 0x0040 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAI_Cannibal.DrawDifficulty
// [0x00020002] 
struct ASFXAI_Cannibal_execDrawDifficulty_Parms
{
	class UBioCheatManager*                            CM;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class USFXDifficultyHandler*                    DH;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FName                                    ParamName;                                        		// 0x0010 (0x0008) [0x0000000000000000]              
	// struct FName                                    CategoryName;                                     		// 0x0018 (0x0008) [0x0000000000000000]              
	// class USFXModule_Damage*                        DmgMod;                                           		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAI_Cannibal.Initialize
// [0x00020002] 
struct ASFXAI_Cannibal_execInitialize_Parms
{
	// class USFXDifficultyHandler*                    DH;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_Damage*                        DmgMod;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Cannibal*                        Cannibal;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAI_Cannibal.ShouldMelee
// [0x00020002] 
struct ASFXAI_Cannibal_execShouldMelee_Parms
{
	class AActor*                                      MeleeTarget;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn_Cannibal*                        Cannibal;                                         		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAI_Cannibal.SetMovementSpeed
// [0x00020002] 
struct ASFXAI_Cannibal_execSetMovementSpeed_Parms
{
	// class ASFXPawn_Cannibal*                        Cannibal;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAI_Cannibal.GetNearestDeadBody
// [0x00020003] ( FUNC_Final )
struct ASFXAI_Cannibal_execGetNearestDeadBody_Parms
{
	class ASFXPawn*                                    ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 NearbyPawn;                                       		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXPawn*                                 Nearest;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
	// float                                           fDist;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	// float                                           fNearest;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAI_Cannibal.IsValidEatingTarget
// [0x00024003] ( FUNC_Final )
struct ASFXAI_Cannibal_execIsValidEatingTarget_Parms
{
	class ASFXPawn*                                    DeadBody;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAlreadyUsedEatCount;                             		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXGameEffect*                           Effect;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0018 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0020 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAI_Cannibal.ShouldUseGrenade
// [0x00020003] ( FUNC_Final )
struct ASFXAI_Cannibal_execShouldUseGrenade_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXPowerCustomAction*                    Power;                                            		// 0x0004 (0x0008) [0x0000000000000000]              
	// int                                             FireTargetIndex;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	// float                                           GlobalGrenadeCooldown;                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPawn_Cannibal.GetPowerResistance
// [0x00420102] 
struct ASFXPawn_Cannibal_execGetPowerResistance_Parms
{
	class APawn*                                       Caster;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0014 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	float                                              Damage;                                           		// 0x0020 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     Force;                                            		// 0x0024 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	class UClass*                                      DamageType;                                       		// 0x0030 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      TargetOverride;                                   		// 0x0038 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned char                                      ReturnValue;                                      		// 0x0040 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPawn_Cannibal.EnableArmorPieces
// [0x00020103] ( FUNC_Final )
struct ASFXPawn_Cannibal_execEnableArmorPieces_Parms
{
	// class USFXModule_Armour*                        ArmourMod;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPawn_Cannibal.ApplyMarauderArmourBuff
// [0x00020102] 
struct ASFXPawn_Cannibal_execApplyMarauderArmourBuff_Parms
{
};

// Function SFXGameContent.SFXPawn_Cannibal.ApplyCannibalBuff
// [0x00020103] ( FUNC_Final )
struct ASFXPawn_Cannibal_execApplyCannibalBuff_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPawn_Cannibal.OnBuffCannibal
// [0x00020002] 
struct ASFXPawn_Cannibal_execOnBuffCannibal_Parms
{
	class USFXSeqAct_BuffCannibal*                     Seq;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPawn_Cannibal.PlayDying
// [0x00020102] 
struct ASFXPawn_Cannibal_execPlayDying_Parms
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLoc;                                           		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPawn_Cannibal.PostBeginPlay
// [0x00020102] 
struct ASFXPawn_Cannibal_execPostBeginPlay_Parms
{
};

// Function SFXGameContent.SFXPawn_Cannibal.ReplicatedEvent
// [0x00020102] 
struct ASFXPawn_Cannibal_execReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXAICmd_Base_Cannibal.FindBodyToConsume
// [0x00020002] 
struct USFXAICmd_Base_Cannibal_execFindBodyToConsume_Parms
{
	// class ASFXPawn*                                 DeadPawn;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Cannibal*                        Cannibal;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAICmd_Base_Cannibal.NotifyFriendDied
// [0x00020002] 
struct USFXAICmd_Base_Cannibal_execNotifyFriendDied_Parms
{
	class ABioPawn*                                    FriendPawn;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXPawn*                                 DeadPawn;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Cannibal*                        Cannibal;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAICmd_Base_Cover.NotifyMoodChange
// [0x00020002] 
struct USFXAICmd_Base_Cover_execNotifyMoodChange_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXAICmd_Base_Cover.NotifyPendingPowerImpact
// [0x00020002] 
struct USFXAICmd_Base_Cover_execNotifyPendingPowerImpact_Parms
{
	struct FName                                       Label;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              TimeBeforeImpact;                                 		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXPowerCustomAction*                       Power;                                            		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            Projectile;                                       		// 0x0014 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   EvadeAction;                                      		// 0x001C (0x0001) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAICmd_Base_Cover.NotifyTakeHit
// [0x00020002] 
struct USFXAICmd_Base_Cover_execNotifyTakeHit_Parms
{
	class AController*                                 instigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// unsigned char                                   EvadeAction;                                      		// 0x002C (0x0001) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAICmd_Base_Cover.ShouldAttack
// [0x00020002] 
struct USFXAICmd_Base_Cover_execShouldAttack_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// float                                           HealthPct;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAICmd_Base_Cover.Resumed
// [0x00020002] 
struct USFXAICmd_Base_Cover_execResumed_Parms
{
	struct FName                                       OldCommandName;                                   		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXAICmd_Base_Cover.Pushed
// [0x00020002] 
struct USFXAICmd_Base_Cover_execPushed_Parms
{
};

// Function SFXGameContent.SFXAI_TutorialCannibal.Initialize
// [0x00020002] 
struct ASFXAI_TutorialCannibal_execInitialize_Parms
{
	// class USFXDifficultyHandler*                    DH;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_Damage*                        DmgMod;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAICmd_Cannibal_ConsumeBody.NotifyTakeHit
// [0x00020002] 
struct USFXAICmd_Cannibal_ConsumeBody_execNotifyTakeHit_Parms
{
	class AController*                                 instigatedBy;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	int                                                Damage;                                           		// 0x0014 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXAICmd_Cannibal_ConsumeBody.Popped
// [0x00020002] 
struct USFXAICmd_Cannibal_ConsumeBody_execPopped_Parms
{
	// class ASFXPawn_Cannibal*                        Cannibal;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAICmd_Cannibal_ConsumeBody.Pushed
// [0x00020002] 
struct USFXAICmd_Cannibal_ConsumeBody_execPushed_Parms
{
	// class ASFXPawn_Cannibal*                        Cannibal;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAmmoContainer.ReplicatedEvent
// [0x00020902] ( FUNC_Event )
struct ASFXAmmoContainer_eventReplicatedEvent_Parms
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXAmmoContainer.GiveTo
// [0x00020002] 
struct ASFXAmmoContainer_execGiveTo_Parms
{
	class APawn*                                       P;                                                		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class UBioRemoteLogger*                         GLogger;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXAmmoContainer.StartSleeping
// [0x00020002] 
struct ASFXAmmoContainer_execStartSleeping_Parms
{
};

// Function SFXGameContent.SFXAmmoContainer.SetRespawn
// [0x00020002] 
struct ASFXAmmoContainer_execSetRespawn_Parms
{
};

// Function SFXGameContent.SFXAmmoContainer.SetInitialState
// [0x00020902] ( FUNC_Event )
struct ASFXAmmoContainer_eventSetInitialState_Parms
{
};

// Function SFXGameContent.SFXCustomAction_AILadderClimbUp.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_AILadderClimbUp_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_AILadderClimbUp.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_AILadderClimbUp_execStartCustomAction_Parms
{
	// class ASFXNav_LadderNode*                       LadderNode;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_AIMantleUp.GetBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_AIMantleUp_execGetBodyStanceAnim_Parms
{
	struct FBodyStance                                 ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_AIMantleUp.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_AIMantleUp_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_AIMantleUp.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_AIMantleUp_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_CannibalConsumeBody.ClientDoCustomAction
// [0x00024002] 
struct USFXCustomAction_CannibalConsumeBody_execClientDoCustomAction_Parms
{
	unsigned long                                      bForced;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_CannibalConsumeBody.Replicate
// [0x00020002] 
struct USFXCustomAction_CannibalConsumeBody_execReplicate_Parms
{
};

// Function SFXGameContent.SFXCustomAction_CannibalConsumeBody.PowerMeUp
// [0x00020002] 
struct USFXCustomAction_CannibalConsumeBody_execPowerMeUp_Parms
{
	// class ASFXPawn_Cannibal*                        Cannibal;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_CannibalConsumeBody.PlayDeathEffect
// [0x00020102] 
struct USFXCustomAction_CannibalConsumeBody_execPlayDeathEffect_Parms
{
	// class ASFXPawn_PlayerParty*                     PartyPawn;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_CannibalConsumeBody.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_CannibalConsumeBody_execStopCustomAction_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_CannibalConsumeBody.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_CannibalConsumeBody_execStartCustomAction_Parms
{
	// struct FVector                                  VectToBody;                                       		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ConsumeDestination;                               		// 0x000C (0x000C) [0x0000000000000000]              
	// struct FVector                                  DestOffset;                                       		// 0x0018 (0x000C) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0024 (0x0008) [0x0000000000000000]              
	// class ASFXAI_Cannibal*                          AI;                                               		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_CannibalConsumeBody.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_CannibalConsumeBody_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXAI_Cannibal*                          CannibalAI;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_SpawnEntrance.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_SpawnEntrance_execStartCustomAction_Parms
{
	// class USFXSelectionModule*                      SelectionMod;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_CannibalCrawlEntrance.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_CannibalCrawlEntrance_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_CannibalMelee.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_CannibalMelee_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_CannibalRoar.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_CannibalRoar_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_CannibalRoar.ClientDoCustomActionImpact
// [0x00024002] 
struct USFXCustomAction_CannibalRoar_execClientDoCustomActionImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bFirstTarget;                                     		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0028 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	// class USFXModule_Timeline*                      TimeMod;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class UBioCustomAction*                         Action;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_CustomLoopingInteraction.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_CustomLoopingInteraction_execStartCustomAction_Parms
{
	// class ASFXNav_InteractionHenchCustom*           CustomInteractionPoint;                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_DeathReaction.PlayImpactSound
// [0x00020002] 
struct USFXCustomAction_DeathReaction_execPlayImpactSound_Parms
{
};

// Function SFXGameContent.SFXCustomAction_DeathReaction.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_DeathReaction_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXCustomAction_DeathReaction.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_DeathReaction_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_Knockback.StopAnim
// [0x00020002] 
struct USFXCustomAction_DeathReaction_Knockback_execStopAnim_Parms
{
};

// Function SFXGameContent.SFXCustomAction_DeathReaction_Knockback.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_DeathReaction_Knockback_execStartCustomAction_Parms
{
	// class ABioPlayerController*                     oCont;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPlayer;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HenchBeckonFront.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchBeckonFront_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HenchBeckonRear.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchBeckonRear_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HenchCrouch.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchCrouch_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HenchCrouch.TriggerEnd
// [0x00020002] 
struct USFXCustomAction_HenchCrouch_execTriggerEnd_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchCrouch.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchCrouch_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchInteractLow.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchInteractLow_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HenchInteractLow.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchInteractLow_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchInteractLow.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchInteractLow_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.TryNextMelee
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execTryNextMelee_Parms
{
	// struct FBodyStance                              BS_ToPlay;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.CanContinueMelee
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execCanContinueMelee_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 EnemyTarget;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
	// float                                           DistToTarget;                                     		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.BodyStanceAnimEndNotification
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execBodyStanceAnimEndNotification_Parms
{
	class UAnimNodeSequence*                           SeqNode;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              PlayedTime;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              ExcessTime;                                       		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FBodyStance                              BS_ToPlay;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execStopCustomAction_Parms
{
	// struct FBodyStance                              BS_ToPlay;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execStartCustomAction_Parms
{
	// struct FBodyStance                              BS_ToPlay;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.GetBodyStanceAnim
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execGetBodyStanceAnim_Parms
{
	unsigned char                                      Stage;                                            		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FBodyStance                                 ReturnValue;                                      		// 0x0004 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
	// struct FBodyStance                              BS_Stance;                                        		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.ShouldUsePistolAnim
// [0x00020002] 
struct USFXCustomAction_HenchmanMelee_execShouldUsePistolAnim_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXWeapon*                               HenchWeapon;                                      		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HenchmanMelee.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_HenchmanMelee_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXCustomAction_HenchOmniTool.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchOmniTool_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HenchOmniTool.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchOmniTool_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchOmniTool.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchOmniTool_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchOmniToolCrouch_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchOmniToolCrouch_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchOmniToolCrouch.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchOmniToolCrouch_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchRollBackward.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchRollBackward_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchRollForward.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchRollForward_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchRollLeft.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchRollLeft_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchRollRight.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_HenchRollRight_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchStandIdle.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchStandIdle_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_HenchStandIdle.TriggerEnd
// [0x00020002] 
struct USFXCustomAction_HenchStandIdle_execTriggerEnd_Parms
{
};

// Function SFXGameContent.SFXCustomAction_HenchStandTyping.CanOverrideMoveWith
// [0x00020002] 
struct USFXCustomAction_HenchStandTyping_execCanOverrideMoveWith_Parms
{
	int                                                OldCustomAction;                                  		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NewCustomAction;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             idx;                                              		// 0x000C (0x0004) [0x0000000000000000]              
	// class UClass*                                   NewClass;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
	// class UClass*                                   OldClass;                                         		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_ReaperArmorBuff.StopCustomAction
// [0x00020002] 
struct USFXCustomAction_ReaperArmorBuff_execStopCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_ReaperArmorBuff.ApplyBuff
// [0x00020002] 
struct USFXCustomAction_ReaperArmorBuff_execApplyBuff_Parms
{
	// class ASFXPawn*                                 P;                                                		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXCustomAction_ReaperArmorBuff.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_ReaperArmorBuff_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_ShieldBreach.StartCustomAction
// [0x00020002] 
struct USFXCustomAction_ShieldBreach_execStartCustomAction_Parms
{
};

// Function SFXGameContent.SFXCustomAction_ShieldBreach.InternalCanDoCustomAction
// [0x00080002] 
struct USFXCustomAction_ShieldBreach_execInternalCanDoCustomAction_Parms
{
	class ABioPawn*                                    SyncPawn;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bForced;                                          		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXCustomAction_ShieldBreach.GetUsedAnimNames
// [0x00422802] ( FUNC_Event )
struct USFXCustomAction_ShieldBreach_eventGetUsedAnimNames_Parms
{
	struct TArray<struct FName>                        UsedAnims;                                        		// 0x0000 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnRemoved
// [0x00020002] 
struct USFXGameEffect_DefensiveArmor_execOnRemoved_Parms
{
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.TurnVFXOff
// [0x00020002] 
struct USFXGameEffect_DefensiveArmor_execTurnVFXOff_Parms
{
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.TurnVFXOn
// [0x00820002] 
struct USFXGameEffect_DefensiveArmor_execTurnVFXOn_Parms
{
	// struct FRvrClientEffectTarget                   CETarget;                                         		// 0x0000 (0x007C) [0x0000000000000000]              
	// class URvrClientEffectManager*                  Manager;                                          		// 0x007C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnUpdate
// [0x00020002] 
struct USFXGameEffect_DefensiveArmor_execOnUpdate_Parms
{
	float                                              DeltaSeconds;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class ABioWorldInfo*                            Info;                                             		// 0x0004 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_DefensiveArmor.OnApplied
// [0x00020002] 
struct USFXGameEffect_DefensiveArmor_execOnApplied_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RestoreSaveState
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execRestoreSaveState_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ShouldUsePower
// [0x00420802] ( FUNC_Event )
struct USFXPowerCustomAction_DefensiveShield_eventShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.DoJoinInProgress
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execDoJoinInProgress_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.CanUsePower
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execCanUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_DefensiveShield_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execResetPower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ClientDoPowerSubsequentImpact
// [0x00024002] 
struct USFXPowerCustomAction_DefensiveShield_execClientDoPowerSubsequentImpact_Parms
{
	class AActor*                                      oActor;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                CustomActionReactionType;                         		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Duration;                                         		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	int                                                ImpactCount;                                      		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              Delay;                                            		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      DoCallback;                                       		// 0x0018 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.TryApplyArmor
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execTryApplyArmor_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.SetupEffect
// [0x00020003] ( FUNC_Final )
struct USFXPowerCustomAction_DefensiveShield_execSetupEffect_Parms
{
	class USFXGameEffect_DefensiveArmor*               Effect;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.ApplyArmor
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execApplyArmor_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DefensiveArmor*            ArmorEffect;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.RemoveArmor
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execRemoveArmor_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_DefensiveShield.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_DefensiveShield_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_MaxGrenadeBonus.OnRemoved
// [0x00020002] 
struct USFXGameEffect_MaxGrenadeBonus_execOnRemoved_Parms
{
	// class ABioPawn*                                 BP;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inv;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXGameEffect_MaxGrenadeBonus.OnApplied
// [0x00020002] 
struct USFXGameEffect_MaxGrenadeBonus_execOnApplied_Parms
{
	// class ABioPawn*                                 BP;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inv;                                              		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPawn_Anderson.OnSetAimTarget
// [0x00020002] 
struct ASFXPawn_Anderson_execOnSetAimTarget_Parms
{
	class USFXSeqAct_SetAimTarget*                     Seq;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ABioAiController*                         AI;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_ConcussiveShot_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_ConcussiveShot_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.ShouldUsePower
// [0x00420002] 
struct USFXPowerCustomAction_ConcussiveShot_execShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPawn*                                 oPawn;                                            		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.GetAmmoPowerProjectile
// [0x00020002] 
struct USFXPowerCustomAction_ConcussiveShot_execGetAmmoPowerProjectile_Parms
{
	class URvrClientEffectInterface*                   ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.OnRagdollPhysicsImpact
// [0x00020002] 
struct USFXPowerCustomAction_ConcussiveShot_execOnRagdollPhysicsImpact_Parms
{
	class APawn*                                       oPawn;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpactActor;                                     		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     vImpactDir;                                       		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ABioPawn*                                 oBioPawn;                                         		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.PlayDetonationEffects
// [0x00024002] 
struct USFXPowerCustomAction_ConcussiveShot_execPlayDetonationEffects_Parms
{
	struct FVector                                     ImpactLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ImpactNormal;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.GetDamageType
// [0x00020002] 
struct USFXPowerCustomAction_ConcussiveShot_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.OnPowerDetonated
// [0x00024002] 
struct USFXPowerCustomAction_ConcussiveShot_execOnPowerDetonated_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	class AActor*                                      HitActor;                                         		// 0x0020 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_ConcussiveShot_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXPawn*                                 oPawn;                                            		// 0x002C (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	// class UClass*                                   DamageType;                                       		// 0x0038 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bRagdolled;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.GetImpactForce
// [0x00020002] 
struct USFXPowerCustomAction_ConcussiveShot_execGetImpactForce_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x000C (0x0008) [0x0000000000000000]              
	// float                                           fForce;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.GetImpactDamage
// [0x00420002] 
struct USFXPowerCustomAction_ConcussiveShot_execGetImpactDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0014 (0x0008) [0x0000000000000000]              
	// float                                           fDamage;                                          		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.StartPower
// [0x00020002] 
struct USFXPowerCustomAction_ConcussiveShot_execStartPower_Parms
{
	// class ASFXWeapon*                               Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.GetProjectileAttachPoint
// [0x00420002] 
struct USFXPowerCustomAction_ConcussiveShot_execGetProjectileAttachPoint_Parms
{
	struct FVector                                     AttachPoint;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FRotator                                 Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.ReleasePower
// [0x00020002] 
struct USFXPowerCustomAction_ConcussiveShot_execReleasePower_Parms
{
	// struct FVector                                  EffectLocation;                                   		// 0x0000 (0x000C) [0x0000000000000000]              
	// struct FRotator                                 EffectRotation;                                   		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_ConcussiveShot.PrecacheVFX
// [0x00022002] 
struct USFXPowerCustomAction_ConcussiveShot_execPrecacheVFX_Parms
{
	class ASFXObjectPool*                              ObjectPool;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class URvrClientEffectManager*                     ClientEffects;                                    		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetDefaultClientEffectParams
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execGetDefaultClientEffectParams_Parms
{
	struct FVector                                     ReturnValue;                                      		// 0x0000 (0x000C) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  Param;                                            		// 0x000C (0x000C) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_FragGrenade_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.OnImpact
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execOnImpact_Parms
{
	unsigned char                                      Resistance;                                       		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class AActor*                                      oImpacted;                                        		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                nPreviouslyImpacted;                              		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitLocation;                                      		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x001C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0028 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x002C (0x0008) [0x0000000000000000]              
	// class USFXGameEffect_DamageOverTime*            Effect;                                           		// 0x0034 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x003C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.ApplyGrenadeBonus
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execApplyGrenadeBonus_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetDamageType
// [0x00020002] 
struct USFXPowerCustomAction_FragGrenade_execGetDamageType_Parms
{
	class UClass*                                      ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.GetImpactDamage
// [0x00420002] 
struct USFXPowerCustomAction_FragGrenade_execGetImpactDamage_Parms
{
	class AActor*                                      oImpacted;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	float                                              ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_FragGrenade.PlayDetonationEffects
// [0x00024002] 
struct USFXPowerCustomAction_FragGrenade_execPlayDetonationEffects_Parms
{
	struct FVector                                     ImpactLocation;                                   		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ImpactNormal;                                     		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	class ASFXProjectile_PowerCustomAction*            oProjectile;                                      		// 0x0018 (0x0008) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.GetHUDWheelIconInfo
// [0x00020802] ( FUNC_Event )
struct USFXPowerCustomAction_GrenadeBase_eventGetHUDWheelIconInfo_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ShouldUsePower
// [0x00420802] ( FUNC_Event )
struct USFXPowerCustomAction_GrenadeBase_eventShouldUsePower_Parms
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     sOptionalInfo;                                    		// 0x0008 (0x0010) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.GetGrenadeCount
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execGetGrenadeCount_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ASFXInventoryManager*                     oInventory;                                       		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.AdjustGrenadeCount
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execAdjustGrenadeCount_Parms
{
	int                                                Amount;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ReleasePower
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execReleasePower_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.CanUsePower
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execCanUsePower_Parms
{
	class AActor*                                      oTarget;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FString                                  EmptyString;                                      		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// unsigned long                                   Result;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ApplyGrenadeBonus
// [0x00020000] 
struct USFXPowerCustomAction_GrenadeBase_execApplyGrenadeBonus_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execResetPower_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnSquadMemberAdded
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execOnSquadMemberAdded_Parms
{
	class APawn*                                       Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowerRankIncreased
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execOnPowerRankIncreased_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowerAdded
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execOnPowerAdded_Parms
{
	class USFXPowerCustomActionBase*                   Power;                                            		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_GrenadeBase.OnPowersLoaded
// [0x00020002] 
struct USFXPowerCustomAction_GrenadeBase_execOnPowersLoaded_Parms
{
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_Fortification_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_Fortification_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_Fortification_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.RemoveArmor
// [0x00020002] 
struct USFXPowerCustomAction_Fortification_execRemoveArmor_Parms
{
	// class UBioCheatManager*                         CheatManager;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.StartPowerCooldown
// [0x00020000] 
struct USFXPowerCustomAction_Fortification_execStartPowerCooldown_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_Fortification.ApplyArmor
// [0x00020002] 
struct USFXPowerCustomAction_Fortification_execApplyArmor_Parms
{
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_AndersonPassive.PopulatePowerStatBarEvolves
// [0x00020002] 
struct USFXPowerCustomAction_AndersonPassive_execPopulatePowerStatBarEvolves_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_AndersonPassive.EvolvePower
// [0x00020002] 
struct USFXPowerCustomAction_AndersonPassive_execEvolvePower_Parms
{
	unsigned char                                      choice;                                           		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_AndersonPassive.ResetPower
// [0x00020002] 
struct USFXPowerCustomAction_AndersonPassive_execResetPower_Parms
{
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_AndersonPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomAction_AndersonPassive_execApplyGlobalBonus_Parms
{
	// class ABioPawn*                                 oSquadMember;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXModule_GameEffectManager*             Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// int                                             Index;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon_SniperRifle_Base*              SniperRifle;                                      		// 0x001C (0x0008) [0x0000000000000000]              
	// class ASFXWeapon_AssaultRifle_Base*             AssaultRifle;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXPowerCustomAction_HenchmanPassive.RecalculateAllPowerData
// [0x00024002] 
struct USFXPowerCustomAction_HenchmanPassive_execRecalculateAllPowerData_Parms
{
	unsigned long                                      bReset;                                           		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
};

// Function SFXGameContent.SFXPowerCustomAction_HenchmanPassive.ApplyGlobalBonus
// [0x00020002] 
struct USFXPowerCustomAction_HenchmanPassive_execApplyGlobalBonus_Parms
{
};

// Function SFXGameContent.SFXPowerCustomAction_EnemyGrenade.GetProjectileAttachPoint
// [0x00420002] 
struct USFXPowerCustomAction_EnemyGrenade_execGetProjectileAttachPoint_Parms
{
	struct FVector                                     AttachPoint;                                      		// 0x0000 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXProjectile_PowerCustomAction_ConcussiveShot.InitializePowerProjectile
// [0x00020102] 
struct ASFXProjectile_PowerCustomAction_ConcussiveShot_execInitializePowerProjectile_Parms
{
	class AActor*                                      oCaster;                                          		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              fTravelSpeed;                                     		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              fRadius;                                          		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class USFXPowerCustomAction*                       oPower;                                           		// 0x0010 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXPowerCustomAction_ConcussiveShot*     ConcussiveShot;                                   		// 0x001C (0x0008) [0x0000000000000000]              
	// struct FVector                                  vParams;                                          		// 0x0024 (0x000C) [0x0000000000000000]              
	// class URvrClientEffectInterface*                ConcussiveShotAmmoPowerProjectile;                		// 0x0030 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_EndObjective.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_EndObjective_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXSeqAct_EndObjective.Activated
// [0x00020002] 
struct USFXSeqAct_EndObjective_execActivated_Parms
{
	// class USFXGUIInteraction*                       oGUI;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGUI_Markers*                          oObjectiveMarkers;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXModule_MarkerObjective*               ObjModNewObjective;                               		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContent.SFXSeqAct_SetObjective.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_SetObjective_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXSeqAct_SetObjective.Activated
// [0x00020002] 
struct USFXSeqAct_SetObjective_execActivated_Parms
{
	// class USFXModule_MarkerObjectiveSP*             ObjModNewObjective;                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGUIInteraction*                       oGUI;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXGUI_Markers*                          oObjectiveMarkers;                                		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	// unsigned long                                   ShouldDisplayObjective;                           		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_DropPod.Recycle
// [0x00020102] 
struct ASFXProjectile_DropPod_execRecycle_Parms
{
};

// Function SFXGameContent.SFXProjectile_DropPod.ProjectileHurtRadius
// [0x00020002] 
struct ASFXProjectile_DropPod_execProjectileHurtRadius_Parms
{
	float                                              InDamageAmount;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              InDamageRadius;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Momentum;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HurtOrigin;                                       		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x0018 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0024 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned long                                   bCausedDamage;                                    		// 0x0028 (0x0004) [0x0000000000000000]              
	// class AActor*                                   Victim;                                           		// 0x002C (0x0008) [0x0000000000000000]              
	// struct FTraceHitInfo                            HitInfo;                                          		// 0x0034 (0x0028) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_DropPod.GetDamageRadius
// [0x00020102] 
struct ASFXProjectile_DropPod_execGetDamageRadius_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXProjectile_DropPod.GetDamage
// [0x00020102] 
struct ASFXProjectile_DropPod_execGetDamage_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContent.SFXProjectile_DropPod.Explode
// [0x00820102] 
struct ASFXProjectile_DropPod_execExplode_Parms
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     HitNormal;                                        		// 0x000C (0x000C) [0x0000000000000080]              ( CPF_Parm )
	// class ASFXPlayerController*                     PC;                                               		// 0x0018 (0x0008) [0x0000000000000000]              
	// float                                           fDistance;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	// float                                           fScale;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	// struct FScreenShakeStruct                       Shake;                                            		// 0x0028 (0x0078) [0x0000000000000000]              
	// class UForceFeedbackWaveform*                   Rumble;                                           		// 0x00A0 (0x0008) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x00A8 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_DropPod.Tick
// [0x00020102] 
struct ASFXProjectile_DropPod_execTick_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FVector                                  V;                                                		// 0x0004 (0x000C) [0x0000000000000000]              
	// float                                           Dist;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContent.SFXProjectile_DropPod.Init
// [0x00020102] 
struct ASFXProjectile_DropPod_execInit_Parms
{
	struct FVector                                     Direction;                                        		// 0x0000 (0x000C) [0x0000000000000080]              ( CPF_Parm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif