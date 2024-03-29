#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetReserveFuel
struct AGCL_MedicPack_FuelRegen_C_GetReserveFuel_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D4E[0x4];                                     
	struct FGameplayAttribute                    ReserveFuelAttribute;                              // 0x8(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D4F[0x3];                                     
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D50[0x3];                                     
	float                                        CallFunc_GetSimulatedAttributeValue_ReturnValue;   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetReserveFuelPercent
struct AGCL_MedicPack_FuelRegen_C_GetReserveFuelPercent_Params
{
public:
	float                                        FuelPercent;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetReserveFuel_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetFuel
struct AGCL_MedicPack_FuelRegen_C_GetFuel_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D51[0x4];                                     
	struct FGameplayAttribute                    FuelAttribute;                                     // 0x8(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D52[0x3];                                     
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D53[0x3];                                     
	float                                        CallFunc_GetSimulatedAttributeValue_ReturnValue;   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.SetFuelRechargeAudioEnabled
struct AGCL_MedicPack_FuelRegen_C_SetFuelRechargeAudioEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D54[0x5];                                     
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFuelPercent_FuelPercent;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D55[0x4];                                     
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D56[0x7];                                     
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue1;         // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D57[0x7];                                     
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue1;          // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetFuelPercent
struct AGCL_MedicPack_FuelRegen_C_GetFuelPercent_Params
{
public:
	float                                        FuelPercent;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFuel_ReturnValue;                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.CacheAttributes
struct AGCL_MedicPack_FuelRegen_C_CacheAttributes_Params
{
public:
	struct FGameplayAttribute                    ReserveMaxFuelAttribute;                           // 0x0(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGameplayAttribute                    MaxFuelAttribute;                                  // 0x20(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                        CallFunc_GetSimulatedAttributeValue_ReturnValue;   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D58[0x3];                                     
	float                                        CallFunc_GetFloatAttribute_ReturnValue;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D59[0x3];                                     
	float                                        CallFunc_GetSimulatedAttributeValue_ReturnValue1;  // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute1; // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5A[0x3];                                     
	float                                        CallFunc_GetFloatAttribute_ReturnValue1;           // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.OnRemove
struct AGCL_MedicPack_FuelRegen_C_OnRemove_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5B[0x6];                                     
	class USkeletalMeshComponent*                CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.OnActive
struct AGCL_MedicPack_FuelRegen_C_OnActive_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5C[0x7];                                     
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5D[0x7];                                     
	class USkeletalMeshComponent*                CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.UserConstructionScript
struct AGCL_MedicPack_FuelRegen_C_UserConstructionScript_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc
struct AGCL_MedicPack_FuelRegen_C_FullBlinkTimeline__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc
struct AGCL_MedicPack_FuelRegen_C_FullBlinkTimeline__UpdateFunc_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.ReceiveTick
struct AGCL_MedicPack_FuelRegen_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.Audio Tick
struct AGCL_MedicPack_FuelRegen_C_Audio_Tick_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.ResetBlink
struct AGCL_MedicPack_FuelRegen_C_ResetBlink_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.Start Fuel Blink FX
struct AGCL_MedicPack_FuelRegen_C_Start_Fuel_Blink_FX_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.ExecuteUbergraph_GCL_MedicPack_FuelRegen
struct AGCL_MedicPack_FuelRegen_C_ExecuteUbergraph_GCL_MedicPack_FuelRegen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5E[0x3];                                     
	float                                        K2Node_Event_DeltaSeconds;                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFuelPercent_FuelPercent;               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D5F[0x7];                                     
	class USkeletalMeshComponent*                CallFunc_GetSkeletalMeshForPartType_ReturnValue;   // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFuelPercent_FuelPercent1;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetFloatValue_ReturnValue;                // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D60[0x3];                                     
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeUnclamped_ReturnValue;            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetSkeletalMeshForPartType_ReturnValue1;  // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D61[0x1];                                     
	float                                        CallFunc_GetFuelPercent_FuelPercent2;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3D62[0x3];                                     
	float                                        CallFunc_GetReserveFuelPercent_FuelPercent;        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
