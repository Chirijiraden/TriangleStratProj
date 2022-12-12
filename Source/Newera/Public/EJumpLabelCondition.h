#pragma once
#include "CoreMinimal.h"
#include "EJumpLabelCondition.generated.h"

UENUM(BlueprintType)
enum class EJumpLabelCondition : uint8 {
    NO_CONDITION,
    NO_PURSUIT,
    NO_COUNTERATTACK,
    NO_PURSUIT_AND_COUNTERATTACK,
    NO_MAX UMETA(Hidden),
};

