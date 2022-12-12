#pragma once
#include "CoreMinimal.h"
#include "EMapGridState.generated.h"

UENUM(BlueprintType)
enum class EMapGridState : uint8 {
    NONE,
    DEFAULT,
    BURNING,
    FREEZING = 0x4,
    PUDDLING = 0x8,
    SNOWING = 0x10,
    WET = 0x20,
    ALL = 0xFF,
};

