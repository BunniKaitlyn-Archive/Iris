#include "app.h"
#include "util.h"
#include "offsets.h"
#include <MinHook.h>

#define UOBJECT_SIZE 0x28

enum class ELevelCollectionType {
    DynamicSourceLevels,
    DynamicDuplicatedLevels,
    StaticLevels,
    MAX
};

SDK::FName NAME_GameNetDriver{282, 0};

bool (*CreateNamedNetDriver)(SDK::UEngine*, SDK::UWorld*, SDK::FName, SDK::FName) = nullptr;
SDK::UNetDriver* (*FindNamedNetDriver)(SDK::UEngine*, SDK::UWorld*, SDK::FName) = nullptr;
void (*SetWorld)(SDK::UNetDriver*, SDK::UWorld*) = nullptr;
SDK::FLevelCollection* (*FindCollectionByType)(SDK::UWorld*, ELevelCollectionType) = nullptr;
bool (*InitListen)(SDK::UIpNetDriver*, void*, SDK::FURL&, bool, SDK::FString&) = nullptr;

bool Listen(SDK::UWorld* thisptr, SDK::FURL& InURL) {
    if (thisptr->NetDriver) {
        return false;
    }

    if (CreateNamedNetDriver(g_App->GEngine, thisptr, NAME_GameNetDriver, NAME_GameNetDriver)) {
        thisptr->NetDriver = FindNamedNetDriver(g_App->GEngine, thisptr, NAME_GameNetDriver);
        SetWorld(thisptr->NetDriver, thisptr);
        SDK::FLevelCollection* SourceCollection = FindCollectionByType(thisptr, ELevelCollectionType::DynamicSourceLevels);
        if (SourceCollection) {
            SourceCollection->NetDriver = thisptr->NetDriver;
        }
        SDK::FLevelCollection* StaticCollection = FindCollectionByType(thisptr, ELevelCollectionType::StaticLevels);
        if (StaticCollection) {
            StaticCollection->NetDriver = thisptr->NetDriver;
        }
    }

    if (!thisptr->NetDriver) {
        return false;
    }

    SDK::FString Error;
    if (!InitListen(static_cast<SDK::UIpNetDriver*>(thisptr->NetDriver), reinterpret_cast<void*>(__int64(thisptr) + UOBJECT_SIZE), InURL, false, Error)) {
        printf("Failed to listen: %s\n", Error.ToString().c_str());
        SetWorld(thisptr->NetDriver, nullptr);
        thisptr->NetDriver = nullptr;
        SDK::FLevelCollection* SourceCollection = FindCollectionByType(thisptr, ELevelCollectionType::DynamicSourceLevels);
        if (SourceCollection) {
            SourceCollection->NetDriver = nullptr;
        }
        SDK::FLevelCollection* StaticCollection = FindCollectionByType(thisptr, ELevelCollectionType::StaticLevels);
        if (StaticCollection) {
            StaticCollection->NetDriver = nullptr;
        }
        return false;
    }

    //static const bool bLanPlay = FParse::Param(FCommandLine::Get(),TEXT("lanplay"));
    //const bool bLanSpeed = bLanPlay || InURL.HasOption(TEXT("LAN"));
    const bool bLanSpeed = false;
    if (!bLanSpeed && (thisptr->NetDriver->MaxInternetClientRate < thisptr->NetDriver->MaxClientRate) && (thisptr->NetDriver->MaxInternetClientRate > 2500)) {
        thisptr->NetDriver->MaxClientRate = thisptr->NetDriver->MaxInternetClientRate;
    }

    //NextSwitchCountdown = NetDriver->ServerTravelPause;
    return true;
}

bool (*SetGameMode)(SDK::UWorld*, SDK::FURL&) = nullptr;
bool SetGameModeHook(SDK::UWorld* thisptr, SDK::FURL& InURL) {
    if (!thisptr->AuthorityGameMode) {
        return SetGameMode(thisptr, InURL);
    } else {
        return Listen(thisptr, InURL);
    }

    return false;
}

void iris::hooks::Listen() {
    CreateNamedNetDriver = decltype(CreateNamedNetDriver)(util::GetBaseAddress() + offsets::UEngine::CreateNamedNetDriver);
    FindNamedNetDriver = decltype(FindNamedNetDriver)(util::GetBaseAddress() + offsets::UEngine::FindNamedNetDriver);
    SetWorld = decltype(SetWorld)(util::GetBaseAddress() + offsets::UNetDriver::SetWorld);
    FindCollectionByType = decltype(FindCollectionByType)(util::GetBaseAddress() + offsets::UWorld::FindCollectionByType);
    InitListen = decltype(InitListen)(util::GetBaseAddress() + offsets::UIpNetDriver::InitListen);

    PBYTE pSetGameModeAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + offsets::UWorld::SetGameMode);
    PBYTE pLoadMap_ListenAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + offsets::UEngine::LoadMap_Listen);

    util::PatchCall(reinterpret_cast<uintptr_t>(pLoadMap_ListenAddress), reinterpret_cast<uintptr_t>(pSetGameModeAddress));

    MH_CreateHook(pSetGameModeAddress, reinterpret_cast<void*>(SetGameModeHook), reinterpret_cast<PVOID*>(&SetGameMode));
    MH_EnableHook(pSetGameModeAddress);
}
