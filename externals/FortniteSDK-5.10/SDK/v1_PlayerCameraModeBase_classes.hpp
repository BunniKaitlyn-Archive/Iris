#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xBB0 - 0xBB0)
// BlueprintGeneratedClass v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C
class UV1_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("v1_PlayerCameraModeBase_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
