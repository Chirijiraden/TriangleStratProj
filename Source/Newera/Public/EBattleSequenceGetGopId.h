#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceGetGopId.generated.h"

UENUM(BlueprintType)
enum class EBattleSequenceGetGopId : uint8 {
    EVENT_PARAM,
    GOP_SE_ID_FROM_ATTACK_PARAM,
    GOP_SE_ID_FROM_ABILITY,
};

