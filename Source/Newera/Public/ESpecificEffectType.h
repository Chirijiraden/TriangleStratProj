#pragma once
#include "CoreMinimal.h"
#include "ESpecificEffectType.generated.h"

UENUM(BlueprintType)
enum class ESpecificEffectType : uint8 {
    NONE,
    LIGHT_ARMOR,
    HEABY_ARMOR,
    MAGIC_ARMOR,
    FLYING_SOLDIER,
    CAVALRY,
};

