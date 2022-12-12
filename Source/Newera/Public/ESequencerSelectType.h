#pragma once
#include "CoreMinimal.h"
#include "ESequencerSelectType.generated.h"

UENUM(BlueprintType)
enum class ESequencerSelectType : uint8 {
    NONE,
    ATTACK_RANGE_2GRID,
    ATTACK_RANGE_2GRID_OR_HEIGHT3,
};

