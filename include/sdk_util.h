#pragma once
#include "app.h"
#include "util.h"
#include "offsets.h"
#include <cinttypes>

namespace iris {

class sdk_util {
public:
    template <typename T = SDK::UObject>
    static T* LoadObject(const std::wstring name, SDK::UObject* outer = nullptr) {
        static SDK::UObject* (*StaticLoadObject_Internal)(SDK::UClass*, SDK::UObject*, const wchar_t*, const wchar_t*, uint32_t, SDK::UPackageMap*, bool) = reinterpret_cast<decltype(StaticLoadObject_Internal)>(util::GetBaseAddress() + offsets::StaticLoadObject);
        return static_cast<T*>(StaticLoadObject_Internal(T::StaticClass(), outer, name.c_str(), nullptr, 0, nullptr, false));
    }

    template <typename T = SDK::AActor>
    static T* SpawnActor(SDK::UClass* clazz, SDK::FVector location, SDK::FRotator rotation) {
        struct FActorSpawnParameters {
            uint8_t Pad_0[0xFF];
        };

        static SDK::AActor* (*SpawnActor_Internal)(SDK::UWorld*, SDK::UClass*, SDK::FVector*, SDK::FRotator*, FActorSpawnParameters&) = reinterpret_cast<decltype(SpawnActor_Internal)>(util::GetBaseAddress() + offsets::UWorld::SpawnActor);

        FActorSpawnParameters params{};
        return static_cast<T*>(SpawnActor_Internal(*g_App->GWorld, clazz, &location, &rotation, params));
    }

    static bool CompareGuid(SDK::FGuid a, SDK::FGuid b) {
        if (a.A == b.A && a.B == b.B && a.C == b.C && a.D == b.D) {
            return true;
        }

        return false;
    }
};

}
