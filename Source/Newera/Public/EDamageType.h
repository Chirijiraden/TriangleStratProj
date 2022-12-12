#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM(BlueprintType)
enum class EDamageType : uint8 {
    NONE,
    PHYSICS_BASE,
    MAGIC_BASE,
    FIXED,
    STR_MUL,
    STR_DIV,
    DEX_MUL,
    INT_MUL,
    MAX_HP_RATE,
    GOLD_BASE,
    DESPERATE,
    WEAPON,
    MAGIC_ITEM_ATTACK,
    MAX_HP_RATE_NO_ATTACKER,
};

