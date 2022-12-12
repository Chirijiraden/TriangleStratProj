#pragma once
#include "CoreMinimal.h"
#include "ELandEffectType.generated.h"

UENUM(BlueprintType)
enum class ELandEffectType : uint8 {
    NONE,
    BURN,
    FREEZE,
    ELECTRICSHOCK = 0x4,
    PUDDLE = 0x8,
    EVAPORATION = 0x10,
    FIRESPREAD = 0x20,
    ALL = 0xFF,
};

