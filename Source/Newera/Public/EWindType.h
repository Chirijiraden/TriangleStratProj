#pragma once
#include "CoreMinimal.h"
#include "EWindType.generated.h"

UENUM(BlueprintType)
enum class EWindType : uint8 {
    GENTLEWIND,
    STRONGWIND,
    STORM,
    INDOOR,
    WINDTYPE_MAX UMETA(Hidden),
};

