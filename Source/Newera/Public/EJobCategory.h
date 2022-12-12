#pragma once
#include "CoreMinimal.h"
#include "EJobCategory.generated.h"

UENUM(BlueprintType)
enum class EJobCategory : uint8 {
    BaseJob,
    BattleJob,
    None,
};

