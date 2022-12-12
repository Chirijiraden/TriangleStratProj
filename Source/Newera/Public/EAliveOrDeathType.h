#pragma once
#include "CoreMinimal.h"
#include "EAliveOrDeathType.generated.h"

UENUM(BlueprintType)
enum class EAliveOrDeathType : uint8 {
    ALIVE_FRIEND_UNIT,
    ALIVE_ENEMY_UNIT,
    DEATH_FRIEND_UNIT,
    DEATH_ENEMY_UNIT,
    MAX,
};

