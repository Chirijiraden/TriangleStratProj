#pragma once
#include "CoreMinimal.h"
#include "EAttackCategory.generated.h"

UENUM(BlueprintType)
enum class EAttackCategory : uint8 {
    Weapon,
    Ability,
    Item,
    Change,
    LinkAttack,
    BattleOrder,
};

