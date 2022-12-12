#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceTargetType.generated.h"

UENUM(BlueprintType)
enum class EBattleSequenceTargetType : uint8 {
    ATTACKER,
    DEFENDER,
    DEFENDER_GROUP,
    DEFENDER_ALL,
    HIT_GROUP,
    HIT_CRITICAL_GROUP,
    OTHER,
    OUTSIDER,
    ATTACKER2,
    HIT_SPECIFIC_GROUP,
    HIT_CRITICAL_AND_SPECIFIC_GROUP,
    MISS_GROUP,
    ATTACK_EFFECT_POINTS,
    ATTACKER_AND_DEFENDER_ALL,
    OUTSIDE_DEFENDER_ALL,
    DEFENDER_SELF,
};

