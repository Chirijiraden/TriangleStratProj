#pragma once
#include "CoreMinimal.h"
#include "EMapAttributeGroup.generated.h"

UENUM(BlueprintType)
enum class EMapAttributeGroup : uint8 {
    NONE,
    GROUP_STONE,
    GROUP_GRASS,
    GROUP_WATER,
    GROUP_FIRE,
    GROUP_ICE,
    MAX,
};

