#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function QuestMapNodeLayout-1-1-1-1.QuestMapNodeLayout-1-1-1-1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestMapNodeLayout_1_1_1_1_C::Construct()
{
	static auto Func = Class->GetFunction("QuestMapNodeLayout-1-1-1-1_C", "Construct");

	Params::UQuestMapNodeLayout_1_1_1_1_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapNodeLayout-1-1-1-1.QuestMapNodeLayout-1-1-1-1_C.ExecuteUbergraph_QuestMapNodeLayout-1-1-1-1
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapNodeLayout_1_1_1_1_C::ExecuteUbergraph_QuestMapNodeLayout_1_1_1_1(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("QuestMapNodeLayout-1-1-1-1_C", "ExecuteUbergraph_QuestMapNodeLayout-1-1-1-1");

	Params::UQuestMapNodeLayout_1_1_1_1_C_ExecuteUbergraph_QuestMapNodeLayout_1_1_1_1_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
