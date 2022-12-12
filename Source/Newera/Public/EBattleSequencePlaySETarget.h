#pragma once
#include "CoreMinimal.h"
#include "EBattleSequencePlaySETarget.generated.h"

UENUM(BlueprintType)
enum class EBattleSequencePlaySETarget : uint8 {
    PLAY_2D,
    ATTACKER,
    DEFENDER,
    OTHER,
};

