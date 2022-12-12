#pragma once
#include "CoreMinimal.h"
#include "EAbilityType.generated.h"

UENUM(BlueprintType)
enum class EAbilityType : uint8 {
    WEAPON_TECH,
    DAMAGE,
    RECOVERY,
    OTHER,
};

