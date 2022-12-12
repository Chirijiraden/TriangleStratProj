#pragma once
#include "CoreMinimal.h"
#include "EActionVoiceCategory.generated.h"

UENUM(BlueprintType)
enum class EActionVoiceCategory : uint8 {
    INVALID,
    ON_TURN_START,
    ON_SINGLE_ATTACK,
    ON_FIRST_ATTACK,
    ON_PURSUIT_ATTACK,
    ON_COUNTER_ATTACK,
    ON_COUNTER_ATTACK_TRAP,
    ON_DAMAGE,
    ON_ATTACKER_REACTION_GOOD,
    ON_ATTACKER_REACTION_BAD,
    ON_DODGE,
    ON_RECOVER,
    ON_BUFF,
    ON_DEATH,
    ON_ITEM,
    ON_ABILITY_ATTACK,
    ON_ABILITY_GET,
    ON_LEVEL_UP,
};

