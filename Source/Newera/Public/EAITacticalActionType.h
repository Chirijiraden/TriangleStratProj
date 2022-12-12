#pragma once
#include "CoreMinimal.h"
#include "EAITacticalActionType.generated.h"

UENUM(BlueprintType)
enum class EAITacticalActionType : uint8 {
    None,
    Heal,
    Move,
};

