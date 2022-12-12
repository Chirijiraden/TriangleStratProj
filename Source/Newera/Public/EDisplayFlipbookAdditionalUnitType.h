#pragma once
#include "CoreMinimal.h"
#include "EDisplayFlipbookAdditionalUnitType.generated.h"

UENUM(BlueprintType)
enum class EDisplayFlipbookAdditionalUnitType : uint8 {
    SINGLE,
    ORDER,
    RANDOM,
};

