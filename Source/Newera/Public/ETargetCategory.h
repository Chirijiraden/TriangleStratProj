#pragma once
#include "CoreMinimal.h"
#include "ETargetCategory.generated.h"

UENUM(BlueprintType)
enum class ETargetCategory : uint8 {
    NONE,
    FOR_ENEMY,
    FOR_FRIEND,
    FOR_ALL,
};

