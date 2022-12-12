#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceGetId.generated.h"

UENUM(BlueprintType)
enum class EBattleSequenceGetId : uint8 {
    EVENT_PARAM,
    ID_FROM_ATTACK_PARAM,
    ID_FROM_ABILITY,
};

