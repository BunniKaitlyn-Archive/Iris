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


// Function B_AthenaAlwaysLoadedContentHack.B_AthenaAlwaysLoadedContentHack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_AthenaAlwaysLoadedContentHack_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_AthenaAlwaysLoadedContentHack_C", "UserConstructionScript");

	Params::AB_AthenaAlwaysLoadedContentHack_C_UserConstructionScript_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif