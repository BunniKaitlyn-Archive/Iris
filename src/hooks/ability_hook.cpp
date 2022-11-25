#include "app.h"
#include "util.h"
#include "offsets.h"
#include <MinHook.h>

// GUH THIS IS SO BAD
bool (*CanActivateAbility)(SDK::UGameplayAbility*, SDK::FGameplayAbilitySpecHandle, SDK::FGameplayAbilityActorInfo*, SDK::FGameplayTagContainer*, SDK::FGameplayTagContainer*, SDK::FGameplayTagContainer*) = nullptr;
bool CanActivateAbilityHook(SDK::UGameplayAbility* thisptr, SDK::FGameplayAbilitySpecHandle Handle, SDK::FGameplayAbilityActorInfo* ActorInfo, SDK::FGameplayTagContainer* SourceTags, SDK::FGameplayTagContainer* TargetTags, SDK::FGameplayTagContainer* OptionalRelevantTags) {
    return true;
}

void iris::hooks::Ability() {
    PBYTE pCanActivateAbilityAddress = reinterpret_cast<PBYTE>(util::GetBaseAddress() + offsets::UGameplayAbility::CanActivateAbility);

    MH_CreateHook(pCanActivateAbilityAddress, reinterpret_cast<void*>(CanActivateAbilityHook), reinterpret_cast<PVOID*>(&CanActivateAbility));
    MH_EnableHook(pCanActivateAbilityAddress);
}
