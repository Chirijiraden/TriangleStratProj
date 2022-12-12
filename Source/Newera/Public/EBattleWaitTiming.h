#pragma once
#include "CoreMinimal.h"
#include "EBattleWaitTiming.generated.h"

UENUM(BlueprintType)
enum class EBattleWaitTiming : uint8 {
    UNIT_TURN_END,
    UNIT_TURN_START_HEAL,
    MAX,
};

