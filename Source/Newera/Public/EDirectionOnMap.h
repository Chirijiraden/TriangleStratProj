#pragma once
#include "CoreMinimal.h"
#include "EDirectionOnMap.generated.h"

UENUM(BlueprintType)
enum class EDirectionOnMap : uint8 {
    X_PLUS,
    X_MINUS,
    Y_PLUS,
    Y_MINUS,
    X_PLUS_Y_PLUS,
    X_MINUS_Y_PLUS,
    X_MINUS_Y_MINUS,
    X_PLUS_Y_MINUS,
    MAX,
};

