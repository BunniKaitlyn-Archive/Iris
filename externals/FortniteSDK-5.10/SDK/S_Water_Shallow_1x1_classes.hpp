#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3EB - 0x3EB)
// BlueprintGeneratedClass S_Water_Shallow_1x1.S_Water_Shallow_1x1_C
class AS_Water_Shallow_1x1_C : public A_WaterMeshBlueprintMaster_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S_Water_Shallow_1x1_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif