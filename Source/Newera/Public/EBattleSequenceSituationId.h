#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceSituationId.generated.h"

UENUM(BlueprintType)
enum class EBattleSequenceSituationId : uint8 {
    NONE,
    ATTACK_HIT,
    ATTACK_MISS,
    HP_ZERO,
    CRITICAL_HIT,
    NO_REACTION,
};

