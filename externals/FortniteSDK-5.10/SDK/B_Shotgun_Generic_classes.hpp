#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xF30 - 0xF30)
// BlueprintGeneratedClass B_Shotgun_Generic.B_Shotgun_Generic_C
class AB_Shotgun_Generic_C : public AB_Ranged_Generic_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Shotgun_Generic_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
