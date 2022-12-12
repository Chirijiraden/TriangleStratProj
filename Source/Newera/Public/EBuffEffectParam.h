#pragma once
#include "CoreMinimal.h"
#include "EBuffEffectParam.generated.h"

UENUM(BlueprintType)
enum class EBuffEffectParam : uint8 {
    MOVE,
    JUMP,
    SPEED,
    STR,
    INT,
    DEF,
    MDF,
    DEX,
    AGI,
    LUK,
    RES_FIRE,
    RES_ICE,
    RES_WIND,
    RES_THUNDER,
    MAXHP,
    MAX,
};

