#pragma once
#include "CoreMinimal.h"
#include "EUnitCategory.generated.h"

UENUM(BlueprintType)
enum class EUnitCategory : uint8 {
    HUMAN,
    OBJECT,
    ORNAMENT,
};

