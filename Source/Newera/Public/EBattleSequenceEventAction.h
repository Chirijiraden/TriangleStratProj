#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceEventAction.generated.h"

UENUM(BlueprintType)
enum class EBattleSequenceEventAction : uint8 {
    Alwasy,
    Equal,
    NotEqual,
};

