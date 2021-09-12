/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentLiveKismet_classes.h
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

#define CONST_INDEX_MISSION_COUNT                                10165
#define CONST_INDEX_ACTIVE_WORLD                                 10161
#define CONST_INDEX_CURRENT_VIEWING                              10162
#define CONST_INDEX_PREVIOUS_ACTIVE                              10163
#define CONST_INDEX_GALAXY_X                                     10041
#define CONST_INDEX_GALAXY_Y                                     10042

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum SFXGameContentLiveKismet.SFXSeqAct_GetActorHealth.EGetHealthType
/*enum EGetHealthType
{
	GetHealthType_Current                              = 0,
	GetHealthType_Percent                              = 1,
	GetHealthType_Maximum                              = 2,
	GetHealthType_MAX                                  = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class SFXGameContentLiveKismet.BioSeqAct_GiveMissionXP
// 0x0000 (0x010C - 0x010C)
class UBioSeqAct_GiveMissionXP : public UBioSeqAct_GiveMissionXP_NativeBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_ClearAreaMap
// 0x0000 (0x00F8 - 0x00F8)
class USFXSeqAct_ClearAreaMap : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_GetHenchmenInSquad
// 0x0030 (0x0128 - 0x00F8)
class USFXSeqAct_GetHenchmenInSquad : public USequenceAction
{
public:
	class APawn*                                       Hench1;                                           		// 0x00F8 (0x0008) [0x0000000000000000]              
	class APawn*                                       Hench2;                                           		// 0x0100 (0x0008) [0x0000000000000000]              
	float                                              hench_liara;                                      		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_kaidan;                                     		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_ashley;                                     		// 0x0110 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_garrus;                                     		// 0x0114 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_edi;                                        		// 0x0118 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_prothean;                                   		// 0x011C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_marine;                                     		// 0x0120 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              hench_tali;                                       		// 0x0124 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
	float GetPriority ( class APawn* Henchman );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_GetTag
// 0x0010 (0x0108 - 0x00F8)
class USFXSeqAct_GetTag : public USequenceAction
{
public:
	struct FName                                       Tag;                                              		// 0x00F8 (0x0008) [0x0000000000000000]              
	struct FName                                       UniqueTag;                                        		// 0x0100 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.sfxseqact_leavemission
// 0x0010 (0x0108 - 0x00F8)
class Usfxseqact_leavemission : public USequenceAction
{
public:
	struct TArray<struct FLeaveMissionData>            LeaveMissionArray;                                		// 0x00F8 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void GrantAutomaticGawAssets ( );
	void eventActivated ( );
	class ABioWorldInfo* getWorld ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_SaveGame
// 0x0019 (0x0125 - 0x010C)
class USFXSeqAct_SaveGame : public USeqAct_Latent
{
public:
	class USFXEngine*                                  CachedEngine;                                     		// 0x010C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       LevelNameDisplayOverride;                         		// 0x0114 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              ElapsedTime;                                      		// 0x011C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bFiredOutPin : 1;                                 		// 0x0120 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bForceAutoSave : 1;                               		// 0x0120 (0x0004) [0x0000000000002002] [0x00000002] ( CPF_Const | CPF_Transient )
	unsigned char                                      FinishState;                                      		// 0x0124 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void BeginSave ( struct FSFXSaveDescriptor Descriptor );
	void Deactivated ( );
	bool Update ( float DeltaTime );
	void Activated ( );
	class ABioPlayerController* GetBioPlayerController ( );
	bool CanSave ( class ABioPlayerController* PC );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_SetTag
// 0x0010 (0x0108 - 0x00F8)
class USFXSeqAct_SetTag : public USequenceAction
{
public:
	struct FName                                       Tag;                                              		// 0x00F8 (0x0008) [0x0000000000000000]              
	struct FName                                       UniqueTag;                                        		// 0x0100 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_SetWasInSquad
// 0x0024 (0x011C - 0x00F8)
class USFXSeqAct_SetWasInSquad : public USequenceAction
{
public:
	struct TArray<int>                                 Index_InSquad;                                    		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<int>                                 Index_WasInSquad;                                 		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bSetNotRestore : 1;                               		// 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventActivated ( );
	class ABioWorldInfo* getWorld ( );
};

// Class SFXGameContentLiveKismet.SFXSeqCond_CanSpendTallentPoints
// 0x0008 (0x00E4 - 0x00DC)
class USFXSeqCond_CanSpendTallentPoints : public USequenceCondition
{
public:
	class USFXPowerLevelUpHelper*                      m_Helper;                                         		// 0x00DC (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	bool CanSpendTallentPoints ( );
	void eventDeactivated ( );
	void eventActivated ( );
};

// Class SFXGameContentLiveKismet.BioSeqAct_GetMembersOfSquad
// 0x0038 (0x0130 - 0x00F8)
class UBioSeqAct_GetMembersOfSquad : public USequenceAction
{
public:
	struct TArray<class APawn*>                        m_aoActorList;                                    		// 0x00F8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct TArray<class UObject*>                      m_aoPassSquads;                                   		// 0x0108 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class APawn*                                       m_oCurrentMember;                                 		// 0x0118 (0x0008) [0x0000000000000000]              
	class APawn*                                       m_oOutputCurrentMember;                           		// 0x0120 (0x0008) [0x0000000000000000]              
	int                                                m_nIndex;                                         		// 0x0128 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bAlsoReturnDeadMembers : 1;                     		// 0x012C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
	class APawn* FindAPawn ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_GetMapName
// 0x0008 (0x0100 - 0x00F8)
class USFXSeqAct_GetMapName : public USequenceAction
{
public:
	struct FName                                       MapName;                                          		// 0x00F8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqCond_CombatArea
// 0x0000 (0x00DC - 0x00DC)
class USFXSeqCond_CombatArea : public USequenceCondition
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventActivated ( );
};

// Class SFXGameContentLiveKismet.BioSeqAct_CancelHint
// 0x0000 (0x00F8 - 0x00F8)
class UBioSeqAct_CancelHint : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.BioSeqAct_CheckIfInVolume
// 0x0010 (0x0108 - 0x00F8)
class UBioSeqAct_CheckIfInVolume : public USequenceAction
{
public:
	class AActor*                                      m_oTarget;                                        		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_oVolume;                                        		// 0x0100 (0x0008) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContentLiveKismet.BioSeqAct_ShowHint
// 0x0015 (0x010D - 0x00F8)
class UBioSeqAct_ShowHint : public USequenceAction
{
public:
	int                                                srXBoxMessage;                                    		// 0x00F8 (0x0004) [0x0000000000000000]              
	int                                                srPCMessage;                                      		// 0x00FC (0x0004) [0x0000000000000000]              
	int                                                srPS3Message;                                     		// 0x0100 (0x0004) [0x0000000000000000]              
	float                                              fDisplayTime;                                     		// 0x0104 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bCached : 1;                                      		// 0x0108 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      ForceVisible : 1;                                 		// 0x0108 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned char                                      Position;                                         		// 0x010C (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_CompareAliveSquadMembers
// 0x0018 (0x0110 - 0x00F8)
class USFXSeqAct_CompareAliveSquadMembers : public USequenceAction
{
public:
	struct TArray<class AActor*>                       Squads;                                           		// 0x00F8 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                AliveSquadMemberCount;                            		// 0x0108 (0x0004) [0x0000000000000000]              
	int                                                Threshold;                                        		// 0x010C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_ForcePlayerIntoCover
// 0x0018 (0x0110 - 0x00F8)
class USFXSeqAct_ForcePlayerIntoCover : public USequenceAction
{
public:
	class AController*                                 Player;                                           		// 0x00F8 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class ACoverLink*                                  Link;                                             		// 0x0100 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                SlotIdx;                                          		// 0x0108 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bDisableAnimatedTransition : 1;                   		// 0x010C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_RingworldSimulator
// 0x0028 (0x0138 - 0x0110)
class USFXSeqAct_RingworldSimulator : public UBioSequenceLatentAction
{
public:
	class AActor*                                      m_aPlayer;                                        		// 0x0110 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_aBoundA;                                        		// 0x0118 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_aBoundB;                                        		// 0x0120 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class AActor*                                      m_aWorldbase;                                     		// 0x0128 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              m_fMaxRoll;                                       		// 0x0130 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      m_bTeleport : 1;                                  		// 0x0134 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	bool eventUpdate ( float DeltaTime );
	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_SetPawnInvulnerable
// 0x0004 (0x00FC - 0x00F8)
class USFXSeqAct_SetPawnInvulnerable : public USequenceAction
{
public:
	unsigned long                                      bPlotProtected : 1;                               		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bMin1Health : 1;                                  		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventActivated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_SetMusicID
// 0x0004 (0x00FC - 0x00F8)
class USFXSeqAct_SetMusicID : public USequenceAction
{
public:
	int                                                nMusicID;                                         		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_GetActorHealth
// 0x000D (0x0105 - 0x00F8)
class USFXSeqAct_GetActorHealth : public USequenceAction
{
public:
	class AActor*                                      Actor;                                            		// 0x00F8 (0x0008) [0x0000000000000000]              
	float                                              Health;                                           		// 0x0100 (0x0004) [0x0000000000000000]              
	unsigned char                                      GetHealthType;                                    		// 0x0104 (0x0001) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void eventActivated ( );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_GiveAmmo
// 0x0008 (0x0100 - 0x00F8)
class USFXSeqAct_GiveAmmo : public USequenceAction
{
public:
	int                                                AmmoToGive;                                       		// 0x00F8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AllGuns : 1;                                      		// 0x00FC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
	void AdjustAmmo ( class ASFXWeapon* Weapon );
};

// Class SFXGameContentLiveKismet.SFXSeqAct_SetWeaponClass
// 0x0004 (0x00FC - 0x00F8)
class USFXSeqAct_SetWeaponClass : public USequenceAction
{
public:
	unsigned long                                      bAssaultRifle : 1;                                		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPistol : 1;                                      		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bSMG : 1;                                         		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bSniperRifle : 1;                                 		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bShotgun : 1;                                     		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bHeavyWeapon : 1;                                 		// 0x00F8 (0x0004) [0x0000000000000001] [0x00000020] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	int eventGetObjClassVersion ( );
	void Activated ( );
	bool GetIsWeaponOfRequestedClass ( class ASFXWeapon* WeaponToCheck );
};

// Class SFXGameContentLiveKismet.SFXSeqCond_HasAmmo
// 0x0010 (0x00EC - 0x00DC)
class USFXSeqCond_HasAmmo : public USequenceCondition
{
public:
	class UObject*                                     Target;                                           		// 0x00DC (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                AmmoCount;                                        		// 0x00E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AllGuns : 1;                                      		// 0x00E8 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass();

	void Activated ( );
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif