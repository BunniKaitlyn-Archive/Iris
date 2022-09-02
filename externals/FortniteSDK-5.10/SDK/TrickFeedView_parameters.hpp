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

// 0x68 (0x68 - 0x0)
// Function TrickFeedView.TrickFeedView_C.GetCalloutText
struct UTrickFeedView_C_GetCalloutText_Params
{
public:
	class FText                                  Callout;                                           // 0x0(0x18)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable1;                               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFB[0x6];                                     
	TArray<class FText>                          K2Node_Select_Default;                             // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class FText>                          K2Node_Select1_Default;                            // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DFC[0x4];                                     
	class FText                                  CallFunc_Array_Get_Item;                           // 0x50(0x18)()
};

// 0xC (0xC - 0x0)
// Function TrickFeedView.TrickFeedView_C.UpdateAirDistanceHeight
struct UTrickFeedView_C_UpdateAirDistanceHeight_Params
{
public:
	float                                        AirTime;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Distance;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Height;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TrickFeedView.TrickFeedView_C.TrickStarted
struct UTrickFeedView_C_TrickStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TrickFeedView.TrickFeedView_C.TrickComplete
struct UTrickFeedView_C_TrickComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TrickFeedView.TrickFeedView_C.TrickFailed
struct UTrickFeedView_C_TrickFailed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TrickFeedView.TrickFeedView_C.HIdeTrickUI
struct UTrickFeedView_C_HIdeTrickUI_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function TrickFeedView.TrickFeedView_C.AddTrick
struct UTrickFeedView_C_AddTrick_Params
{
public:
	enum class EVehicleTrickType                 TrickType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DFD[0x7];                                     
	class FText                                  TrickName;                                         // 0x8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x4 (0x4 - 0x0)
// Function TrickFeedView.TrickFeedView_C.UpdateScore
struct UTrickFeedView_C_UpdateScore_Params
{
public:
	int32                                        TotalScore;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function TrickFeedView.TrickFeedView_C.UpdateMultiplier
struct UTrickFeedView_C_UpdateMultiplier_Params
{
public:
	int32                                        Multiplier;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TrickFeedView.TrickFeedView_C.SimulateTrick
struct UTrickFeedView_C_SimulateTrick_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function TrickFeedView.TrickFeedView_C.PreConstruct
struct UTrickFeedView_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TrickFeedView.TrickFeedView_C.CritStyleEvent
struct UTrickFeedView_C_CritStyleEvent_Params
{
public:
	bool                                         IsCritical;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function TrickFeedView.TrickFeedView_C.ToggleCompleteStyle
struct UTrickFeedView_C_ToggleCompleteStyle_Params
{
public:
	bool                                         IsComplete;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function TrickFeedView.TrickFeedView_C.EventTrickCompliment
struct UTrickFeedView_C_EventTrickCompliment_Params
{
public:
};

// 0x5B8 (0x5B8 - 0x0)
// Function TrickFeedView.TrickFeedView_C.ExecuteUbergraph_TrickFeedView
struct UTrickFeedView_C_ExecuteUbergraph_TrickFeedView_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFE[0x3];                                     
	struct FVector2D                             Temp_struct_Variable;                              // 0xC(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable1;                             // 0x14(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable1;                               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4DFF[0x3];                                     
	struct FLinearColor                          Temp_struct_Variable2;                             // 0x20(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable3;                             // 0x30(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable2;                               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable3;                               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E00[0x6];                                     
	class UObject*                               Temp_object_Variable;                              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable1;                             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable4;                               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable5;                               // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E01[0x6];                                     
	class UObject*                               Temp_object_Variable2;                             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable3;                             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_AirTime;                              // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Distance;                             // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Height;                               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue1;           // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E02[0x4];                                     
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x88(0x18)()
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue1;            // 0xA0(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xB8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData1;             // 0xF8(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue2;            // 0x138(0x18)()
	int32                                        Temp_int_Variable1;                                // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E03[0x4];                                     
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData2;             // 0x158(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x198(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x1A8(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x1D0(0x8)(NoDestructor)
	enum class EVehicleTrickType                 K2Node_Event_TrickType;                            // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E04[0x7];                                     
	class FText                                  K2Node_Event_TrickName;                            // 0x1E0(0x18)(ConstParm)
	class UUserWidget*                           CallFunc_BP_CreateEntry_ReturnValue;               // 0x1F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTrickEntry_C*                         K2Node_DynamicCast_AsTrick_Entry;                  // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E05[0x3];                                     
	int32                                        K2Node_Event_TotalScore;                           // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Multiplier;                           // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData3;             // 0x218(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array1;                           // 0x258(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue1;                      // 0x268(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x280(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue1;             // 0x298(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue2;             // 0x2B0(0x18)()
	bool                                         Temp_bool_Variable6;                               // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E06[0x7];                                     
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x2D0(0x28)()
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E07[0x3];                                     
	struct FLinearColor                          Temp_struct_Variable4;                             // 0x2FC(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x30D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x30E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_isCritical;                     // 0x30F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        K2Node_Select_Default;                             // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Select1_Default;                            // 0x314(0x8)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select2_Default;                            // 0x31C(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E08[0x4];                                     
	class UObject*                               K2Node_Select3_Default;                            // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor1;                     // 0x338(0x28)()
	struct FLinearColor                          Temp_struct_Variable5;                             // 0x360(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable7;                               // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E09[0x3];                                     
	struct FLinearColor                          K2Node_Select4_Default;                            // 0x374(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E0A[0x4];                                     
	struct FSlateColor                           K2Node_MakeStruct_SlateColor2;                     // 0x388(0x28)()
	struct FFontOutlineSettings                  K2Node_MakeStruct_FontOutlineSettings;             // 0x3B0(0x28)(NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x3D8(0x58)(HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable1;                               // 0x431(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable8;                               // 0x432(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select5_Default;                            // 0x433(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_isComplete;                     // 0x434(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E0B[0x3];                                     
	class UObject*                               K2Node_Select6_Default;                            // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x440(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E0C[0x4];                                     
	struct FFontOutlineSettings                  K2Node_MakeStruct_FontOutlineSettings1;            // 0x448(0x28)(NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select7_Default;                            // 0x470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E0D[0x4];                                     
	struct FSlateColor                           K2Node_MakeStruct_SlateColor3;                     // 0x478(0x28)()
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo1;                  // 0x4A0(0x58)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor4;                     // 0x4F8(0x28)()
	struct FSlateColor                           K2Node_Select8_Default;                            // 0x520(0x28)()
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue1;         // 0x548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E0E[0x7];                                     
	class UUserWidget*                           CallFunc_BP_CreateEntryOfClass_ReturnValue;        // 0x550(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCalloutEntry_C*                       K2Node_DynamicCast_AsCallout_Entry;                // 0x558(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E0F[0x7];                                     
	class FText                                  CallFunc_GetCalloutText_Callout;                   // 0x568(0x18)()
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x580(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E10[0x4];                                     
	class FText                                  CallFunc_MakeLiteralText_ReturnValue3;             // 0x588(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue4;             // 0x5A0(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
