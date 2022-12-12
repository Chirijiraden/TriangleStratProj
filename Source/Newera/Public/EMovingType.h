#pragma once
#include "CoreMinimal.h"
#include "EMovingType.generated.h"

UENUM(BlueprintType)
enum class EMovingType : uint8 {
    NONE,
    ONE_TIME,
    YOYO,
};

