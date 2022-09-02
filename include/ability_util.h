#pragma once
#include "app.h"
#include "util.h"
#include "offsets.h"
#include <cinttypes>

namespace iris {

class ability_util {
private:
    static SDK::FGameplayAbilitySpec CreateSpec(SDK::UClass* abilityClass) {
        return SDK::FGameplayAbilitySpec{{-1, -1, -1}, SDK::FGameplayAbilitySpecHandle{rand()}, abilityClass->CreateDefaultObject<SDK::UGameplayAbility>(), 1, -1, nullptr, 0, false, false, false};
    }

public:
    static void GrantAbility(SDK::UAbilitySystemComponent* abilitySystemComponent, SDK::UClass* abilityClass) {
        static SDK::FGameplayAbilitySpecHandle (*GiveAbility_Internal)(SDK::UAbilitySystemComponent*, SDK::FGameplayAbilitySpecHandle*, SDK::FGameplayAbilitySpec) = reinterpret_cast<decltype(GiveAbility_Internal)>(util::GetBaseAddress() + offsets::UAbilitySystemComponent::GiveAbility);

        if (!abilitySystemComponent) {
            return;
        }

        SDK::FGameplayAbilitySpec Spec = CreateSpec(abilityClass);

        for (int32_t i = 0; i < abilitySystemComponent->ActivatableAbilities.Items.Num(); i++) {
            SDK::FGameplayAbilitySpec& CurrentSpec = abilitySystemComponent->ActivatableAbilities.Items[i];
            if (CurrentSpec.Ability == Spec.Ability) {
                return;
            }
        }

        GiveAbility_Internal(abilitySystemComponent, &Spec.Handle, Spec);
    }

    static void TryActivateAbility(SDK::UAbilitySystemComponent* abilitySystemComponent, SDK::FGameplayAbilitySpecHandle ability, SDK::FPredictionKey predictionKey) {
        static bool (*InternalTryActivateAbility_Internal)(SDK::UAbilitySystemComponent*, SDK::FGameplayAbilitySpecHandle, SDK::FPredictionKey, SDK::UGameplayAbility**, void*, SDK::FGameplayEventData*) = reinterpret_cast<decltype(InternalTryActivateAbility_Internal)>(util::GetBaseAddress() + offsets::UAbilitySystemComponent::InternalTryActivateAbility);

        SDK::UGameplayAbility* InstancedAbility = nullptr;

        if (!InternalTryActivateAbility_Internal(abilitySystemComponent, ability, predictionKey, &InstancedAbility, nullptr, nullptr)) {
            abilitySystemComponent->ClientActivateAbilityFailed(ability, predictionKey.Base);
        }
    }
};

}