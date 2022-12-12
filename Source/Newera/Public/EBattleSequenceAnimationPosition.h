#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceAnimationPosition.generated.h"

UENUM(BlueprintType)
enum class EBattleSequenceAnimationPosition : uint8 {
    INVALID,
    ATTACKER_HEAD,
    ATTACKER_BODY,
    DEFENDER_HEAD,
    DEFENDER_BODY,
};

