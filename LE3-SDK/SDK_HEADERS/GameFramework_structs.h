/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: GameFramework_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct GameFramework.GameTypes.ScreenShakeAnimStruct
// 0x0038
struct FScreenShakeAnimStruct
{
	class UCameraAnim*                                 Anim;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class UCameraAnim*                                 Anim_Left;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	class UCameraAnim*                                 Anim_Right;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
	class UCameraAnim*                                 Anim_Rear;                                        		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              AnimPlayRate;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              AnimScale;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              AnimBlendInTime;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              AnimBlendOutTime;                                 		// 0x002C (0x0004) [0x0000000000000000]              
	float                                              RandomSegmentDuration;                            		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUseDirectionalAnimVariants : 1;                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRandomSegment : 1;                               		// 0x0034 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSingleInstance : 1;                              		// 0x0034 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct GameFramework.GameTypes.ShakeParams
// 0x0004
struct FShakeParams
{
	unsigned char                                      X;                                                		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Y;                                                		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      Z;                                                		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      Padding;                                          		// 0x0003 (0x0001) [0x0000000000002002]              ( CPF_Const | CPF_Transient )
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeStruct
// 0x0075
struct FScreenShakeStruct
{
	struct FVector                                     RotAmplitude;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     RotFrequency;                                     		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     RotSinOffset;                                     		// 0x0018 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocAmplitude;                                     		// 0x0024 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocFrequency;                                     		// 0x0030 (0x000C) [0x0000000000000000]              
	struct FVector                                     LocSinOffset;                                     		// 0x003C (0x000C) [0x0000000000000000]              
	struct FName                                       ShakeName;                                        		// 0x0048 (0x0008) [0x0000000000000000]              
	float                                              TimeToGo;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	float                                              TimeDuration;                                     		// 0x0054 (0x0004) [0x0000000000000000]              
	struct FShakeParams                                RotParam;                                         		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FShakeParams                                LocParam;                                         		// 0x005C (0x0004) [0x0000000000000000]              
	float                                              FOVAmplitude;                                     		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              FOVFrequency;                                     		// 0x0064 (0x0004) [0x0000000000000000]              
	float                                              FOVSinOffset;                                     		// 0x0068 (0x0004) [0x0000000000000000]              
	float                                              TargetingDampening;                               		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned long                                      bOverrideTargetingDampening : 1;                  		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      FOVParam;                                         		// 0x0074 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GameFramework.GameTypes.TakeHitInfo
// 0x0041
struct FTakeHitInfo
{
	class UClass*                                      DamageType;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     RadialDamageOrigin;                               		// 0x0020 (0x000C) [0x0000000000000000]              
	class APawn*                                       instigatedBy;                                     		// 0x002C (0x0008) [0x0000000000000000]              
	class UPhysicalMaterial*                           PhysicalMaterial;                                 		// 0x0034 (0x0008) [0x0000000000000000]              
	float                                              Damage;                                           		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned char                                      HitBoneIndex;                                     		// 0x0040 (0x0001) [0x0000000000000000]              
};

// ScriptStruct GameFramework.SeqAct_ModifyProperty.PropertyInfo
// 0x001C
struct FPropertyInfo
{
	struct FString                                     PropertyValue;                                    		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       PropertyName;                                     		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bModifyProperty : 1;                              		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif