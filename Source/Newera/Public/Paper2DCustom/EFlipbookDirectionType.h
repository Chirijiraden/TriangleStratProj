#pragma once
#include "CoreMinimal.h"
#include "EFlipbookDirectionType.generated.h"

UENUM(BlueprintType)
enum class EFlipbookDirectionType : uint8 {
    BOTTOM,
    BOTTOM_LEFT,
    LEFT,
    UPPER_LEFT,
    UP,
    UPPER_RIGHT,
    RIGHT,
    BOTTOM_RIGHT,
};

