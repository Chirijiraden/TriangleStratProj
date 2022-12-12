#pragma once
#include "CoreMinimal.h"
#include "EStrikeStickDirection.generated.h"

UENUM(BlueprintType)
enum class EStrikeStickDirection : uint8 {
    LEFT,
    RIGHT,
    UP,
    DOWN,
    NONE,
};

