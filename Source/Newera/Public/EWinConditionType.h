#pragma once
#include "CoreMinimal.h"
#include "EWinConditionType.generated.h"

UENUM(BlueprintType)
enum class EWinConditionType : uint8 {
    EXTERMINATION,
    KNOCKDOWN,
    DOMINATE,
};

