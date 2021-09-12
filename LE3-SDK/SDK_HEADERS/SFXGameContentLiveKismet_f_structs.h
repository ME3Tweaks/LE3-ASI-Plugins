/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentLiveKismet_f_structs.h
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

// Function SFXGameContentLiveKismet.BioSeqAct_GiveMissionXP.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_GiveMissionXP_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.SFXSeqAct_ClearAreaMap.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_ClearAreaMap_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.SFXSeqAct_ClearAreaMap.Activated
// [0x00020002] 
struct USFXSeqAct_ClearAreaMap_execActivated_Parms
{
	// class ABioWorldInfo*                            oWorldInfo;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXGUIInteraction*                       Manager;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_GetHenchmenInSquad.Activated
// [0x00020002] 
struct USFXSeqAct_GetHenchmenInSquad_execActivated_Parms
{
	// class ABioBaseSquad*                            PlayerSquad;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioAiController*                         CurrentController;                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// class APawn*                                    SwapPawn;                                         		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_GetHenchmenInSquad.GetPriority
// [0x00020002] 
struct USFXSeqAct_GetHenchmenInSquad_execGetPriority_Parms
{
	class APawn*                                       Henchman;                                         		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	float                                              ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.SFXSeqAct_GetTag.Activated
// [0x00020002] 
struct USFXSeqAct_GetTag_execActivated_Parms
{
};

// Function SFXGameContentLiveKismet.sfxseqact_leavemission.GrantAutomaticGawAssets
// [0x00020003] ( FUNC_Final )
struct Usfxseqact_leavemission_execGrantAutomaticGawAssets_Parms
{
	// class AWorldInfo*                               WI;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXGame*                                 Game;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FTD                                      LevelTreasure;                                    		// 0x0010 (0x0054) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  MissionName;                                      		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// class USFXGAWAssetsHandler*                     GAWHandler;                                       		// 0x0074 (0x0008) [0x0000000000000000]              
	// int                                             idx;                                              		// 0x007C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.sfxseqact_leavemission.Activated
// [0x00020802] ( FUNC_Event )
struct Usfxseqact_leavemission_eventActivated_Parms
{
	// int                                             MissionCount;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	// class UBioGlobalVariableTable*                  gv;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
	// struct FString                                  CurrentMap;                                       		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FLeaveMissionData                        LeaveMission;                                     		// 0x001C (0x0024) [0x0000000000000000]              
	// class AWorldInfo*                               WorldInfo;                                        		// 0x0040 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x0048 (0x0008) [0x0000000000000000]              
	// class ASFXPlayerController*                     SPC;                                              		// 0x0050 (0x0008) [0x0000000000000000]              
	// class ASFXPawn_Player*                          pPawn;                                            		// 0x0058 (0x0008) [0x0000000000000000]              
	// struct FName                                    AchievementMapCode;                               		// 0x0060 (0x0008) [0x0000000000000000]              
	// struct TArray<struct FTelemetryAttribute>       aTelAttribs;                                      		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContentLiveKismet.sfxseqact_leavemission.getWorld
// [0x00020002] 
struct Usfxseqact_leavemission_execgetWorld_Parms
{
	class ABioWorldInfo*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_SaveGame_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.BeginSave
// [0x00020002] 
struct USFXSeqAct_SaveGame_execBeginSave_Parms
{
	struct FSFXSaveDescriptor                          Descriptor;                                       		// 0x0000 (0x0028) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.Deactivated
// [0x00020002] 
struct USFXSeqAct_SaveGame_execDeactivated_Parms
{
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.Update
// [0x00020002] 
struct USFXSeqAct_SaveGame_execUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.Activated
// [0x00820002] 
struct USFXSeqAct_SaveGame_execActivated_Parms
{
	// class ABioPlayerController*                     PC;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// class USFXEngine*                               Engine;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXPRI*                                  PRI;                                              		// 0x0010 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bOptionCanAutoSave;                               		// 0x0018 (0x0004) [0x0000000000000000]              
	// struct FSFXSaveDescriptor                       SaveDescriptor;                                   		// 0x001C (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.GetBioPlayerController
// [0x00020003] ( FUNC_Final )
struct USFXSeqAct_SaveGame_execGetBioPlayerController_Parms
{
	class ABioPlayerController*                        ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class UObject*                                  ChkTarget;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SaveGame.CanSave
// [0x00020002] 
struct USFXSeqAct_SaveGame_execCanSave_Parms
{
	class ABioPlayerController*                        PC;                                               		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// class USFXEngine*                               Engine;                                           		// 0x000C (0x0008) [0x0000000000000000]              
	// class ULocalPlayer*                             LP;                                               		// 0x0014 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetTag.Activated
// [0x00020002] 
struct USFXSeqAct_SetTag_execActivated_Parms
{
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetWasInSquad.Activated
// [0x00020802] ( FUNC_Event )
struct USFXSeqAct_SetWasInSquad_eventActivated_Parms
{
	// class UBioGlobalVariableTable*                  gv;                                               		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetWasInSquad.getWorld
// [0x00020002] 
struct USFXSeqAct_SetWasInSquad_execgetWorld_Parms
{
	class ABioWorldInfo*                               ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints.CanSpendTallentPoints
// [0x00020003] ( FUNC_Final )
struct USFXSeqCond_CanSpendTallentPoints_execCanSpendTallentPoints_Parms
{
	unsigned long                                      ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// int                                             i;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	// unsigned long                                   bCanSpendPoints;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	// class ABioPawn*                                 oPawn;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	// class ABioBaseSquad*                            oSquad;                                           		// 0x0014 (0x0008) [0x0000000000000000]              
	// class ABioWorldInfo*                            oBWI;                                             		// 0x001C (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints.Deactivated
// [0x00020802] ( FUNC_Event )
struct USFXSeqCond_CanSpendTallentPoints_eventDeactivated_Parms
{
};

// Function SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints.Activated
// [0x00020802] ( FUNC_Event )
struct USFXSeqCond_CanSpendTallentPoints_eventActivated_Parms
{
};

// Function SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_GetMembersOfSquad_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad.Activated
// [0x00020002] 
struct UBioSeqAct_GetMembersOfSquad_execActivated_Parms
{
	// class ABioBaseSquad*                            oCurrentSquad;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	// int                                             i;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	// int                                             N;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad.FindAPawn
// [0x00040003] ( FUNC_Final )
struct UBioSeqAct_GetMembersOfSquad_execFindAPawn_Parms
{
	class APawn*                                       ReturnValue;                                      		// 0x0000 (0x0008) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.SFXSeqAct_GetMapName.Activated
// [0x00020002] 
struct USFXSeqAct_GetMapName_execActivated_Parms
{
	// class ABioWorldInfo*                            WorldInfo;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqCond_CombatArea.Activated
// [0x00020802] ( FUNC_Event )
struct USFXSeqCond_CombatArea_eventActivated_Parms
{
	// class ABioPlayerController*                     oPC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.BioSeqAct_CancelHint.Activated
// [0x00020002] 
struct UBioSeqAct_CancelHint_execActivated_Parms
{
	// class USFXGUIInteraction*                       Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.BioSeqAct_CheckIfInVolume.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_CheckIfInVolume_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.BioSeqAct_CheckIfInVolume.Activated
// [0x00020002] 
struct UBioSeqAct_CheckIfInVolume_execActivated_Parms
{
	// class AActor*                                   oActor;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.BioSeqAct_ShowHint.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct UBioSeqAct_ShowHint_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.BioSeqAct_ShowHint.Activated
// [0x00020002] 
struct UBioSeqAct_ShowHint_execActivated_Parms
{
	// class USFXGUIInteraction*                       Manager;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_CompareAliveSquadMembers.Activated
// [0x00020002] 
struct USFXSeqAct_CompareAliveSquadMembers_execActivated_Parms
{
	// int                                             nIndex;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	// int                                             SquadIdx;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	// class ABioBaseSquad*                            Squad;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_ForcePlayerIntoCover.Activated
// [0x00820002] 
struct USFXSeqAct_ForcePlayerIntoCover_execActivated_Parms
{
	// class UObject*                                  Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ABioPlayerController*                     PC;                                               		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ABioPawn*                                 Pawn;                                             		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	// class UClass*                                   CurrentWeapon;                                    		// 0x0020 (0x0008) [0x0000000000000000]              
	// struct FVector                                  SourceLoc;                                        		// 0x0028 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TargetLoc;                                        		// 0x0034 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitLocation;                                      		// 0x0040 (0x000C) [0x0000000000000000]              
	// struct FVector                                  HitNormal;                                        		// 0x004C (0x000C) [0x0000000000000000]              
	// struct FCovPosInfo                              CoverInfo;                                        		// 0x0058 (0x0038) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_RingworldSimulator.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_RingworldSimulator_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.SFXSeqAct_RingworldSimulator.Update
// [0x00020802] ( FUNC_Event )
struct USFXSeqAct_RingworldSimulator_eventUpdate_Parms
{
	float                                              DeltaTime;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FVector                                  VectorBP;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	// struct FVector                                  VectorAB;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	// struct FVector                                  VectorX;                                          		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  TeleportVector;                                   		// 0x002C (0x000C) [0x0000000000000000]              
	// float                                           fDist;                                            		// 0x0038 (0x0004) [0x0000000000000000]              
	// float                                           fTotal;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	// float                                           fLocPerc;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	// struct FRotator                                 rWorldRotation;                                   		// 0x0044 (0x000C) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_RingworldSimulator.Activated
// [0x00020000] 
struct USFXSeqAct_RingworldSimulator_execActivated_Parms
{
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetPawnInvulnerable.Activated
// [0x00020802] ( FUNC_Event )
struct USFXSeqAct_SetPawnInvulnerable_eventActivated_Parms
{
	// class ABioPawn*                                 CurrentPawn;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UObject*                                  CurrentTarget;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// class AVehicle*                                 V;                                                		// 0x0010 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetMusicID.Activated
// [0x00020002] 
struct USFXSeqAct_SetMusicID_execActivated_Parms
{
};

// Function SFXGameContentLiveKismet.SFXSeqAct_GetActorHealth.Activated
// [0x00020802] ( FUNC_Event )
struct USFXSeqAct_GetActorHealth_eventActivated_Parms
{
};

// Function SFXGameContentLiveKismet.SFXSeqAct_GiveAmmo.Activated
// [0x00020002] 
struct USFXSeqAct_GiveAmmo_execActivated_Parms
{
	// class UObject*                                  ChkObject;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	// class APawn*                                    ChkPawn;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     InvManager;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0018 (0x0008) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_GiveAmmo.AdjustAmmo
// [0x00020002] 
struct USFXSeqAct_GiveAmmo_execAdjustAmmo_Parms
{
	class ASFXWeapon*                                  Weapon;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// int                                             AmmoAmount;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetWeaponClass.GetObjClassVersion
// [0x00022802] ( FUNC_Event )
struct USFXSeqAct_SetWeaponClass_eventGetObjClassVersion_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetWeaponClass.Activated
// [0x00020002] 
struct USFXSeqAct_SetWeaponClass_execActivated_Parms
{
	// class ABioPawn*                                 CurrentPawn;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	// class UObject*                                  CurrentObject;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon*                               CurrentWeapon;                                    		// 0x0010 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     Inventory;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	// unsigned long                                   bSuccess;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
};

// Function SFXGameContentLiveKismet.SFXSeqAct_SetWeaponClass.GetIsWeaponOfRequestedClass
// [0x00020002] 
struct USFXSeqAct_SetWeaponClass_execGetIsWeaponOfRequestedClass_Parms
{
	class ASFXWeapon*                                  WeaponToCheck;                                    		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function SFXGameContentLiveKismet.SFXSeqCond_HasAmmo.Activated
// [0x00020002] 
struct USFXSeqCond_HasAmmo_execActivated_Parms
{
	// class APawn*                                    TargetPawn;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	// class ASFXWeapon*                               Weapon;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	// class ASFXInventoryManager*                     InvManager;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif