#pragma once
#include "CoreMinimal.h"
#include "EElementalType.generated.h"

UENUM(BlueprintType)
enum class EElementalType : uint8 {
    NONE,
    FIRE,
    ICE,
    WIND,
    THUNDER,
    MAX,
};

