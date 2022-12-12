#pragma once
#include "CoreMinimal.h"
#include "EPrayWeatherType.generated.h"

UENUM(BlueprintType)
enum class EPrayWeatherType : uint8 {
    ClearSky,
    RainyDay,
    GaleBlows,
    Breeze,
    Lightning,
};

