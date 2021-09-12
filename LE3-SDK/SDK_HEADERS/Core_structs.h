/*
#############################################################################################
# Mass Effect 3 (Legendary Edition) (2.0.0.48602) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.53-MELE
# ========================================================================================= #
# File: Core_structs.h
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

// ScriptStruct Core.Object.Rotator
// 0x000C
struct FRotator
{
	int                                                Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Yaw;                                              		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Roll;                                             		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Plane
// 0x0004(0x0010 - 0x000C)
struct FPlane : FVector
{
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                C;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                D;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Vector4
// 0x0010
struct FVector4
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              G;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              B;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              A;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      G;                                                		// 0x0001 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      R;                                                		// 0x0002 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      A;                                                		// 0x0003 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurvePointVector2D
// 0x001D
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   OutVal;                                           		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   ArriveTangent;                                    		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   LeaveTangent;                                     		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x001C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveVector2D
// 0x0011
struct FInterpCurveVector2D
{
	struct TArray<struct FInterpCurvePointVector2D>    Points;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointFloat
// 0x0011
struct FInterpCurvePointFloat
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OutVal;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArriveTangent;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LeaveTangent;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveFloat
// 0x0011
struct FInterpCurveFloat
{
	struct TArray<struct FInterpCurvePointFloat>       Points;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Cylinder
// 0x0008
struct FCylinder
{
	float                                              Radius;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointVector
// 0x0029
struct FInterpCurvePointVector
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     OutVal;                                           		// 0x0004 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     ArriveTangent;                                    		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     LeaveTangent;                                     		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveVector
// 0x0011
struct FInterpCurveVector
{
	struct TArray<struct FInterpCurvePointVector>      Points;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Quat
// 0x0010
struct FQuat
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                           		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FPlane                                      YPlane;                                           		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FPlane                                      ZPlane;                                           		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FPlane                                      WPlane;                                           		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                           		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     BoxExtent;                                        		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              SphereRadius;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                               		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     v2;                                               		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.TAlphaBlend
// 0x0015
struct FTAlphaBlend
{
	float                                              AlphaIn;                                          		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              AlphaOut;                                         		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              AlphaTarget;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTime;                                        		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendTimeToGo;                                    		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      BlendType;                                        		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.RwVector3
// 0x000C
struct FRwVector3
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.BioRwBox
// 0x0030
struct FBioRwBox
{
	struct FRwVector3                                  Min;                                              		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FRwVector3                                  Max;                                              		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0020 (0x0010) UNKNOWN PROPERTY: BioMask4Property Core.Object.BioRwBox.IsValid
};

// ScriptStruct Core.Object.RwQuat
// 0x0010
struct FRwQuat
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.RwVector2
// 0x0008
struct FRwVector2
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.SFXTokenMapping
// 0x0014
struct FSFXTokenMapping
{
	int                                                TokenId;                                          		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Data;                                             		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct Core.Object.QWord
// 0x0008
struct FQWord
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.BoneAtom
// 0x0020
struct FBoneAtom
{
	struct FQuat                                       Rotation;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Pointer
// 0x0008
struct FPointer
{
	int                                                Dummy;                                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0004 (0x0004) MISSED OFFSET
};

// ScriptStruct Core.Object.OctreeElementId
// 0x000C
struct FOctreeElementId
{
	struct FPointer                                    Node;                                             		// 0x0000 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ElementIndex;                                     		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.RenderCommandFence
// 0x0004
struct FRenderCommandFence
{
	int                                                NumPendingFences;                                 		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.BioRawDistributionRwVector3Base
// 0x0024
struct FBioRawDistributionRwVector3Base
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Op;                                               		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      LookupTableNumElements;                           		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      LookupTableChunkSize;                             		// 0x0003 (0x0001) [0x0000000000000000]              
	float                                              LookupTableMinOut;                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              LookupTableMaxOut;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	struct TArray<struct FRwVector3>                   LookupTable;                                      		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LookupTableTimeScale;                             		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              LookupTableStartTime;                             		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.RawDistribution
// 0x001C
struct FRawDistribution
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      Op;                                               		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      LookupTableNumElements;                           		// 0x0002 (0x0001) [0x0000000000000000]              
	unsigned char                                      LookupTableChunkSize;                             		// 0x0003 (0x0001) [0x0000000000000000]              
	struct TArray<float>                               LookupTable;                                      		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LookupTableTimeScale;                             		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              LookupTableStartTime;                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointLinearColor
// 0x0035
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                OutVal;                                           		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ArriveTangent;                                    		// 0x0014 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                LeaveTangent;                                     		// 0x0024 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0034 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveLinearColor
// 0x0011
struct FInterpCurveLinearColor
{
	struct TArray<struct FInterpCurvePointLinearColor> Points;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointQuat
// 0x0041
struct FInterpCurvePointQuat
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0004 (0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                           		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FQuat                                       ArriveTangent;                                    		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FQuat                                       LeaveTangent;                                     		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveQuat
// 0x0011
struct FInterpCurveQuat
{
	struct TArray<struct FInterpCurvePointQuat>        Points;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.InterpCurvePointTwoVectors
// 0x004D
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FTwoVectors                                 OutVal;                                           		// 0x0004 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FTwoVectors                                 ArriveTangent;                                    		// 0x001C (0x0018) [0x0000000000000001]              ( CPF_Edit )
	struct FTwoVectors                                 LeaveTangent;                                     		// 0x0034 (0x0018) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      InterpMode;                                       		// 0x004C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.InterpCurveTwoVectors
// 0x0011
struct FInterpCurveTwoVectors
{
	struct TArray<struct FInterpCurvePointTwoVectors>  Points;                                           		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      InterpMethod;                                     		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.Box
// 0x0019
struct FBox
{
	struct FVector                                     Min;                                              		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Max;                                              		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      IsValid;                                          		// 0x0018 (0x0001) [0x0000000000000000]              
};

// ScriptStruct Core.Object.TPOV
// 0x001C
struct FTPOV
{
	struct FVector                                     location;                                         		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    Rotation;                                         		// 0x000C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              FOV;                                              		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.SHVector
// 0x0030
struct FSHVector
{
	float                                              V[ 0x9 ];                                         		// 0x0000 (0x0024) [0x0000000000000001]              ( CPF_Edit )
	float                                              Padding[ 0x3 ];                                   		// 0x0024 (0x000C) [0x0000000000000000]              
};

// ScriptStruct Core.Object.SHVectorRGB
// 0x0090
struct FSHVectorRGB
{
	struct FSHVector                                   R;                                                		// 0x0000 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	struct FSHVector                                   G;                                                		// 0x0030 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	struct FSHVector                                   B;                                                		// 0x0060 (0x0030) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.Array_Mirror
// 0x0010
struct FArray_Mirror
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ArrayNum;                                         		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ArrayMax;                                         		// 0x000C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.IndirectArray_Mirror
// 0x0010
struct FIndirectArray_Mirror
{
	struct FPointer                                    Data;                                             		// 0x0000 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ArrayNum;                                         		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ArrayMax;                                         		// 0x000C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.FColorVertexBuffer_Mirror
// 0x001C
struct FFColorVertexBuffer_Mirror
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    VertexData;                                       		// 0x0008 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                Data;                                             		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Stride;                                           		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumVertices;                                      		// 0x0018 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct Core.Object.RenderCommandFence_Mirror
// 0x0004
struct FRenderCommandFence_Mirror
{
	int                                                NumPendingFences;                                 		// 0x0000 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct Core.Object.UntypedBulkData_Mirror
// 0x0040
struct FUntypedBulkData_Mirror
{
	struct FPointer                                    VfTable;                                          		// 0x0000 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                BulkDataFlags;                                    		// 0x0008 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                ElementCount;                                     		// 0x000C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                BulkDataOffsetInFile;                             		// 0x0010 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                BulkDataSizeOnDisk;                               		// 0x0014 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedBulkDataFlags;                               		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedElementCount;                                		// 0x001C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedBulkDataOffsetInFile;                        		// 0x0020 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                SavedBulkDataSizeOnDisk;                          		// 0x0024 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    BulkData;                                         		// 0x0028 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                LockStatus;                                       		// 0x0030 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    AttachedAr;                                       		// 0x0034 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                bShouldFreeOnEmpty;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.RwPlane
// 0x0010
struct FRwPlane
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.RwMatrix44
// 0x0040
struct FRwMatrix44
{
	struct FRwPlane                                    XPlane;                                           		// 0x0000 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FRwPlane                                    YPlane;                                           		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FRwPlane                                    ZPlane;                                           		// 0x0020 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FRwPlane                                    WPlane;                                           		// 0x0030 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.RwVector4
// 0x0010
struct FRwVector4
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct Core.Object.BitArray_Mirror
// 0x0020
struct FBitArray_Mirror
{
	struct FPointer                                    IndirectData;                                     		// 0x0000 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                InlineData[ 0x4 ];                                		// 0x0008 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                NumBits;                                          		// 0x0018 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                MaxBits;                                          		// 0x001C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.SparseArray_Mirror
// 0x0038
struct FSparseArray_Mirror
{
	struct TArray<int>                                 Elements;                                         		// 0x0000 (0x0010) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FBitArray_Mirror                            AllocationFlags;                                  		// 0x0010 (0x0020) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                FirstFreeIndex;                                   		// 0x0030 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                NumFreeIndices;                                   		// 0x0034 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Set_Mirror
// 0x0048
struct FSet_Mirror
{
	struct FSparseArray_Mirror                         Elements;                                         		// 0x0000 (0x0038) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                InlineHash;                                       		// 0x0038 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FPointer                                    Hash;                                             		// 0x003C (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                HashSize;                                         		// 0x0044 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.MultiMap_Mirror
// 0x0048
struct FMultiMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                            		// 0x0000 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Map_Mirror
// 0x0048
struct FMap_Mirror
{
	struct FSet_Mirror                                 Pairs;                                            		// 0x0000 (0x0048) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.ThreadSafeCounter
// 0x0004
struct FThreadSafeCounter
{
	int                                                Value;                                            		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.Object.Double
// 0x0008
struct FDouble
{
	int                                                A;                                                		// 0x0000 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                B;                                                		// 0x0004 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
};

// ScriptStruct Core.DistributionFloat.RawDistributionFloat
// 0x0008(0x0024 - 0x001C)
struct FRawDistributionFloat : FRawDistribution
{
	class UDistributionFloat*                          Distribution;                                     		// 0x001C (0x0008) [0x0000000006080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
};

// ScriptStruct Core.DistributionVector.RawDistributionVector
// 0x0008(0x0024 - 0x001C)
struct FRawDistributionVector : FRawDistribution
{
	class UDistributionVector*                         Distribution;                                     		// 0x001C (0x0008) [0x0000000006080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
};

// ScriptStruct Core.DistributionVector.BioRawDistributionRwVector3
// 0x0008(0x002C - 0x0024)
struct FBioRawDistributionRwVector3 : FBioRawDistributionRwVector3Base
{
	class UDistributionVector*                         Distribution;                                     		// 0x0024 (0x0008) [0x0000000006080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NoClear | CPF_EditInline )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif