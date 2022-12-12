#pragma once
#include "CoreMinimal.h"
#include "EHistoryCategory.generated.h"

UENUM(BlueprintType)
enum class EHistoryCategory : uint8 {
    HISTORY_1,
    HISTORY_2,
    HISTORY_3,
    HISTORY_MAX UMETA(Hidden),
};

