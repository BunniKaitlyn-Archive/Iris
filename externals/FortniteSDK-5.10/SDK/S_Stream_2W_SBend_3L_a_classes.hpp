#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x3EC - 0x3EB)
// BlueprintGeneratedClass S_Stream_2W_SBend_3L_a.S_Stream_2W_SBend_3L_a_C
class AS_Stream_2W_SBend_3L_a_C : public A_WaterMeshBlueprintMaster_C
{
public:
	bool                                         ShowTestMesh_0;                                    // 0x3EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S_Stream_2W_SBend_3L_a_C");
		return Clss;
	}

	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif