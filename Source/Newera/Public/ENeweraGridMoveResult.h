#pragma once
#include "CoreMinimal.h"
#include "ENeweraGridMoveResult.generated.h"

UENUM(BlueprintType)
enum class ENeweraGridMoveResult : uint8 {
    SUCCEEDED,
    CANCELED,
};

