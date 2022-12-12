#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectIcon.generated.h"

UENUM(BlueprintType)
enum class EStatusEffectIcon : uint8 {
    POISON,
    PARALYSIS,
    SILENCE,
    SLEEP,
    IMMOVABLE,
    BLIND,
    ANGRY,
    TEMPTATION,
    RERAISE,
    REGENE,
    INVINCIBLE,
    STEALTH,
    COUNTER,
    COUNTER_FIRE,
    COUNTER_ICE,
    MIGHTY_BLOW,
    STOP,
    ACT_TWICE,
    COVER,
    ABSORB_FIRE,
    ABSORB_ICE,
    ABSORB_WIND,
    ABSORB_THUNDER,
    TIME_BOMB,
    CHANGE_WEATHER,
    CHANGE_WIND,
    RANGE_EXTEND,
    AROUND_EFFECT,
};

