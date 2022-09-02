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
// BlueprintGeneratedClass Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C
class UAthena_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_PlayerCameraModeBase_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
