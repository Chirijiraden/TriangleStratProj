#pragma once
#include "CoreMinimal.h"
#include "ETradingPointDataSource.generated.h"

UENUM(BlueprintType)
enum class ETradingPointDataSource : uint8 {
    None,
    GameMoney,
    BattleExploit,
};

