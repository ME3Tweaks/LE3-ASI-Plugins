/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContent_classes.h
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

#define CONST_TELEPORT_HEIGHT_THRESHOLD                          1000.f
#define CONST_TELEPORT_VISIBLE_THRESHOLD                         0.5f

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum SFXGameContent.SFXCustomAction_HenchmanMelee.HenchMeleeStage
/*enum HenchMeleeStage
{
	HM_Attack1                                         = 0,
	HM_Attack2                                         = 1,
	HM_Attack3                                         = 2,
	HM_MAX                                             = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContent.SFXVocalizationManagerSP
// 0x0000 (0x02C0 - 0x02C0)
class ASFXVocalizationManagerSP : public ASFXVocalizationManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGRISP
// 0x0003 (0x0380 - 0x037D)
class ASFXGRISP : public ASFXGRI
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameInfoSP
// 0x0000 (0x083C - 0x083C)
class ASFXGameInfoSP : public ASFXGame
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool AwardItem ( struct FName ItemName, struct FString Level );
	bool AwardCredits ( int Amount, struct FString Level, unsigned long bShowNotification );
	bool AwardCreditPercent ( float fAmount, struct FString Level, unsigned long bShowNotifications );
	bool AwardXP ( int Amount, struct FString Level, unsigned long bShowNotifications );
	class ANavigationPoint* FindPlayerStart ( class AController* Player, unsigned char InTeam, struct FString IncomingName );
	void eventPostBeginPlay ( );
};

// Class SFXGameContent.SFXSeqAct_DebugImportXP
// 0x0004 (0x00FC - 0x00F8)
class USFXSeqAct_DebugImportXP : public USequenceAction
{
public:
	int                                                StartingLevelID;                                  		// 0x00F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_GiveStartingConsumables
// 0x0000 (0x00F8 - 0x00F8)
class USFXSeqAct_GiveStartingConsumables : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_OpenWeaponSelection
// 0x0010 (0x0120 - 0x0110)
class USFXSeqAct_OpenWeaponSelection : public UBioSequenceLatentAction
{
public:
	class UGFxMovieInfo*                               WeaponSelectionMovieInfo;                         		// 0x0110 (0x0008) [0x0000000000000000]              
	int                                                MaxWeapons;                                       		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      ShowAllWeapons : 1;                               		// 0x011C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsFinished : 1;                                  		// 0x011C (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OnMovieClosedDelegate ( class USFXGUIMovie* i_ScreenToClose );
	bool UpdateOp ( float fDeltaT );
	void Activated ( );
};

// Class SFXGameContent.SFXTreasureDataLive
// 0x0000 (0x0080 - 0x0080)
class USFXTreasureDataLive : public USFXTreasureData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCharacterClass_Content
// 0x0003 (0x0230 - 0x022D)
class USFXCharacterClass_Content : public USFXCharacterClass
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_Revive
// 0x000E (0x014C - 0x013E)
class USFXCustomAction_Revive : public USFXCustomAction_SingleAnim
{
public:
	class ASFXPawn_PlayerParty*                        DownedPlayer;                                     		// 0x0140 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSuccessRevive : 1;                               		// 0x0148 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void Replicate ( );
	void ClientDoCustomAction ( unsigned long bForced );
	void CheckFiring ( );
	void TickCustomAction ( float DeltaTime );
	void StopCustomAction ( );
	void Resurrect ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_Reload
// 0x0018 (0x0128 - 0x0110)
class USFXCustomAction_Reload : public USFXCustomAction_ReloadBase
{
public:
	struct FBodyStance                                 BS_Anim;                                          		// 0x0110 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              fAnimBlendInTime;                                 		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimBlendOutTime;                                		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_ActivateWeaponFlashlight
// 0x000A (0x0148 - 0x013E)
class USFXCustomAction_ActivateWeaponFlashlight : public USFXCustomAction_SingleAnim
{
public:
	class USFXAnimSetCookSpec*                         AnimInfo;                                         		// 0x0140 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_MantleLookAt
// 0x0062 (0x01E8 - 0x0186)
class USFXCustomAction_MantleLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Mid_Cov_Right_Start;                           		// 0x0188 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_Loop;                            		// 0x0198 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_End;                             		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Start;                            		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Loop;                             		// 0x01C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_End;                              		// 0x01D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

// Class SFXGameContent.SFXCustomAction_CoverSlipLookAt
// 0x0062 (0x01E8 - 0x0186)
class USFXCustomAction_CoverSlipLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Mid_Cov_Right_Start;                           		// 0x0188 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_Loop;                            		// 0x0198 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_End;                             		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Start;                            		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Loop;                             		// 0x01C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_End;                              		// 0x01D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

// Class SFXGameContent.SFXCustomAction_StdCoverSlipLookAt
// 0x0062 (0x01E8 - 0x0186)
class USFXCustomAction_StdCoverSlipLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Std_Cov_Right_Start;                           		// 0x0188 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_Loop;                            		// 0x0198 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_End;                             		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Start;                            		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Loop;                             		// 0x01C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_End;                              		// 0x01D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

// Class SFXGameContent.SFXCustomAction_SwatTurnLookAt
// 0x0062 (0x01E8 - 0x0186)
class USFXCustomAction_SwatTurnLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Mid_Cov_Right_Start;                           		// 0x0188 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_Loop;                            		// 0x0198 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Right_End;                             		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Start;                            		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_Loop;                             		// 0x01C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Mid_Cov_Left_End;                              		// 0x01D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

// Class SFXGameContent.SFXCustomAction_StdSwatTurnLookAt
// 0x0062 (0x01E8 - 0x0186)
class USFXCustomAction_StdSwatTurnLookAt : public USFXCustomAction_LookAtLoop
{
public:
	struct FBodyStance                                 BS_Std_Cov_Right_Start;                           		// 0x0188 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_Loop;                            		// 0x0198 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Right_End;                             		// 0x01A8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Start;                            		// 0x01B8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_Loop;                             		// 0x01C8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Std_Cov_Left_End;                              		// 0x01D8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FlinchActionOverride ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
	struct FBodyStance GetEndBodyStanceAnim ( );
	struct FBodyStance GetLoopBodyStanceAnim ( );
	struct FBodyStance GetStartBodyStanceAnim ( );
};

// Class SFXGameContent.SFXCustomAction_GapJump
// 0x004B (0x0158 - 0x010D)
class USFXCustomAction_GapJump : public UBioCustomAction
{
public:
	struct FBodyStance                                 BS_Anim;                                          		// 0x0110 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ASFXNav_JumpNode*                            StartPoint;                                       		// 0x0120 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ASFXNav_JumpNode*                            EndPoint;                                         		// 0x0128 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ASFXReachSpecPlaceholderCylinder*            BlockingStartCylinder;                            		// 0x0130 (0x0008) [0x0000000000000000]              
	class ASFXReachSpecPlaceholderCylinder*            BlockingEndCylinder;                              		// 0x0138 (0x0008) [0x0000000000000000]              
	float                                              fAnimPlayRate;                                    		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimBlendInTime;                                 		// 0x0144 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimBlendOutTime;                                		// 0x0148 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimStartTime;                                   		// 0x014C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              fAnimDuration;                                    		// 0x0150 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ERootMotionMode;                                  		// 0x0154 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RootBoneX;                                        		// 0x0155 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RootBoneY;                                        		// 0x0156 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RootBoneZ;                                        		// 0x0157 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool NotifyBump ( class AActor* Other, struct FVector HitNormal );
	void EndThisCustomAction ( );
	void RemoveBlockingEndPoints ( );
	void BlockMoveEndPoints ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void StartAnimation ( );
	void ReachedPrecisePosition ( );
	void AlignmentTimeout ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_StandingGapJump
// 0x0000 (0x0158 - 0x0158)
class USFXCustomAction_StandingGapJump : public USFXCustomAction_GapJump
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_JumpDown
// 0x0000 (0x01A4 - 0x01A4)
class USFXCustomAction_JumpDown : public USFXCustomAction_BoostDownBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void TickInput ( class UBioPlayerInput* Input, float DeltaTime );
	void PlayStartAnimation ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerMantleOverCover
// 0x0094 (0x05C8 - 0x0534)
class USFXCustomAction_PlayerMantleOverCover : public USFXCustomAction_MantleOverCoverBase
{
public:
	struct FBodyStance                                 BS_CoverStart;                                    		// 0x0534 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_StandingStart;                                 		// 0x0544 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_QuickStandingStart;                            		// 0x0554 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_CoverLoop;                                     		// 0x0564 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_StandingLoop;                                  		// 0x0574 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_QuickStandingLoop;                             		// 0x0584 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_CoverEnd;                                      		// 0x0594 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_StandingEnd;                                   		// 0x05A4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_QuickStandingEnd;                              		// 0x05B4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bStartFromCover : 1;                              		// 0x05C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bStartFromStorm : 1;                              		// 0x05C4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void GetEndAnim ( struct FBodyStance* Stance );
	void GetLoopAnim ( struct FBodyStance* Stance );
	void GetStartAnim ( struct FBodyStance* Stance );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void eventTickCustomAction ( float DeltaTime );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_SimpleMoveBase
// 0x0045 (0x0152 - 0x010D)
class USFXCustomAction_SimpleMoveBase : public UBioCustomAction
{
public:
	struct FBodyStance                                 BS_Anim;                                          		// 0x0110 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ASFXReachSpecPlaceholderCylinder*            BlockingStartCylinder;                            		// 0x0120 (0x0008) [0x0000000000000000]              
	class ASFXReachSpecPlaceholderCylinder*            BlockingEndCylinder;                              		// 0x0128 (0x0008) [0x0000000000000000]              
	class UReachSpec*                                  MovementPath;                                     		// 0x0130 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              MoveDistance;                                     		// 0x0138 (0x0004) [0x0000000000000000]              
	float                                              fBlendInTime;                                     		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              fBlendOutTime;                                    		// 0x0140 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAlignPawnBeforeMove : 1;                         		// 0x0144 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned char                                      BlendType;                                        		// 0x0148 (0x0001) [0x0000000000000000]              
	unsigned char                                      RootBoneX;                                        		// 0x0149 (0x0001) [0x0000000000000000]              
	unsigned char                                      RootBoneY;                                        		// 0x014A (0x0001) [0x0000000000000000]              
	unsigned char                                      RootBoneZ;                                        		// 0x014B (0x0001) [0x0000000000000000]              
	unsigned char                                      RMM;                                              		// 0x014C (0x0001) [0x0000000000000000]              
	unsigned char                                      RootRotationPitch;                                		// 0x014D (0x0001) [0x0000000000000000]              
	unsigned char                                      RootRotationYaw;                                  		// 0x014E (0x0001) [0x0000000000000000]              
	unsigned char                                      RootRotationRoll;                                 		// 0x014F (0x0001) [0x0000000000000000]              
	unsigned char                                      RMRM;                                             		// 0x0150 (0x0001) [0x0000000000000000]              
	unsigned char                                      MovePhysics;                                      		// 0x0151 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	bool CanBeInterrupted ( );
	void DestTimeout ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void PlayStartAnimation ( );
	struct FBodyStance GetBodyStanceAnim ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void RemoveBlockingEndPoints ( );
	void BlockMoveEndPoints ( );
	void eventReachedPrecisePosition ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_PlayerMantleUp
// 0x002E (0x0180 - 0x0152)
class USFXCustomAction_PlayerMantleUp : public USFXCustomAction_SimpleMoveBase
{
public:
	struct FBodyStance                                 BS_MantleUpOutOfCover;                            		// 0x0154 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_MantleUpInCover;                               		// 0x0164 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class ACoverSlotMarker*                            StartingSlot;                                     		// 0x0174 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bStartInCover : 1;                                		// 0x017C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomAction ( unsigned long bForced );
	void ServerStartCustomAction ( int NewAction, class ABioPawn* Sync, int NewPowerAction );
	void Replicate ( );
	struct FBodyStance GetBodyStanceAnim ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_PlayerCoverSlipLeft
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_PlayerCoverSlipLeft : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndThisCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerCoverSlipLeftStanding
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_PlayerCoverSlipLeftStanding : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndThisCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerCoverSlipRight
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_PlayerCoverSlipRight : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndThisCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerCoverSlipRightStanding
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_PlayerCoverSlipRightStanding : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndThisCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerLadderClimbUp
// 0x0034 (0x01EC - 0x01B8)
class USFXCustomAction_PlayerLadderClimbUp : public USFXCustomAction_ClimbUpBase
{
public:
	struct FBodyStance                                 BS_CloseLadderEnter;                              		// 0x01B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBodyStance                                 BS_FarLadderEnter;                                		// 0x01C8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UAnimSet*                                    LadderAnimSet;                                    		// 0x01D8 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              DecayRate;                                        		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              CloseEnterDistance;                               		// 0x01E4 (0x0004) [0x0000000000000000]              
	float                                              JumpStartDistance;                                		// 0x01E8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void PreAlignPawnLocation ( );
	void SetMoveStage ( unsigned char NextStage );
	void TickCustomAction ( float DeltaTime );
	void SyncRotation ( float Alpha );
	void SyncJumpEntrance ( float Alpha );
	void TickAlignment ( float DeltaTime );
	void StartCustomAction ( );
	void TickInput ( class UBioPlayerInput* Input, float DeltaTime );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_PlayerLadderClimbDown
// 0x0000 (0x01B0 - 0x01B0)
class USFXCustomAction_PlayerLadderClimbDown : public USFXCustomAction_LadderClimbDownBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void TickInput ( class UBioPlayerInput* Input, float DeltaTime );
};

// Class SFXGameContent.SFXCustomAction_PlayerEvadeLeft
// 0x0004 (0x0144 - 0x0140)
class USFXCustomAction_PlayerEvadeLeft : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RollOverride ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_PlayerEvadeRight
// 0x0004 (0x0144 - 0x0140)
class USFXCustomAction_PlayerEvadeRight : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RollOverride ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_PlayerEvadeForward
// 0x0014 (0x0154 - 0x0140)
class USFXCustomAction_PlayerEvadeForward : public USFXCustomAction_PlayerEvadeBase
{
public:
	struct FVector                                     MoveOffset;                                       		// 0x0140 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MoveDist;                                         		// 0x014C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bHitWallEnabled : 1;                              		// 0x0150 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void RollOverride ( );
	void StopCustomAction ( );
	void TurnOnHitWall ( );
	bool NotifyHitWall ( struct FVector HitNormal, class AActor* Wall );
	void EndThisCustomAction ( );
	void SyncRotation ( float Alpha, struct FVector ToEnd2D );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_PlayerEvadeBackwards
// 0x0004 (0x0144 - 0x0140)
class USFXCustomAction_PlayerEvadeBackwards : public USFXCustomAction_PlayerEvadeBase
{
public:
	float                                              MoveDist;                                         		// 0x0140 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void RollOverride ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_MantleMelee
// 0x0010 (0x0260 - 0x0250)
class USFXCustomAction_MantleMelee : public USFXCustomAction_PlayerMeleeBase
{
public:
	struct TArray<class AActor*>                       HitActors;                                        		// 0x0250 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void EndThisCustomAction ( );
	void Breakout ( );
	bool NotifyBump ( class AActor* Other, struct FVector HitNormal );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_SyncCoverGrab
// 0x0067 (0x020C - 0x01A5)
class USFXCustomAction_SyncCoverGrab : public USFXCustomAction_ClassMelee
{
public:
	struct FBodyStance                                 BS_AttackerMirror;                                		// 0x01A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBodyStance                                 BS_VictimMirror;                                  		// 0x01B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FBasedPosition                              VictimLocation;                                   		// 0x01C8 (0x0038) [0x0000000000000000]              
	class ASFXReachSpecPlaceholderCylinder*            PlaceholderCylinder;                              		// 0x0200 (0x0008) [0x0000000000000000]              
	unsigned long                                      bMirroredAttack : 1;                              		// 0x0208 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void NonSyncedAction ( );
	void SyncAttack ( );
	void GetVictimAnim ( struct FBodyStance* Stance );
	void GetAttackerAnim ( struct FBodyStance* Stance );
	class ABioPawn* GetVictimPawn ( );
	void StartCustomAction ( );
	bool ShouldPlayMirrorAnim ( );
	bool VerifyVictimDestIsClear ( class ABioPawn* VictimPawn, struct FVector DestinationPos );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void StartMeleeAttack ( );
};

// Class SFXGameContent.SFXCustomAction_SyncCoverMelee
// 0x0010 (0x0260 - 0x0250)
class USFXCustomAction_SyncCoverMelee : public USFXCustomAction_PlayerMeleeBase
{
public:
	struct FBodyStance                                 BS_AnimPistol;                                    		// 0x0250 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void MeleeImpact ( );
	void StopCustomAction ( );
	void EndThisCustomAction ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_CoverMeleeRight
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_CoverMeleeRight : public USFXCustomAction_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class ABioPawn* GetVictimPawn ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
};

// Class SFXGameContent.SFXCustomAction_CoverMeleeLeft
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_CoverMeleeLeft : public USFXCustomAction_CoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void NonSyncedAction ( );
};

// Class SFXGameContent.SFXCustomAction_StdCoverMeleeLeft
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_StdCoverMeleeLeft : public USFXCustomAction_CoverMeleeLeft
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StdCoverMeleeRight
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_StdCoverMeleeRight : public USFXCustomAction_CoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_HvyCoverMeleeRight
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_HvyCoverMeleeRight : public USFXCustomAction_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class ABioPawn* GetVictimPawn ( );
	void GetMeleeImpactParameters ( struct FAreaEffectParameters* ImpactParams );
	void NonSyncedAction ( );
};

// Class SFXGameContent.SFXCustomAction_HvyCoverMeleeLeft
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_HvyCoverMeleeLeft : public USFXCustomAction_HvyCoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void NonSyncedAction ( );
};

// Class SFXGameContent.SFXCustomAction_HvyStdCoverMeleeLeft
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_HvyStdCoverMeleeLeft : public USFXCustomAction_HvyCoverMeleeLeft
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_HvyStdCoverMeleeRight
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_HvyStdCoverMeleeRight : public USFXCustomAction_HvyCoverMeleeRight
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_RifleMeleeOne
// 0x0004 (0x0254 - 0x0250)
class USFXCustomAction_RifleMeleeOne : public USFXCustomAction_PlayerMeleeBase
{
public:
	float                                              BladeImpactScale;                                 		// 0x0250 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void EndAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoRifleMeleeTwo ( );
	void RifleMeleeSecondary ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_RifleMeleeTwo
// 0x0000 (0x0254 - 0x0254)
class USFXCustomAction_RifleMeleeTwo : public USFXCustomAction_RifleMeleeOne
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoRifleMeleeThree ( );
	void RifleMeleeThird ( );
};

// Class SFXGameContent.SFXCustomAction_RifleMeleeThree
// 0x0000 (0x0254 - 0x0254)
class USFXCustomAction_RifleMeleeThree : public USFXCustomAction_RifleMeleeTwo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void RifleMeleeThird ( );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
};

// Class SFXGameContent.SFXCustomAction_PistolMeleeOne
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_PistolMeleeOne : public USFXCustomAction_PlayerMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void StopCustomAction ( );
	void EndAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoPistolMeleeTwo ( );
	void PistolMeleeSecondary ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_PistolMeleeTwo
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_PistolMeleeTwo : public USFXCustomAction_PistolMeleeOne
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void DoPistolMeleeThree ( );
	void PistolMeleeThird ( );
};

// Class SFXGameContent.SFXCustomAction_PistolMeleeThree
// 0x0000 (0x0250 - 0x0250)
class USFXCustomAction_PistolMeleeThree : public USFXCustomAction_PistolMeleeTwo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void HeavyMelee ( );
	void NoHeavyMelee ( );
	void PistolMeleeThird ( );
	void ReplicateImpact ( class ABioPawn* Target, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
};

// Class SFXGameContent.SFXCustomAction_PlayerStandardImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerStandardImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerStandardImpactForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerStandardImpactForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerStandardImpactLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerStandardImpactLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerStandardImpactRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerStandardImpactRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerMeleed
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerMeleed : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_KnockbackImpactForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_KnockbackImpactForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_MeleedLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_MeleedLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_MeleedRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_MeleedRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_KnockbackImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_KnockbackImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_KnockbackImpactLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_KnockbackImpactLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_KnockbackImpactRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_KnockbackImpactRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_MeleedForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_MeleedForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_FlinchBase
// 0x00CC (0x020A - 0x013E)
class USFXCustomAction_FlinchBase : public USFXCustomAction_SingleAnim
{
public:
	struct FBodyStance                                 BS_Reaction;                                      		// 0x0140 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAlt;                                   		// 0x0150 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionMidRight;                              		// 0x0160 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltMidRight;                           		// 0x0170 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionMidLeft;                               		// 0x0180 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltMidLeft;                            		// 0x0190 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionStdRight;                              		// 0x01A0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltStdRight;                           		// 0x01B0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionStdLeft;                               		// 0x01C0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_ReactionAltStdLeft;                            		// 0x01D0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UAnimSet*                                    AnimSet;                                          		// 0x01E0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallSoundPlayer;                             		// 0x01E8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallImpactSoundPlayer;                       		// 0x01F0 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallSoundHench;                              		// 0x01F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 CloseCallImpactSoundHench;                        		// 0x0200 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverType;                                        		// 0x0208 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CoverAction;                                      		// 0x0209 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PlayImpactSound ( );
	void PlayWhizSound ( );
	void FlinchActionOverride ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_FlinchLight
// 0x0002 (0x020C - 0x020A)
class USFXCustomAction_FlinchLight : public USFXCustomAction_FlinchBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_FlinchHeavy
// 0x0002 (0x020C - 0x020A)
class USFXCustomAction_FlinchHeavy : public USFXCustomAction_FlinchBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerOnFire
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerOnFire : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCharacterClass_Vanguard
// 0x0000 (0x0230 - 0x0230)
class USFXCharacterClass_Vanguard : public USFXCharacterClass_Content
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXPowerCustomAction_AmmoPower
// 0x0088 (0x084C - 0x07C4)
class USFXPowerCustomAction_AmmoPower : public USFXPowerCustomAction_AmmoPowerBase
{
public:
	class UClass*                                      WeaponPowerEffectClass;                           		// 0x07C4 (0x0008) [0x0000000000000000]              
	class UClass*                                      ConcussiveShotDamageType;                         		// 0x07CC (0x0008) [0x0000000000000000]              
	struct FGuid                                       OmniToolGuid;                                     		// 0x07D4 (0x0010) [0x0000000000000000]              
	class UStaticMesh*                                 oTracer;                                          		// 0x07E4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oImpactVFX;                                       		// 0x07EC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleVFX;                                       		// 0x07F4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleLoopVFX;                                   		// 0x07FC (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ConcussiveShotImpact;                          		// 0x0804 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ConcussiveShotProjectile;                      		// 0x080C (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ConcussiveShotImpactSound;                        		// 0x0814 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 LoadAmmoPowerSound;                               		// 0x081C (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchmanLoadAmmoPowerSound;                       		// 0x0824 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_OmniTool;                                      		// 0x082C (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    DelayedSetWeaponPowerTarget;                      		// 0x0834 (0x0008) [0x1000000000000000]              
	float                                              SquadEffectiveness;                               		// 0x083C (0x0004) [0x0000000000000000]              
	int                                                NotRecommended_HeavyWeaponEquipped;               		// 0x0840 (0x0004) [0x0000000000000000]              
	float                                              OmniToolDuration;                                 		// 0x0844 (0x0004) [0x0000000000000000]              
	unsigned long                                      bModifyTracer : 1;                                		// 0x0848 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModifyImpactVFX : 1;                             		// 0x0848 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bModifyMuzzle : 1;                                		// 0x0848 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DelayedSetWeaponPower ( );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void DoJoinInProgress ( );
	void SetupEffect ( class USFXGameEffect_AmmoPower* Effect, class ABioPawn* oPawn );
	void OnPowerRankIncreased ( );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void DoConcussiveShotSpecialImpact ( class AActor* oImpacted, float ImpactEffectDuration );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ReplicateConcussiveShotSpecialImpact ( class ABioPawn* oImpacted, float DurationOfEffect );
	void ConcussiveShotCustomImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	bool SetWeaponPower ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon, unsigned long bOverrideCurrentPower );
	void DeferedSetWeaponPower ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ReloadAmmoPower ( class ABioPawn* Target, class ASFXWeapon* Weapon );
	void StopOmniTool ( );
	void StartCustomAction ( );
	bool CanUsePower ( class AActor* oTarget );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

// Class SFXGameContent.SFXPowerCustomAction_CryoAmmo
// 0x00C4 (0x0910 - 0x084C)
class USFXPowerCustomAction_CryoAmmo : public USFXPowerCustomAction_AmmoPower
{
public:
	struct FPowerData                                  SpeedReduction;                                   		// 0x084C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ArmorWeakness;                                    		// 0x0880 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  FreezeChance;                                     		// 0x08B4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class URvrClientEffectInterface*                   CE_HalfFrozenTemplate;                            		// 0x08E8 (0x0008) [0x0000000000000000]              
	float                                              Evolve_FreezeChanceBonus;                         		// 0x08F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_FreezeDurationBonus;                       		// 0x08F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_AmmoIncrease;                              		// 0x08F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HeadShotBonus;                             		// 0x08FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_FrozenDamageBonus;                         		// 0x0900 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_SpeedReductionBonus;                       		// 0x0904 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorWeaknessBonus;                        		// 0x0908 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpeedReductionDurationMult;                       		// 0x090C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void ResetPower ( );
	void EvolvePower ( unsigned char choice );
	void DoConcussiveShotSpecialImpact ( class AActor* oImpacted, float ImpactEffectDuration );
	void ConcussiveShotCustomImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void SetupEffect ( class USFXGameEffect_AmmoPower* Effect, class ABioPawn* oPawn );
	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
};

// Class SFXGameContent.SFXPowerCustomAction_Shockwave
// 0x018B (0x094C - 0x07C1)
class USFXPowerCustomAction_Shockwave : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  NumShockwaveImpacts;                              		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  GravityLevel;                                     		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  GravityDuration;                                  		// 0x082C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  TimeBetweenImpacts;                               		// 0x0860 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  LiftDuration;                                     		// 0x0894 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  Range;                                            		// 0x08C8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct TArray<class AActor*>                       ImpactedActors;                                   		// 0x08FC (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ImpactRumbleClass;                                		// 0x090C (0x0008) [0x0000000000000000]              
	class UClass*                                      ImpactScreenShakeClass;                           		// 0x0914 (0x0008) [0x0000000000000000]              
	class UClass*                                      ImpactActorScreenShakeClass;                      		// 0x091C (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ShockwaveImpact;                               		// 0x0924 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ImpactActorSound;                                 		// 0x092C (0x0008) [0x0000000000000000]              
	float                                              Evolve_DamageBonus;                               		// 0x0934 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x0938 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_BioticComboMult;                           		// 0x093C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x0940 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_NumShockwavesBonus;                        		// 0x0944 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumTargetsHit;                                    		// 0x0948 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void DoSubsequentImpact ( class AActor* HitActor, struct FVector ImpactLocation, int nImpactCount );
	void DoImpact ( struct FVector location, struct FRotator ProjectileRotation );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	class ASFXProjectile_PowerCustomAction* ReleaseProjectilePower ( );
};

// Class SFXGameContent.SFXPowerCustomAction_MultiProjectile
// 0x004B (0x080C - 0x07C1)
class USFXPowerCustomAction_MultiProjectile : public USFXPowerCustomAction
{
public:
	struct FAreaEffectParameters                       SecondTargetParams;                               		// 0x07C4 (0x0020) [0x0000000000004000]              ( CPF_Config )
	struct FVector                                     SecondLocation;                                   		// 0x07E4 (0x000C) [0x0000000000000000]              
	class AActor*                                      SecondTarget;                                     		// 0x07F0 (0x0008) [0x0000000000000000]              
	float                                              SecondProjectileDelay;                            		// 0x07F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SecondProjectileSpeedPercent;                     		// 0x07FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SecondProjectileMaxRange;                         		// 0x0800 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CastConeHalfAngleDeg;                             		// 0x0804 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bSecondProjectile : 1;                            		// 0x0808 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FindSecondTarget ( );
	void ReleaseSecondProjectile ( );
	void ReleasePower ( );
};

// Class SFXGameContent.SFXPowerCustomAction_Pull
// 0x006C (0x0878 - 0x080C)
class USFXPowerCustomAction_Pull : public USFXPowerCustomAction_MultiProjectile
{
public:
	struct FPowerData                                  Evolve_DoTDamagePerSec;                           		// 0x080C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct TArray<class AActor*>                       m_oCurrentPulledTargets;                          		// 0x0840 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<struct FName>                        EffectsToRemove;                                  		// 0x0850 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_DurationBonus;                             		// 0x0860 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x0864 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ExtraDamage;                               		// 0x0868 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RechargeBonus;                             		// 0x086C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MinimumVelocity;                                  		// 0x0870 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MinimumVelocityForceMult;                         		// 0x0874 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void ResetPower ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void DropCurrentTargets ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	float GetImpactForce ( class AActor* oImpacted );
	void StartPower ( );
};

// Class SFXGameContent.SFXPowerCustomAction_Discharge
// 0x0073 (0x0834 - 0x07C1)
class USFXPowerCustomAction_Discharge : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  ConeAngle;                                        		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FVector                                     ImpactLocationOffset;                             		// 0x07F8 (0x000C) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DischargeEffect;                               		// 0x0804 (0x0008) [0x0000000000000000]              
	float                                              Evolve_DamageBonus;                               		// 0x080C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ImpactRadiusBonus;                         		// 0x0810 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerRechargeSpeedBonus;                   		// 0x0814 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerRechargeSpeedBonusDuration;           		// 0x0818 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageReduction;                           		// 0x081C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_BarrierUseReduction;                       		// 0x0820 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ChanceForNoCooldown;                       		// 0x0824 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageTypePctIncrease;                     		// 0x0828 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EffectSpawnOffset;                                		// 0x082C (0x0004) [0x0000000000000000]              
	float                                              DamageImmunityDuration;                           		// 0x0830 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void EvolvePower ( unsigned char choice );
	void RecalculateAllPowerData ( unsigned long bReset );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	bool CanUsePower ( class AActor* Target );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	class UClass* GetNonRagdollDamageType ( );
	class UClass* GetDamageType ( );
	float GetDamageFromShields ( );
	void ReleaseInstantPower ( );
	void StartPower ( );
};

// Class SFXGameContent.SFXPowerCustomAction_IncendiaryAmmo
// 0x00E0 (0x092C - 0x084C)
class USFXPowerCustomAction_IncendiaryAmmo : public USFXPowerCustomAction_AmmoPower
{
public:
	struct FPowerData                                  AreaExplosionRadius;                              		// 0x084C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  AreaExplosionChance;                              		// 0x0880 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  AreaExplosionDamage;                              		// 0x08B4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FAreaEffectParameters                       AoEParams;                                        		// 0x08E8 (0x0020) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_AmmoIncrease;                              		// 0x0908 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HeadShotDamage;                            		// 0x090C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorDamageBonus;                          		// 0x0910 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus;                               		// 0x0914 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus2;                              		// 0x0918 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              PanicChanceIncrease;                              		// 0x091C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AreaExplosionVFXScale;                            		// 0x0920 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoTDuration;                                      		// 0x0924 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DoTDamage;                                        		// 0x0928 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void ResetPower ( );
	void EvolvePower ( unsigned char choice );
	class USFXGameEffect_IncendiaryAmmo* GetIncendiaryAmmoEffect ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void DoConcussiveShotSpecialImpact ( class AActor* oImpacted, float ImpactEffectDuration );
	void ConcussiveShotCustomImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void DoEvolvedAoEImpact ( struct FImpactInfo Impact, class USFXGameEffect_IncendiaryAmmo* Effect );
	void SpawnRandomImpactVFX ( class ABioPawn* Pawn, class UParticleSystem* ImpactParticleSystem, class AActor* inInstigator );
	void SetupEffect ( class USFXGameEffect_AmmoPower* Effect, class ABioPawn* oPawn );
	class UClass* GetDamageType ( );
	void ApplyPowerEffects ( class ABioPawn* oPawn, class ASFXWeapon* oWeapon );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

// Class SFXGameContent.SFXPowerCustomAction_BioticCharge
// 0x0270 (0x0A31 - 0x07C1)
class USFXPowerCustomAction_BioticCharge : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  DamageReduction;                                  		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  DamageReductionDuration;                          		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  ShieldsRestored;                                  		// 0x082C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FInterpCurveFloat                           TimeCurve;                                        		// 0x0860 (0x0014) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     FailedLineCheckName;                              		// 0x0874 (0x0010) [0x0000000000402001]              ( CPF_Edit | CPF_Transient | CPF_NeedCtorLink )
	struct TArray<struct FCharge_PendingVolume>        VolumeList;                                       		// 0x0884 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      CustomDetonationRumbleClass;                      		// 0x0894 (0x0008) [0x0000000000000000]              
	class UClass*                                      CustomDetonationScreenShakeClass;                 		// 0x089C (0x0008) [0x0000000000000000]              
	struct FScreenShakeStruct                          HitShake;                                         		// 0x08A4 (0x0078) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     CachedTeleportLocation;                           		// 0x091C (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     CachedTargetLocation;                             		// 0x0928 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     CachedStartingLocation;                           		// 0x0934 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     FailedLineCheckStart;                             		// 0x0940 (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FVector                                     FailedLineCheckEnd;                               		// 0x094C (0x000C) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	struct FName                                       BonusName;                                        		// 0x0958 (0x0008) [0x0000000000000000]              
	class APawn*                                       CachedTarget;                                     		// 0x0960 (0x0008) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	class UParticleSystem*                             PS_TeleportIn;                                    		// 0x0968 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_TeleportOut;                                   		// 0x0970 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class URvrClientEffectInterface*                   CE_CrustEffect;                                   		// 0x0978 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ChargeImpact;                                  		// 0x0980 (0x0008) [0x0000000000000000]              
	class ASFXProjectile_Power_BioticCharge*           ChargeProjectile;                                 		// 0x0988 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USFXCameraTransition_VanguardSlam*           CamTransition;                                    		// 0x0990 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UForceFeedbackWaveform*                      HitForceFeedback;                                 		// 0x0998 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 ChargeCast;                                       		// 0x09A0 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchChargeCast;                                  		// 0x09A8 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ChargeImpact;                                     		// 0x09B0 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchChargeImpact;                                		// 0x09B8 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 ChargeTakeoff;                                    		// 0x09C0 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchChargeTakeoff;                               		// 0x09C8 (0x0008) [0x0000000000000000]              
	float                                              StingerDuration;                                  		// 0x09D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              StingerSlowPct;                                   		// 0x09D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              FrozenTargetForceMult;                            		// 0x09D8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ConeAngle;                                        		// 0x09DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CooldownBonusFromMelee;                           		// 0x09E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              CooldownDurationFromMelee;                        		// 0x09E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageForceBonus;                          		// 0x09E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ImpactRadiusBonus;                         		// 0x09EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MaxImpactTargetsBonus;                     		// 0x09F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_TimedWeaponDamageBonus;                    		// 0x09F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_TimedWeaponDamageDuration;                 		// 0x09F8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_TimedPowerDamageBonus;                     		// 0x09FC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_TimedPowerDamageDuration;                  		// 0x0A00 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_NoCooldownChance;                          		// 0x0A04 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldRestoredBonus;                       		// 0x0A08 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              TeleportStartDelay;                               		// 0x0A0C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TeleportDelay;                                    		// 0x0A10 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImpactDelay;                                      		// 0x0A14 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImpactDelay_Min;                                  		// 0x0A18 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ImpactDelay_Max;                                  		// 0x0A1C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TimeStingerDelay;                                 		// 0x0A20 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CounterTimeScaleValue;                            		// 0x0A24 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CameraImpactDelay;                                		// 0x0A28 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCachedTargetImpacted : 1;                        		// 0x0A2C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseOwnerRotation : 1;                            		// 0x0A2C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIsInputLocked : 1;                               		// 0x0A2C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bClientCanProcessNoCooldown : 1;                  		// 0x0A2C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	unsigned long                                      bFailedToMoveCaster : 1;                          		// 0x0A2C (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bCollectedVolumes : 1;                            		// 0x0A2C (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )
	unsigned long                                      bLineCheckToHead : 1;                             		// 0x0A2C (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned char                                      ClientNoCooldown;                                 		// 0x0A30 (0x0001) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void ResetPower ( );
	void EvolvePower ( unsigned char choice );
	void StartPowerCooldown ( );
	void Replicate ( );
	bool DoPowerDetonatedForActor ( class AActor* oActor, struct FVector HitLocation, struct FVector HitNormal, int nImpactCount, unsigned long bFirstTarget, class ASFXProjectile_PowerCustomAction* oProjectile );
	void PlayFailedChargeEffects ( );
	void SpawnProjectile ( );
	void TimeStinger ( );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	float GetImpactForce ( class AActor* oImpacted );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	bool OnChargeImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void Impact ( );
	void Teleport ( );
	void StartTeleport ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void StopCustomAction ( );
	void InterruptThisCustomAction ( );
	void StartCustomAction ( );
	void eventTickCustomAction ( float fDeltaTime );
	void FinalizePawnMove ( struct FVector* Loc, struct FVector* TargetLoc );
	bool ValidateTarget ( );
	bool FindSpace ( struct FVector Extent, class AActor* TraceActor, struct FVector* NearLocation );
	bool TryMove ( struct FVector NewLocation, struct FVector Dir, class APawn* CollisionActor );
	void CollectVolumes ( );
	bool ValidateTargetLocation ( struct FVector TargetLocation );
	bool TestPathReachability ( class ANavigationPoint* Anchor, struct FVector Extent, struct FVector* StartLocation );
	struct FVector NewVector ( float X, float Y, float Z );
	bool CanUsePower ( class AActor* oTarget );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXPowerCustomAction_VanguardPassive
// 0x00C0 (0x08B8 - 0x07F8)
class USFXPowerCustomAction_VanguardPassive : public USFXPowerCustomAction_ParagonRenegade
{
public:
	struct FPowerData                                  PowerDamage;                                      		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  WeightCapacity;                                   		// 0x082C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  WeaponDamageBonus;                                		// 0x0860 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_WeaponDamageBonus;                         		// 0x0894 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerDamageBonus;                          		// 0x0898 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerForceBonus;                           		// 0x089C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ParagonRenegadeBonus;                      		// 0x08A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HenchmanPowerBonus;                        		// 0x08A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HenchmanWeaponBonus;                       		// 0x08A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageForceDurationBonus;                  		// 0x08AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShotgunDamageBonus;                        		// 0x08B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_WeightCapacityBonus;                       		// 0x08B4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void ApplyGlobalBonus ( );
};

// Class SFXGameContent.SFXPowerCustomAction_VanguardMeleePassive
// 0x0088 (0x0A28 - 0x09A0)
class USFXPowerCustomAction_VanguardMeleePassive : public USFXPowerCustomAction_MeleePassivePower
{
public:
	struct FPowerData                                  HealthShieldBonus;                                		// 0x09A0 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  MeleeDamageBonus;                                 		// 0x09D4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_MeleeDamageBonus1;                         		// 0x0A08 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeDamageBonus2;                         		// 0x0A0C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HealthShieldBonus1;                        		// 0x0A10 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_HealthShieldBonus2;                        		// 0x0A14 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeSpreeBonus;                           		// 0x0A18 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldRegenBonus;                          		// 0x0A1C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeSpreeDuration;                        		// 0x0A20 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ChargeRechargeSpeedBonus;                  		// 0x0A24 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void ApplyBonus ( struct FName Parameter, class USFXGameEffect* Bonus, unsigned long bRemove );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	void OnHeavyMeleeKill ( class AActor* oImpacted );
	void ApplyGlobalBonus ( );
};

// Class SFXGameContent.SFXPowerCustomAction_Unity
// 0x0043 (0x0804 - 0x07C1)
class USFXPowerCustomAction_Unity : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  ShieldHealAmount;                                 		// 0x07C4 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                srNoMedigel;                                      		// 0x07F8 (0x0004) [0x0000000000000000]              
	int                                                SuperMedigelPlotInt;                              		// 0x07FC (0x0004) [0x0000000000000000]              
	float                                              SuperMedigelChance;                               		// 0x0800 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RecalculateAllPowerData ( unsigned long bReset );
	struct FString eventGetHUDWheelIconInfo ( );
	int CountMediGel ( class ABioBaseSquad* oPlayerSquad );
	bool eventShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void StartPower ( );
	bool CanUsePower ( class AActor* oTarget );
};

// Class SFXGameContent.SFXCustomAction_VanguardPunch
// 0x0000 (0x01A8 - 0x01A8)
class USFXCustomAction_VanguardPunch : public USFXCustomAction_PlayerHeavyMeleeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopMove ( );
	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

// Class SFXGameContent.SFXCustomAction_AdeptSyncCoverGrab
// 0x0000 (0x020C - 0x020C)
class USFXCustomAction_AdeptSyncCoverGrab : public USFXCustomAction_SyncCoverGrab
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_BioticStormPunch
// 0x001F (0x01C4 - 0x01A5)
class USFXCustomAction_BioticStormPunch : public USFXCustomAction_ClassMelee
{
public:
	struct FVector                                     MoveOffset;                                       		// 0x01A8 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             PS_CasterEffect;                                  		// 0x01B4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PS_ImpactedEffect;                                		// 0x01BC (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void MeleeImpact ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_VanguardStormPunch
// 0x0020 (0x01E4 - 0x01C4)
class USFXCustomAction_VanguardStormPunch : public USFXCustomAction_BioticStormPunch
{
public:
	struct FAreaEffectParameters                       MeleeImpactParameters;                            		// 0x01C4 (0x0020) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OnActorImpacted ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
	void MeleeImpact ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXSeqEvt_PerformedMeleeOverCover
// 0x0002 (0x0128 - 0x0126)
class USFXSeqEvt_PerformedMeleeOverCover : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_Meleed
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_Meleed : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_DisableAI
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_DisableAI : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXCustomAction_PlayerKnockbackImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerKnockbackImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_PlayerStaggerImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_PlayerStaggerImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_VanguardHeavyMelee
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_VanguardHeavyMelee : public USFXDamageType_HeavyMelee
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_BioticCharge
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_BioticCharge : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_BioticCharge_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_BioticCharge_NoRagdoll : public USFXDamageType_BioticCharge
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_BioticExplosion
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_BioticExplosion : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_BioticExplosion_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_BioticExplosion_NoRagdoll : public USFXDamageType_BioticExplosion
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ConcussiveShot
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_ConcussiveShot : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ConcussiveShot_Cryo
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_ConcussiveShot_Cryo : public USFXDamageType_Power_Freeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ConcussiveShot_Incendiary
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_ConcussiveShot_Incendiary : public USFXDamageType_ConcussiveShot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_CryoAmmo
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_CryoAmmo : public USFXDamageType_Power_Freeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_CryoExplosion
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_CryoExplosion : public USFXDamageType_Power_Freeze
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Discharge
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_Discharge : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Discharge_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Discharge_NoRagdoll : public USFXDamageType_Discharge
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ElectricCombo
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_ElectricCombo : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_FireExplosion
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_FireExplosion : public USFXDamageType_Power_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ImprovedDischarge
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_ImprovedDischarge : public USFXDamageType_Discharge
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ImprovedDischarge_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_ImprovedDischarge_NoRagdoll : public USFXDamageType_ImprovedDischarge
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_IncendiaryAmmo
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_IncendiaryAmmo : public USFXDamageType_Power_Fire
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_IncendiaryAmmoImproved
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_IncendiaryAmmoImproved : public USFXDamageType_IncendiaryAmmo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Pull
// 0x0003 (0x013C - 0x0139)
class USFXDamageType_Pull : public USFXDamageType_Power_Ragdoll
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Pull_DoT
// 0x0000 (0x013C - 0x013C)
class USFXDamageType_Pull_DoT : public USFXDamageType_Pull
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Shockwave
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_Shockwave : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Shockwave_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_Shockwave_NoRagdoll : public USFXDamageType_Shockwave
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_AmmoPower
// 0x0042 (0x00D4 - 0x0092)
class USFXGameEffect_AmmoPower : public USFXGameEffect
{
public:
	class UParticleSystem*                             HologramTemplate;                                 		// 0x0094 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             IconTemplate;                                     		// 0x009C (0x0008) [0x0000000000000000]              
	class ASFXWeapon*                                  OwnerWeapon;                                      		// 0x00A4 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00AC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 NormalImpactSound;                                		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 WeaponFireSound;                                  		// 0x00BC (0x0008) [0x0000000000000000]              
	class USFXPowerCustomAction_AmmoPower*             Power;                                            		// 0x00C4 (0x0008) [0x1000000000000000]              
	float                                              BulletsPerSecond;                                 		// 0x00CC (0x0004) [0x0000000000000000]              
	unsigned long                                      AddedByPlayer : 1;                                		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInCinematic : 1;                                 		// 0x00D0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventOnUpdate ( float DeltaSeconds );
	void OnWeaponUnequip ( class ASFXWeapon* Weapon );
	void OnWeaponEquip ( class ASFXWeapon* Weapon );
	void OnWeaponReload ( class ASFXWeapon* Weapon );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	void OnRemoved ( );
	float GetBulletsPerSecond ( class ASFXWeapon* Weapon );
	float GetWeaponDamage ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	class AActor* GetHitTarget ( struct FImpactInfo Impact );
	void SetupFromWeapon ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_AntiGravity
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_AntiGravity : public USFXGameEffect_PhysicsPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_ArmorWeakness
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_ArmorWeakness : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_ConstraintDmgBonus
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_ConstraintDmgBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_CryoAmmo
// 0x0038 (0x010C - 0x00D4)
class USFXGameEffect_CryoAmmo : public USFXGameEffect_AmmoPower
{
public:
	class UParticleSystem*                             ImpactEffect;                                     		// 0x00D4 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class URvrClientEffectInterface*                   CE_HalfFrozenTemplate;                            		// 0x00DC (0x0008) [0x0000000000000000]              
	float                                              FreezeChance;                                     		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              FreezeDuration;                                   		// 0x00E8 (0x0004) [0x0000000000000000]              
	float                                              SpeedReduction;                                   		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              SpeedReductionDuration;                           		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              FrozenDamageBonus;                                		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              ArmorWeakness;                                    		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              SpareAmmoBonus;                                   		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              HeadShotDamageBonus;                              		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              DelayedFreezeRandDuration;                        		// 0x0104 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              DelayedFreezeStaticDuration;                      		// 0x0108 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	float GetDamageVocProbabilityMod ( );
	void DoFreezeEffect ( class ABioPawn* oHitPawn, float fDelay, struct FVector HitLocation, struct FVector HitNormal, unsigned long bForced, unsigned char ForcedResistance );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_SpareAmmo
// 0x0006 (0x0098 - 0x0092)
class USFXGameEffect_SpareAmmo : public USFXGameEffect
{
public:
	int                                                AmmoIncrease;                                     		// 0x0094 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_DelayedCryoFreeze
// 0x0056 (0x00E8 - 0x0092)
class USFXGameEffect_DelayedCryoFreeze : public USFXGameEffect
{
public:
	struct FScriptDelegate                             __OnFrozenPawnDied__Delegate;                     		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       FreezeCrustGuid;                                  		// 0x00A4 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x00B4 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_FreezeTemplate;                                		// 0x00BC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 FrozenDeathSound;                                 		// 0x00C4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 FreezingSound;                                    		// 0x00CC (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00D4 (0x0008) [0x0000000000000000]              
	class USFXPowerCustomAction*                       Power;                                            		// 0x00DC (0x0008) [0x1000000000000000]              
	unsigned long                                      bPlayFrozenDeathSound : 1;                        		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOwnerDied : 1;                                   		// 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void OnFrozenPawnDied ( class ABioPawn* oPawn );
};

// Class SFXGameContent.SFXGameEffect_CryoFreeze
// 0x0057 (0x0118 - 0x00C1)
class USFXGameEffect_CryoFreeze : public USFXGameEffect_WeldPhysics
{
public:
	struct FScriptDelegate                             __OnFrozenPawnDied__Delegate;                     		// 0x00C4 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGuid                                       FreezeCrustGuid;                                  		// 0x00D4 (0x0010) [0x0000000000000000]              
	class USFXGameEffect_PhysicsDamageMultiplier*      PhysicsDamageMultiplier;                          		// 0x00E4 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_FreezeTemplate;                                		// 0x00EC (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x00F4 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00FC (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 FrozenDeathSound;                                 		// 0x0104 (0x0008) [0x0000000000000000]              
	float                                              ThawTime;                                         		// 0x010C (0x0004) [0x0000000000000000]              
	float                                              FrozenPhysicsDamageIncrease;                      		// 0x0110 (0x0004) [0x0000000000000000]              
	unsigned long                                      bThawStarted : 1;                                 		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOwnerDied : 1;                                   		// 0x0114 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPlayFrozenDeathSound : 1;                        		// 0x0114 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
	void OnFrozenPawnDied ( class ABioPawn* oPawn );
};

// Class SFXGameContent.SFXGameEffect_PartBasedDamageTakenBonus
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_PartBasedDamageTakenBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_DamageImmunity
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_DamageImmunity : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_PowerCombo_Cryo
// 0x0018 (0x0160 - 0x0148)
class USFXGameEffect_PowerCombo_Cryo : public USFXGameEffect_PowerCombo
{
public:
	struct FVector2D                                   FreezeDuration;                                   		// 0x0148 (0x0008) [0x0000000000004000]              ( CPF_Config )
	class URvrClientEffectInterface*                   CE_HalfFrozenTemplate;                            		// 0x0150 (0x0008) [0x0000000000000000]              
	float                                              ResistanceDurationMultiplier;                     		// 0x0158 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              SpeedReduction;                                   		// 0x015C (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

// Class SFXGameContent.SFXGameEffect_ElectricComboBeam
// 0x003A (0x00CC - 0x0092)
class USFXGameEffect_ElectricComboBeam : public USFXGameEffect
{
public:
	class AActor*                                      SourceActor;                                      		// 0x0094 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    PSC_Beam;                                         		// 0x009C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       BeamAttachBoneName;                               		// 0x00A4 (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ImpactTemplate;                                		// 0x00AC (0x0008) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_CrustTemplate;                                 		// 0x00B4 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 BeamSound;                                        		// 0x00BC (0x0008) [0x0000000000000000]              
	float                                              CrustDuration;                                    		// 0x00C4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBeamActive : 1;                                  		// 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void PlayBeamEffect ( class UParticleSystemComponent* PS, struct FVector TargetLocation );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_FireDamageOverTime
// 0x0014 (0x00B4 - 0x00A0)
class USFXGameEffect_FireDamageOverTime : public USFXGameEffect_DamageOverTime
{
public:
	class USFXPowerCustomAction*                       ComboPower;                                       		// 0x00A0 (0x0008) [0x1000000000000000]              
	float                                              TotalDamageDone;                                  		// 0x00A8 (0x0004) [0x0000000000000000]              
	float                                              PowerComboDamageThreshold;                        		// 0x00AC (0x0004) [0x0000000000000000]              
	unsigned long                                      bComboEffectApplied : 1;                          		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCanCauseCombo : 1;                               		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanTriggerAchievement : 1;                       		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DoDamage ( );
	void AddFireDamage ( float AddedDamage, float NewDuration );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_PowerCombo_Fire
// 0x0024 (0x016C - 0x0148)
class USFXGameEffect_PowerCombo_Fire : public USFXGameEffect_PowerCombo
{
public:
	struct FVector2D                                   DamagePerSecond;                                  		// 0x0148 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FVector2D                                   DoTDuration;                                      		// 0x0150 (0x0008) [0x0000000000004000]              ( CPF_Config )
	class UParticleSystem*                             PS_FlameEffect;                                   		// 0x0158 (0x0008) [0x0000000004000000]              ( CPF_EditInline )
	int                                                NumFlameEffects;                                  		// 0x0160 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumFlameEffectsMP;                                		// 0x0164 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bHideBodyOnDetonation : 1;                        		// 0x0168 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void OnPowerComboDetonated ( class USFXPowerCustomAction* DetonationPower, struct FVector HitLocation, struct FVector HitNormal );
};

// Class SFXGameContent.SFXGameEffect_FireDeath
// 0x0000 (0x00B4 - 0x00B4)
class USFXGameEffect_FireDeath : public USFXGameEffect_DeathEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_HealShieldOverTime
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_HealShieldOverTime : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnUpdate ( float DeltaSeconds );
};

// Class SFXGameContent.SFXGameEffect_IncendiaryAmmo
// 0x0038 (0x010C - 0x00D4)
class USFXGameEffect_IncendiaryAmmo : public USFXGameEffect_AmmoPower
{
public:
	class UClass*                                      DamageType;                                       		// 0x00D4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             PS_FlameEffect;                                   		// 0x00DC (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	class UParticleSystem*                             PS_FireSpreadEffect;                              		// 0x00E4 (0x0008) [0x0000000004000001]              ( CPF_Edit | CPF_EditInline )
	float                                              AreaExplosionChance;                              		// 0x00EC (0x0004) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x00F0 (0x0004) [0x0000000000000000]              
	float                                              DoTDuration;                                      		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              SpareAmmoBonus;                                   		// 0x00F8 (0x0004) [0x0000000000000000]              
	float                                              HeadShotDamageBonus;                              		// 0x00FC (0x0004) [0x0000000000000000]              
	float                                              LastTimeFlameSpawned;                             		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              MinTimeBetweenFlameSpawns;                        		// 0x0104 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAreaExplosion : 1;                               		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void AddGameEffects ( class AActor* oTarget );
	float GetDamageVocProbabilityMod ( );
	void OnWeaponImpact ( class ASFXWeapon* Weapon, struct FImpactInfo Impact );
	void OnRemoved ( );
	void OnApplied ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

// Class SFXGameContent.SFXGameEffect_PowerCombo_Biotic
// 0x0000 (0x0148 - 0x0148)
class USFXGameEffect_PowerCombo_Biotic : public USFXGameEffect_PowerCombo
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnPowerComboDetonated ( class USFXPowerCustomAction* DetonationPower, struct FVector HitLocation, struct FVector HitNormal );
};

// Class SFXGameContent.SFXShake_Power_BioticCombo
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_BioticCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_BioticCombo
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_BioticCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_Power_CryoCombo
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_CryoCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_CryoCombo
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_CryoCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_PowerCombo_Electric
// 0x0004 (0x014C - 0x0148)
class USFXGameEffect_PowerCombo_Electric : public USFXGameEffect_PowerCombo
{
public:
	float                                              BeamDuration;                                     		// 0x0148 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

// Class SFXGameContent.SFXShake_Power_ElectricCombo
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_ElectricCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_ElectricCombo
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_ElectricCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_Power_FireCombo
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_FireCombo : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_FireCombo
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_FireCombo : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_Pull
// 0x0048 (0x00DC - 0x0094)
class USFXGameEffect_Pull : public USFXGameEffect_PhysicsPower
{
public:
	struct FVector                                     ForceVector;                                      		// 0x0094 (0x000C) [0x0000000000000000]              
	struct FVector                                     Direction;                                        		// 0x00A0 (0x000C) [0x0000000000000000]              
	struct FName                                       BoneName;                                         		// 0x00AC (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    Caster;                                           		// 0x00B4 (0x0008) [0x0000000000000000]              
	class ABioPawn*                                    OwnerPawn;                                        		// 0x00BC (0x0008) [0x0000000000000000]              
	float                                              Force;                                            		// 0x00C4 (0x0004) [0x0000000000000000]              
	float                                              MinimumVelocity;                                  		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              MinimumVelocityForceMult;                         		// 0x00CC (0x0004) [0x0000000000000000]              
	float                                              minHeightForBodyFallSound;                        		// 0x00D0 (0x0004) [0x0000000000000000]              
	float                                              DamagePerSecond;                                  		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              TargetExtraDamage;                                		// 0x00D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void MoveActor ( struct FVector vForce );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_Ragdoll
// 0x0000 (0x0094 - 0x0094)
class USFXGameEffect_Ragdoll : public USFXGameEffect_PhysicsPower
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_ShockwaveLift
// 0x0008 (0x009C - 0x0094)
class USFXGameEffect_ShockwaveLift : public USFXGameEffect_PhysicsPower
{
public:
	float                                              GravityValue;                                     		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              ForceDrag;                                        		// 0x0098 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool HasOtherGravityEffects ( );
	void OnRemoved ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_WeaponVFXChange
// 0x002E (0x00C0 - 0x0092)
class USFXGameEffect_WeaponVFXChange : public USFXGameEffect
{
public:
	class UStaticMesh*                                 Tracer;                                           		// 0x0094 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleVFX;                                       		// 0x009C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oMuzzleLoopVFX;                                   		// 0x00A4 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             oImpactVFX;                                       		// 0x00AC (0x0008) [0x0000000000000000]              
	class ASFXWeapon*                                  OwnerWeapon;                                      		// 0x00B4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bModifyTracer : 1;                                		// 0x00BC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bModifyMuzzleFlash : 1;                           		// 0x00BC (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bModifyImpactVFX : 1;                             		// 0x00BC (0x0004) [0x0000000000000000] [0x00000004] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_WeightCapacity
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_WeightCapacity : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXPlaceable
// 0x0004 (0x031C - 0x0318)
class ASFXPlaceable : public ASFXPlaceableBase
{
public:
	unsigned long                                      bReplicatedIsDestroyed : 1;                       		// 0x0318 (0x0004) [0x0000000100000020] [0x00000001] ( CPF_Net | CPF_RepNotify )
	unsigned long                                      bReplicatedIsDeactivated : 1;                     		// 0x0318 (0x0004) [0x0000000100000020] [0x00000002] ( CPF_Net | CPF_RepNotify )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ActivatePlaceable ( );
	void DeactivatePlaceable ( );
	bool AllowPlaceableDamageEvents ( class AController* EventInstigator );
	bool ImpactWithPower ( unsigned char Resistance, class APawn* Caster, struct FVector HitLocation, struct FVector HitNormal, float Damage, struct FVector Force, class UClass* DamageType );
	void AreaDamage ( float Damage, float Force, class UClass* DamageType, float ImpactRadius );
	void AreaDamageForActor ( class AActor* HitActor );
	void PlaceableDestroyed ( );
	void ResetPlaceable ( );
	void eventReplicatedEvent ( struct FName VarName );
};

// Class SFXGameContent.SFXSeqEvt_PlaceableReset
// 0x0002 (0x0128 - 0x0126)
class USFXSeqEvt_PlaceableReset : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXSeqEvt_PlaceableDestroyed
// 0x0002 (0x0128 - 0x0126)
class USFXSeqEvt_PlaceableDestroyed : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXSeqEvt_PlaceableDeactivated
// 0x0002 (0x0128 - 0x0126)
class USFXSeqEvt_PlaceableDeactivated : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXSeqEvt_PlaceableActivated
// 0x0002 (0x0128 - 0x0126)
class USFXSeqEvt_PlaceableActivated : public USequenceEvent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXProjectile_Power_BioticCharge
// 0x0003 (0x03AC - 0x03A9)
class ASFXProjectile_Power_BioticCharge : public ASFXProjectile
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_BioticCharge
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_BioticCharge : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_Power_BioticCharge
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_BioticCharge : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_HeavyImpact
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_HeavyImpact : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_Power_HeavyImpact
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_HeavyImpact : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_Seeking
// 0x003D (0x0605 - 0x05C8)
class ASFXProjectile_PowerCustomAction_Seeking : public ASFXProjectile_PowerCustomAction
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x05C8 (0x0008) MISSED OFFSET
	struct FQuat                                       StartRotation;                                    		// 0x05D0 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     LastValidSeekLocation;                            		// 0x05E0 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              TimeAlive;                                        		// 0x05EC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              CurveShape;                                       		// 0x05F0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              UpperBound;                                       		// 0x05F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              InterpRate;                                       		// 0x05F8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PawnEvadedStopSeekingTime;                        		// 0x05FC (0x0004) [0x0000000000000000]              
	unsigned long                                      bSeekingEnabled : 1;                              		// 0x0600 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bExplodeNextFrame : 1;                            		// 0x0600 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bPawnEvaded : 1;                                  		// 0x0600 (0x0004) [0x0000000100002020] [0x00000004] ( CPF_Net | CPF_Transient | CPF_RepNotify )
	unsigned char                                      SeekAimNode;                                      		// 0x0604 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Tick_Prediction ( float DeltaTime );
	void Recycle ( );
	void InitializeRotation ( class APawn* oCasterPawn );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class USFXPowerCustomAction* oPower );
	void PawnEvadedPower ( class ABioPawn* Pawn, struct FName Label, float TimeBeforeImpact );
	bool CanLockOn ( class AActor* Target, class APawn* CasterPawn );
	void Tick ( float DeltaTime );
	void TickAimRotation ( float DeltaTime, struct FVector SeekVector );
	void TickAim ( float DeltaTime );
	struct FVector GetAimLocation ( class AActor* Target );
	void Timer ( );
	void eventReplicatedEvent ( struct FName VarName );
};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_SuperSeeking
// 0x0027 (0x062C - 0x0605)
class ASFXProjectile_PowerCustomAction_SuperSeeking : public ASFXProjectile_PowerCustomAction_Seeking
{
public:
	struct FVector2D                                   DownwardPitchScale;                               		// 0x0608 (0x0008) [0x0000000000000000]              
	struct FVector2D                                   DownwardPitchScaleRange;                          		// 0x0610 (0x0008) [0x0000000000000000]              
	float                                              CornerStrength;                                   		// 0x0618 (0x0004) [0x0000000000000000]              
	float                                              ApexDist;                                         		// 0x061C (0x0004) [0x0000000000000000]              
	float                                              MaxAngleOffset;                                   		// 0x0620 (0x0004) [0x0000000000000000]              
	float                                              OffsetAimMaxDistance;                             		// 0x0624 (0x0004) [0x0000000000000000]              
	float                                              OffsetAimMinDistance;                             		// 0x0628 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void InitializeRotation ( class APawn* oCasterPawn );
	void TickAimRotation ( float DeltaTime, struct FVector SeekVector );
};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_Shockwave
// 0x0028 (0x05F0 - 0x05C8)
class ASFXProjectile_PowerCustomAction_Shockwave : public ASFXProjectile_PowerCustomAction
{
public:
	class USFXPowerCustomAction_Shockwave*             ShockwavePower;                                   		// 0x05C8 (0x0008) [0x1000000000000000]              
	class UWwiseEvent*                                 LastShockwaveSound;                               		// 0x05D0 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 HenchmanLastShockwaveSound;                       		// 0x05D8 (0x0008) [0x0000000000000000]              
	float                                              TimeBetweenImpacts;                               		// 0x05E0 (0x0004) [0x0000000000000000]              
	float                                              TimeToNextImpact;                                 		// 0x05E4 (0x0004) [0x0000000000000000]              
	float                                              FirstImpactDelay;                                 		// 0x05E8 (0x0004) [0x0000000000000000]              
	int                                                NumShockwaves;                                    		// 0x05EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ReplicateExplode ( struct FVector HitLocation, struct FVector HitNormal );
	void Tick ( float DeltaTime );
	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class USFXPowerCustomAction* oPower );
	void ProcessTouch ( class AActor* Other, struct FVector HitLocation, struct FVector HitNormal );
	void eventHitWall ( struct FVector HitNormal, class AActor* Wall, class UPrimitiveComponent* WallComp );
};

// Class SFXGameContent.SFXShake_Power_Shockwave
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_Shockwave : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXWeaponGameEffect_DamageBonus
// 0x0002 (0x0094 - 0x0092)
class USFXWeaponGameEffect_DamageBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXShield_Biotic_Player
// 0x0000 (0x04BC - 0x04BC)
class ASFXShield_Biotic_Player : public ASFXShield_Player
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_AssaultRifle
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_AssaultRifle : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXWeapon_AssaultRifle_Avenger
// 0x0000 (0x10CC - 0x10CC)
class ASFXWeapon_AssaultRifle_Avenger : public ASFXWeapon_AssaultRifle_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_HeavyPistol
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_HeavyPistol : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXWeapon_Pistol_Predator
// 0x0000 (0x10C8 - 0x10C8)
class ASFXWeapon_Pistol_Predator : public ASFXWeapon_Pistol_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	class UDecalComponent* GetWeaponSpecificDecalData ( class USFXPhysicalMaterialDecals* DecalEffects, float* FadeTime );
};

// Class SFXGameContent.SFXSeqAct_IsTreasureUnlocked
// 0x0015 (0x010D - 0x00F8)
class USFXSeqAct_IsTreasureUnlocked : public USequenceAction
{
public:
	class UClass*                                      Treasure_Weapon;                                  		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      Treasure_WeaponMod;                               		// 0x0100 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCheckWeapon : 1;                                 		// 0x0108 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bCheckWeaponMod : 1;                              		// 0x0108 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bCheckArmor : 1;                                  		// 0x0108 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned char                                      Treasure_Armor;                                   		// 0x010C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_ToggleTutorialTracking
// 0x0000 (0x00F8 - 0x00F8)
class USFXSeqAct_ToggleTutorialTracking : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContent.BioPlaypenVolumeAdditive
// 0x0000 (0x02C8 - 0x02C8)
class ABioPlaypenVolumeAdditive : public ABioPlaypenVolume
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventUnTouch ( class AActor* Other );
	void eventTouch ( class AActor* Other, class UPrimitiveComponent* OtherComp, struct FVector HitLocation, struct FVector HitNormal );
};

// Class SFXGameContent.SFXAI_Cannibal
// 0x0044 (0x08E0 - 0x089C)
class ASFXAI_Cannibal : public ASFXAI_Cover
{
public:
	class ASFXPawn*                                    TargetDeadBody;                                   		// 0x089C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       GrenadeAttack;                                    		// 0x08A4 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              PlayerExclusionDist;                              		// 0x08AC (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastFailedConsumeTime;                            		// 0x08B0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              FailConsumeRetryInterval;                         		// 0x08B4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              HungryRunSpeedMod;                                		// 0x08B8 (0x0004) [0x0000000000000000]              
	float                                              ConsumeHealPct;                                   		// 0x08BC (0x0004) [0x0000000000000000]              
	float                                              CancelConsumeHealthPct;                           		// 0x08C0 (0x0004) [0x0000000000000000]              
	float                                              MaxRangeToConsume;                                		// 0x08C4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              MaxVelocityToConsumeSq;                           		// 0x08C8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              CannibalMeleeCone;                                		// 0x08CC (0x0004) [0x0000000000000000]              
	float                                              LastGrenadeTime;                                  		// 0x08D0 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
	float                                              GrenadeInterval;                                  		// 0x08D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              GrenadeConeAngle;                                 		// 0x08D8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasScreamed : 1;                                 		// 0x08DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bStoppedBodyFromReaping : 1;                      		// 0x08DC (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void DrawDifficulty ( class UBioCheatManager* CM );
	void Initialize ( );
	bool ShouldMelee ( class AActor* MeleeTarget );
	void SetMovementSpeed ( );
	class ASFXPawn* GetNearestDeadBody ( );
	bool IsValidEatingTarget ( class ASFXPawn* DeadBody, unsigned long bAlreadyUsedEatCount );
	bool ShouldUseGrenade ( );
};

// Class SFXGameContent.SFXPawn_Cannibal
// 0x0024 (0x101C - 0x0FF8)
class ASFXPawn_Cannibal : public ASFXPawn
{
public:
	struct FGuid                                       ArmourGUID;                                       		// 0x0FF8 (0x0010) [0x0000000000002000]              ( CPF_Transient )
	class URvrClientEffectInterface*                   CE_ArmorEffectTemplate;                           		// 0x1008 (0x0008) [0x0000000000000000]              
	float                                              PoweredHealPct;                                   		// 0x1010 (0x0004) [0x0000000000000000]              
	float                                              ActivatedArmourDelay;                             		// 0x1014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsPoweredUp : 1;                                 		// 0x1018 (0x0004) [0x0000000100002020] [0x00000001] ( CPF_Net | CPF_Transient | CPF_RepNotify )
	unsigned long                                      bHungryRun : 1;                                   		// 0x1018 (0x0004) [0x0000000000002020] [0x00000002] ( CPF_Net | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	unsigned char GetPowerResistance ( class APawn* Caster, struct FVector HitLocation, struct FVector HitNormal, class UClass* DamageType, float* Damage, struct FVector* Force, class AActor** TargetOverride );
	void EnableArmorPieces ( );
	void ApplyMarauderArmourBuff ( );
	void ApplyCannibalBuff ( );
	void OnBuffCannibal ( class USFXSeqAct_BuffCannibal* Seq );
	void PlayDying ( class UClass* DamageType, struct FVector HitLoc );
	void PostBeginPlay ( );
	void ReplicatedEvent ( struct FName VarName );
};

// Class SFXGameContent.SFXAICmd_Base_Cover
// 0x0000 (0x00D4 - 0x00D4)
class USFXAICmd_Base_Cover : public USFXAICommand_Base_Combat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool NotifyMoodChange ( );
	void NotifyPendingPowerImpact ( struct FName Label, float TimeBeforeImpact, class USFXPowerCustomAction* Power, class ASFXProjectile_PowerCustomAction* Projectile );
	void NotifyTakeHit ( class AController* instigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	bool ShouldAttack ( );
	void Resumed ( struct FName OldCommandName );
	void Pushed ( );
};

// Class SFXGameContent.SFXAICmd_Base_Cannibal
// 0x0008 (0x00DC - 0x00D4)
class USFXAICmd_Base_Cannibal : public USFXAICmd_Base_Cover
{
public:
	float                                              LastBodyCheckTime;                                		// 0x00D4 (0x0004) [0x0000000000000000]              
	float                                              BodyCheckInterval;                                		// 0x00D8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void FindBodyToConsume ( );
	void NotifyFriendDied ( class ABioPawn* FriendPawn );
};

// Class SFXGameContent.SFXAI_TutorialCannibal
// 0x0000 (0x08E0 - 0x08E0)
class ASFXAI_TutorialCannibal : public ASFXAI_Cannibal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Initialize ( );
};

// Class SFXGameContent.SFXAICmd_Reaction_ShotInCover
// 0x0000 (0x00D4 - 0x00D4)
class USFXAICmd_Reaction_ShotInCover : public USFXAICommand_Base_Combat
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXAICmd_Cannibal_ConsumeBody
// 0x000C (0x00E0 - 0x00D4)
class USFXAICmd_Cannibal_ConsumeBody : public USFXAICommand_Base_Combat
{
public:
	float                                              ConsumeRange;                                     		// 0x00D4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              BreachDamageTaken;                                		// 0x00D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              BreachDamageThreshold;                            		// 0x00DC (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void NotifyTakeHit ( class AController* instigatedBy, struct FVector HitLocation, int Damage, class UClass* DamageType, struct FVector Momentum );
	void Popped ( );
	void Pushed ( );
};

// Class SFXGameContent.SFXAmmoContainer
// 0x0008 (0x02B4 - 0x02AC)
class ASFXAmmoContainer : public ASFXDroppedAmmo
{
public:
	float                                              RespawnTime;                                      		// 0x02AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bRespawns : 1;                                    		// 0x02B0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAmmoMeshVisible : 1;                             		// 0x02B0 (0x0004) [0x0000000100000020] [0x00000002] ( CPF_Net | CPF_RepNotify )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventReplicatedEvent ( struct FName VarName );
	void GiveTo ( class APawn* P );
	void StartSleeping ( );
	void SetRespawn ( );
	void eventSetInitialState ( );
};

// Class SFXGameContent.SFXCustomAction_AILadderClimbDown
// 0x0000 (0x01B0 - 0x01B0)
class USFXCustomAction_AILadderClimbDown : public USFXCustomAction_LadderClimbDownBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_AILadderClimbUp
// 0x0008 (0x01C0 - 0x01B8)
class USFXCustomAction_AILadderClimbUp : public USFXCustomAction_ClimbUpBase
{
public:
	class UAnimSet*                                    LadderAnimSet;                                    		// 0x01B8 (0x0008) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_AIMantleOverCover
// 0x0000 (0x0534 - 0x0534)
class USFXCustomAction_AIMantleOverCover : public USFXCustomAction_MantleOverCoverBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_AIMantleUp
// 0x0026 (0x0178 - 0x0152)
class USFXCustomAction_AIMantleUp : public USFXCustomAction_SimpleMoveBase
{
public:
	struct FBodyStance                                 BS_MantleUpOutOfCover;                            		// 0x0154 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_MantleUpInCover;                               		// 0x0164 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bStartInCover : 1;                                		// 0x0174 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FBodyStance GetBodyStanceAnim ( );
	void StartCustomAction ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_CannibalConsumeBody
// 0x0012 (0x0168 - 0x0156)
class USFXCustomAction_CannibalConsumeBody : public USFXCustomAction_Loop
{
public:
	class URvrClientEffectInterface*                   CE_DeathEffect;                                   		// 0x0158 (0x0008) [0x0000000000000000]              
	class UWwiseEvent*                                 StopConsumeSound;                                 		// 0x0160 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomAction ( unsigned long bForced );
	void Replicate ( );
	void PowerMeUp ( );
	void PlayDeathEffect ( );
	void StopCustomAction ( );
	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
};

// Class SFXGameContent.SFXCustomAction_SpawnEntrance
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_SpawnEntrance : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_CannibalCrawlEntrance
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_CannibalCrawlEntrance : public USFXCustomAction_SpawnEntrance
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_CannibalMelee
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_CannibalMelee : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
};

// Class SFXGameContent.SFXCustomAction_CannibalRoar
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_CannibalRoar : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void ClientDoCustomActionImpact ( class AActor* oActor, int ImpactCount, unsigned long bFirstTarget, struct FVector HitLocation, struct FVector HitNormal, int CustomActionReactionType );
};

// Class SFXGameContent.SFXCustomAction_CannibalStagger
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_CannibalStagger : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CannibalStandard
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_CannibalStandard : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CannibalStandardForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_CannibalStandardForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CannibalStandardLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_CannibalStandardLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CannibalStandardRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_CannibalStandardRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CoverSlipLeft
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_CoverSlipLeft : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CoverSlipLeftStanding
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_CoverSlipLeftStanding : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CoverSlipRight
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_CoverSlipRight : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CoverSlipRightStanding
// 0x0000 (0x0140 - 0x0140)
class USFXCustomAction_CoverSlipRightStanding : public USFXCustomAction_CoverSlipBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_CustomLoopingInteraction
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_CustomLoopingInteraction : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StartCustomAction ( );
};

// Class SFXGameContent.SFXNav_InteractionHenchCustom
// 0x0018 (0x03A4 - 0x038C)
class ASFXNav_InteractionHenchCustom : public ASFXNav_InteractionPoint
{
public:
	struct FName                                       StartAnim;                                        		// 0x038C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       LoopAnim;                                         		// 0x0394 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       EndAnim;                                          		// 0x039C (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction
// 0x0027 (0x0180 - 0x0159)
class USFXCustomAction_DeathReaction : public USFXCustomAction_DamageReaction
{
public:
	class UWwiseEvent*                                 MetalImpactSoundPlayer;                           		// 0x015C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 MetalImpactSoundHench;                            		// 0x0164 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 FleshImpactSoundPlayer;                           		// 0x016C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UWwiseEvent*                                 FleshImpactSoundHench;                            		// 0x0174 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPlayDeathImpact : 1;                             		// 0x017C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PlayImpactSound ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_DeathReaction_Corkscrew
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_Corkscrew : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction_HeavyLeftArm
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_HeavyLeftArm : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction_HeavyRightArm
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_HeavyRightArm : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_DeathReaction_Knockback
// 0x0000 (0x0180 - 0x0180)
class USFXCustomAction_DeathReaction_Knockback : public USFXCustomAction_DeathReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopAnim ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_Freezing
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_Freezing : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_FreezingII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_FreezingII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_FreezingIII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_FreezingIII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_GreatPain
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_GreatPain : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_GreatPainII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_GreatPainII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_HenchBeckonFront
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_HenchBeckonFront : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
};

// Class SFXGameContent.SFXCustomAction_HenchBeckonRear
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_HenchBeckonRear : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
};

// Class SFXGameContent.SFXCustomAction_HenchCrouch
// 0x0000 (0x012C - 0x012C)
class USFXCustomAction_HenchCrouch : public USFXCustomAction_InteractionPointAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void TriggerEnd ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchInteractLow
// 0x001B (0x0194 - 0x0179)
class USFXCustomAction_HenchInteractLow : public USFXCustomAction_LoopingInteraction
{
public:
	struct FGuid                                       OmniToolGuid;                                     		// 0x017C (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   OmniToolVFX;                                      		// 0x018C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchmanMelee
// 0x0098 (0x01A5 - 0x010D)
class USFXCustomAction_HenchmanMelee : public UBioCustomAction
{
public:
	struct FBodyStance                                 BS_Rifle1;                                        		// 0x0110 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Rifle2;                                        		// 0x0120 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Rifle3;                                        		// 0x0130 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Pistol1;                                       		// 0x0140 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Pistol2;                                       		// 0x0150 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FBodyStance                                 BS_Pistol3;                                       		// 0x0160 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USFXTimelineData*                            Rifle1Timeline;                                   		// 0x0170 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USFXTimelineData*                            Rifle2Timeline;                                   		// 0x0178 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USFXTimelineData*                            Rifle3Timeline;                                   		// 0x0180 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USFXTimelineData*                            Pistol1Timeline;                                  		// 0x0188 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USFXTimelineData*                            Pistol2Timeline;                                  		// 0x0190 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class USFXTimelineData*                            Pistol3Timeline;                                  		// 0x0198 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      bPistolMelee : 1;                                 		// 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      MeleeStage;                                       		// 0x01A4 (0x0001) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void TryNextMelee ( );
	bool CanContinueMelee ( );
	void BodyStanceAnimEndNotification ( class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime );
	void StopCustomAction ( );
	void StartCustomAction ( );
	struct FBodyStance GetBodyStanceAnim ( unsigned char Stage );
	bool ShouldUsePistolAnim ( );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_HenchOmniTool
// 0x001B (0x0194 - 0x0179)
class USFXCustomAction_HenchOmniTool : public USFXCustomAction_LoopingInteraction
{
public:
	struct FGuid                                       OmniToolGuid;                                     		// 0x017C (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   OmniToolVFX;                                      		// 0x018C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchOmniToolCrouch
// 0x001B (0x0194 - 0x0179)
class USFXCustomAction_HenchOmniToolCrouch : public USFXCustomAction_LoopingInteraction
{
public:
	struct FGuid                                       OmniToolGuid;                                     		// 0x017C (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   OmniToolVFX;                                      		// 0x018C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void StopCustomAction ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchRollBackward
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_HenchRollBackward : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchRollForward
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_HenchRollForward : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchRollLeft
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_HenchRollLeft : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchRollRight
// 0x0002 (0x0140 - 0x013E)
class USFXCustomAction_HenchRollRight : public USFXCustomAction_SingleAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_HenchStandIdle
// 0x0000 (0x012C - 0x012C)
class USFXCustomAction_HenchStandIdle : public USFXCustomAction_InteractionPointAnim
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
	void TriggerEnd ( );
};

// Class SFXGameContent.SFXCustomAction_HenchStandTyping
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_HenchStandTyping : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanOverrideMoveWith ( int OldCustomAction, int NewCustomAction );
};

// Class SFXGameContent.SFXCustomAction_IdleCannibal
// 0x0003 (0x017C - 0x0179)
class USFXCustomAction_IdleCannibal : public USFXCustomAction_LoopingInteraction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_ReaperArmorBuff
// 0x0006 (0x0144 - 0x013E)
class USFXCustomAction_ReaperArmorBuff : public USFXCustomAction_SingleAnim
{
public:
	float                                              ApplyBuffTime;                                    		// 0x0140 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StopCustomAction ( );
	void ApplyBuff ( );
	void StartCustomAction ( );
};

// Class SFXGameContent.SFXCustomAction_ShieldBreach
// 0x003A (0x0193 - 0x0159)
class USFXCustomAction_ShieldBreach : public USFXCustomAction_DamageReaction
{
public:
	struct FBodyStance                                 BS_Anims[ 0x3 ];                                  		// 0x015C (0x0030) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RandPercent;                                      		// 0x018C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      VocEvents[ 0x3 ];                                 		// 0x0190 (0x0003) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void StartCustomAction ( );
	bool InternalCanDoCustomAction ( class ABioPawn* SyncPawn, unsigned long bForced );
	void eventGetUsedAnimNames ( struct TArray<struct FName>* UsedAnims );
};

// Class SFXGameContent.SFXCustomAction_StaggerImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StaggerImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StaggerImpactForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StaggerImpactForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StaggerImpactII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StaggerImpactII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StaggerImpactLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StaggerImpactLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StaggerImpactRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StaggerImpactRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpact
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpact : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpactForward
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpactForward : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpactII
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpactII : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpactKnee
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpactKnee : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpactLeft
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpactLeft : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXCustomAction_StandardImpactRight
// 0x0003 (0x015C - 0x0159)
class USFXCustomAction_StandardImpactRight : public USFXCustomAction_DamageReaction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_ConcussiveShot_NoRagdoll
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_ConcussiveShot_NoRagdoll : public USFXDamageType_ConcussiveShot
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_EnemyGrenade
// 0x0002 (0x0130 - 0x012E)
class USFXDamageType_EnemyGrenade : public USFXDamageType
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_FragGrenade
// 0x0003 (0x0138 - 0x0135)
class USFXDamageType_FragGrenade : public USFXDamageType_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_FragGrenade_Armor
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_FragGrenade_Armor : public USFXDamageType_FragGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_FragGrenade_Shields
// 0x0000 (0x0138 - 0x0138)
class USFXDamageType_FragGrenade_Shields : public USFXDamageType_FragGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXGameEffect_DefensiveArmor
// 0x0024 (0x00B8 - 0x0094)
class USFXGameEffect_DefensiveArmor : public USFXGameEffect_DamageTakenBonus
{
public:
	struct FGuid                                       GUID_ArmorCrustTemplate;                          		// 0x0094 (0x0010) [0x0000000000000000]              
	class URvrClientEffectInterface*                   CE_ArmorCrustTemplate;                            		// 0x00A4 (0x0008) [0x0000000000000000]              
	class USFXPowerCustomAction_DefensiveShield*       Power;                                            		// 0x00AC (0x0008) [0x1000000000000000]              
	unsigned long                                      bArmorVFXOn : 1;                                  		// 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void TurnVFXOff ( );
	void TurnVFXOn ( );
	void OnUpdate ( float DeltaSeconds );
	void OnApplied ( );
};

// Class SFXGameContent.SFXPowerCustomAction_DefensiveShield
// 0x0077 (0x0838 - 0x07C1)
class USFXPowerCustomAction_DefensiveShield : public USFXPowerCustomAction
{
public:
	struct FPowerData                                  DamageReduction;                                  		// 0x07C4 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  EncumbrancePenalty;                               		// 0x07F8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class URvrClientEffectInterface*                   CE_ArmorCrustTemplate;                            		// 0x082C (0x0008) [0x0000000000000000]              
	unsigned long                                      bRemoveArmorApplyCooldown : 1;                    		// 0x0834 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RestoreSaveState ( );
	bool eventShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	void DoJoinInProgress ( );
	bool CanUsePower ( class AActor* Target );
	void RecalculateAllPowerData ( unsigned long bReset );
	void ResetPower ( );
	void ClientDoPowerSubsequentImpact ( class AActor* oActor, int CustomActionReactionType, float Duration, int ImpactCount, float Delay, unsigned long DoCallback );
	void TryApplyArmor ( );
	void SetupEffect ( class USFXGameEffect_DefensiveArmor* Effect );
	void ApplyArmor ( );
	void RemoveArmor ( );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
};

// Class SFXGameContent.SFXGameEffect_MaxGrenadeBonus
// 0x0002 (0x0094 - 0x0092)
class USFXGameEffect_MaxGrenadeBonus : public USFXGameEffect
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnRemoved ( );
	void OnApplied ( );
};

// Class SFXGameContent.SFXGameEffect_MeleeDamageBonus
// 0x0000 (0x00B0 - 0x00B0)
class USFXGameEffect_MeleeDamageBonus : public USFXGameEffect_PowerBonus
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXNav_InteractionCannibal
// 0x0000 (0x038C - 0x038C)
class ASFXNav_InteractionCannibal : public ASFXNav_InteractionPoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXNav_InteractionHenchBeckonFront
// 0x0000 (0x038C - 0x038C)
class ASFXNav_InteractionHenchBeckonFront : public ASFXNav_InteractionPoint
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXPawn_Anderson
// 0x0000 (0x10A4 - 0x10A4)
class ASFXPawn_Anderson : public ASFXPawn_Henchman
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void OnSetAimTarget ( class USFXSeqAct_SetAimTarget* Seq );
};

// Class SFXGameContent.SFXPowerCustomAction_ConcussiveShot
// 0x003F (0x0800 - 0x07C1)
class USFXPowerCustomAction_ConcussiveShot : public USFXPowerCustomAction
{
public:
	class USFXPowerCustomAction_AmmoPower*             AmmoPower;                                        		// 0x07C4 (0x0008) [0x1000000000000000]              
	class URvrClientEffectInterface*                   CE_NormalImpact;                                  		// 0x07CC (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             MuzzleEffect;                                     		// 0x07D4 (0x0008) [0x0000000000000000]              
	float                                              Evolve_DoTDamage;                                 		// 0x07DC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DoTDuration;                               		// 0x07E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageBonus;                               		// 0x07E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x07E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_CooldownBonus;                             		// 0x07EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_FreezeComboBonus;                          		// 0x07F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ForceBonus;                                		// 0x07F4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MuzzleEffectLifetime;                             		// 0x07F8 (0x0004) [0x0000000000000000]              
	float                                              MinTargetDistanceSq;                              		// 0x07FC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void EvolvePower ( unsigned char choice );
	bool ShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	class URvrClientEffectInterface* GetAmmoPowerProjectile ( );
	void OnRagdollPhysicsImpact ( class APawn* oPawn, class AActor* oImpactActor, struct FVector vImpactDir );
	void PlayDetonationEffects ( struct FVector ImpactLocation, struct FVector ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile );
	class UClass* GetDamageType ( );
	void OnPowerDetonated ( struct FVector HitLocation, struct FVector HitNormal, class ASFXProjectile_PowerCustomAction* oProjectile, class AActor* HitActor );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	float GetImpactForce ( class AActor* oImpacted );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	void StartPower ( );
	bool GetProjectileAttachPoint ( struct FVector* AttachPoint );
	void ReleasePower ( );
	void PrecacheVFX ( class ASFXObjectPool* ObjectPool, class URvrClientEffectManager* ClientEffects );
};

// Class SFXGameContent.SFXPowerCustomAction_GrenadeBase
// 0x0007 (0x07C8 - 0x07C1)
class USFXPowerCustomAction_GrenadeBase : public USFXPowerCustomAction
{
public:
	int                                                srNoGrenades;                                     		// 0x07C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	struct FString eventGetHUDWheelIconInfo ( );
	bool eventShouldUsePower ( class AActor* Target, struct FString* sOptionalInfo );
	int GetGrenadeCount ( );
	void AdjustGrenadeCount ( int Amount );
	void ReleasePower ( );
	bool CanUsePower ( class AActor* oTarget );
	void ApplyGrenadeBonus ( );
	void ResetPower ( );
	void OnSquadMemberAdded ( class APawn* Pawn );
	void OnPowerRankIncreased ( );
	void OnPowerAdded ( class USFXPowerCustomActionBase* Power );
	void OnPowersLoaded ( );
};

// Class SFXGameContent.SFXPowerCustomAction_FragGrenade
// 0x005C (0x0824 - 0x07C8)
class USFXPowerCustomAction_FragGrenade : public USFXPowerCustomAction_GrenadeBase
{
public:
	struct FPowerData                                  MaxGrenadeBonus;                                  		// 0x07C8 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class URvrClientEffectInterface*                   CE_GrenadeImpact;                                 		// 0x07FC (0x0008) [0x0000000000000000]              
	float                                              Evolve_DamageBonus;                               		// 0x0804 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_RadiusBonus;                               		// 0x0808 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Evolve_GrenadeCountBonus;                         		// 0x080C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldDamageBonus;                         		// 0x0810 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ArmorDamageBonus;                          		// 0x0814 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DoTDamage;                                 		// 0x0818 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DoTDuration;                               		// 0x081C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                Rank2GrenadeUpgrade;                              		// 0x0820 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	struct FVector GetDefaultClientEffectParams ( );
	void RecalculateAllPowerData ( unsigned long bReset );
	void EvolvePower ( unsigned char choice );
	bool OnImpact ( unsigned char Resistance, class AActor* oImpacted, int nPreviouslyImpacted, struct FVector HitLocation, struct FVector HitNormal );
	void ApplyGrenadeBonus ( );
	class UClass* GetDamageType ( );
	float GetImpactDamage ( class AActor* oImpacted, class UClass** DamageType );
	void PlayDetonationEffects ( struct FVector ImpactLocation, struct FVector ImpactNormal, class ASFXProjectile_PowerCustomAction* oProjectile );
};

// Class SFXGameContent.SFXPowerCustomAction_Fortification
// 0x0080 (0x08B8 - 0x0838)
class USFXPowerCustomAction_Fortification : public USFXPowerCustomAction_DefensiveShield
{
public:
	struct FPowerData                                  MeleeDamageBonus;                                 		// 0x0838 (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FPowerData                                  MeleeDamageBonusDuration;                         		// 0x086C (0x0034) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              Evolve_DamageReductionBonus1;                     		// 0x08A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_DamageReductionBonus2;                     		// 0x08A4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_MeleeDamageBonus;                          		// 0x08A8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_ShieldRegenBonus;                          		// 0x08AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_PowerDamageBonus;                          		// 0x08B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              Evolve_EncumbranceBonus;                          		// 0x08B4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void EvolvePower ( unsigned char choice );
	void RecalculateAllPowerData ( unsigned long bReset );
	void RemoveArmor ( );
	void StartPowerCooldown ( );
	void ApplyArmor ( );
};

// Class SFXGameContent.SFXPowerCustomAction_HenchmanPassive
// 0x00D0 (0x0894 - 0x07C4)
class USFXPowerCustomAction_HenchmanPassive : public USFXPowerCustomAction_PassivePower
{
public:
	struct FPowerData                                  HealthShieldBonus;                                		// 0x07C4 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPowerData                                  WeaponDamageBonus;                                		// 0x07F8 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPowerData                                  PowerDamageBonus;                                 		// 0x082C (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPowerData                                  PowerCooldownBonus;                               		// 0x0860 (0x0034) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void RecalculateAllPowerData ( unsigned long bReset );
	void ApplyGlobalBonus ( );
};

// Class SFXGameContent.SFXPowerCustomAction_AndersonPassive
// 0x0018 (0x08AC - 0x0894)
class USFXPowerCustomAction_AndersonPassive : public USFXPowerCustomAction_HenchmanPassive
{
public:
	float                                              Evolve_WeaponDamageBonus;                         		// 0x0894 (0x0004) [0x0000000000000000]              
	float                                              Evolve_HealthShieldBonus;                         		// 0x0898 (0x0004) [0x0000000000000000]              
	float                                              Evolve_PowerDamageBonus;                          		// 0x089C (0x0004) [0x0000000000000000]              
	float                                              Evolve_SniperRifleDamageBonus;                    		// 0x08A0 (0x0004) [0x0000000000000000]              
	float                                              Evolve_SquadDamageBonus;                          		// 0x08A4 (0x0004) [0x0000000000000000]              
	float                                              Evolve_AssaultRifleDamageBonus;                   		// 0x08A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void PopulatePowerStatBarEvolves ( );
	void EvolvePower ( unsigned char choice );
	void ResetPower ( );
	void ApplyGlobalBonus ( );
};

// Class SFXGameContent.SFXSeqAct_BuffCannibal
// 0x0000 (0x00F8 - 0x00F8)
class USFXSeqAct_BuffCannibal : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXPowerCustomAction_EnemyGrenade
// 0x0003 (0x07C4 - 0x07C1)
class USFXPowerCustomAction_EnemyGrenade : public USFXPowerCustomAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool GetProjectileAttachPoint ( struct FVector* AttachPoint );
};

// Class SFXGameContent.SFXPowerCustomAction_ReaperGrenade
// 0x0000 (0x07C4 - 0x07C4)
class USFXPowerCustomAction_ReaperGrenade : public USFXPowerCustomAction_EnemyGrenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXWeapon_AI_CannibalRifle
// 0x0000 (0x10CC - 0x10CC)
class ASFXWeapon_AI_CannibalRifle : public ASFXWeapon_AssaultRifle_Base
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXPawn_TutorialCannibal
// 0x0000 (0x101C - 0x101C)
class ASFXPawn_TutorialCannibal : public ASFXPawn_Cannibal
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_ConcussiveShot
// 0x0008 (0x0634 - 0x062C)
class ASFXProjectile_PowerCustomAction_ConcussiveShot : public ASFXProjectile_PowerCustomAction_SuperSeeking
{
public:
	class UParticleSystem*                             PS_NormalConcussiveShot;                          		// 0x062C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool InitializePowerProjectile ( class AActor* oCaster, float fTravelSpeed, float fRadius, class USFXPowerCustomAction* oPower );
};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_FragGrenade
// 0x0000 (0x05F4 - 0x05F4)
class ASFXProjectile_PowerCustomAction_FragGrenade : public ASFXProjectile_PowerCustomAction_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_Power_FragGrenade
// 0x0000 (0x0070 - 0x0070)
class USFXRumble_Power_FragGrenade : public USFXRumble_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShake_Power_FragGrenade
// 0x0000 (0x00E0 - 0x00E0)
class USFXShake_Power_FragGrenade : public USFXShake_Power
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXProjectile_PowerCustomAction_ReaperFragGrenade
// 0x0000 (0x05F4 - 0x05F4)
class ASFXProjectile_PowerCustomAction_ReaperFragGrenade : public ASFXProjectile_PowerCustomAction_Grenade
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXRumble_MeleeHit
// 0x0000 (0x0068 - 0x0068)
class USFXRumble_MeleeHit : public UWaveFormBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXSeqAct_EndObjective
// 0x0008 (0x0100 - 0x00F8)
class USFXSeqAct_EndObjective : public USequenceAction
{
public:
	class AActor*                                      oTarget;                                          		// 0x00F8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContent.SFXSeqAct_SetObjective
// 0x0035 (0x012D - 0x00F8)
class USFXSeqAct_SetObjective : public USequenceAction
{
public:
	struct FString                                     sObjectiveType;                                   		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     vMarkerOffset;                                    		// 0x0108 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      oTarget;                                          		// 0x0114 (0x0008) [0x0000000000000000]              
	struct FName                                       BoneToAttachTo;                                   		// 0x011C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                srObjective;                                      		// 0x0124 (0x0004) [0x0000000000000000]              
	unsigned long                                      MarkerIsLocationless : 1;                         		// 0x0128 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      DisplayMarkerOnSpawn : 1;                         		// 0x0128 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      MarkerType;                                       		// 0x012C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContent.SFXShake_MeleeHit
// 0x0000 (0x00D8 - 0x00D8)
class USFXShake_MeleeHit : public USFXCameraShakeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXShield_Energy_Player
// 0x0000 (0x04BC - 0x04BC)
class ASFXShield_Energy_Player : public ASFXShield_Player
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXDamageType_Grenade
// 0x0000 (0x0130 - 0x0130)
class USFXDamageType_Grenade : public USFXDamageType_Weapon
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

};

// Class SFXGameContent.SFXProjectile_DropPod
// 0x0017 (0x0530 - 0x0519)
class ASFXProjectile_DropPod : public ASFXProjectile_Explosive
{
public:
	class UClass*                                      RumbleClass;                                      		// 0x051C (0x0008) [0x0000000000000000]              
	class UClass*                                      ScreenShakeClass;                                 		// 0x0524 (0x0008) [0x0000000000000000]              
	unsigned long                                      bExplodeNextFrame : 1;                            		// 0x052C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bDisableTracking : 1;                             		// 0x052C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Recycle ( );
	bool ProjectileHurtRadius ( float InDamageAmount, float InDamageRadius, float Momentum, struct FVector HurtOrigin, struct FVector HitNormal );
	float GetDamageRadius ( );
	float GetDamage ( );
	void Explode ( struct FVector HitLocation, struct FVector HitNormal );
	void Tick ( float DeltaTime );
	void Init ( struct FVector Direction );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif