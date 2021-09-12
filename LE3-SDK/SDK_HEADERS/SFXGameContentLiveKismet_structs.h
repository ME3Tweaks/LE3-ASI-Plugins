/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: SFXGameContentLiveKismet_structs.h
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

// ScriptStruct SFXGameContentLiveKismet.sfxseqact_leavemission.LeaveMissionData
// 0x0024
struct FLeaveMissionData
{
	struct FName                                       CurrentMap;                                       		// 0x0000 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FName                                       NextMap;                                          		// 0x0008 (0x0008) [0x0000000000004000]              ( CPF_Config )
	struct FName                                       NextStart;                                        		// 0x0010 (0x0008) [0x0000000000004000]              ( CPF_Config )
	int                                                EndGmAct;                                         		// 0x0018 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EndGmX;                                           		// 0x001C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              EndGmY;                                           		// 0x0020 (0x0004) [0x0000000000004000]              ( CPF_Config )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif