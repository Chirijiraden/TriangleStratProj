#pragma once
#include "CoreMinimal.h"
#include "EWeatherType.generated.h"

UENUM(BlueprintType)
enum class EWeatherType : uint8 {
    SUNNY,
    CLOUDY,
    LIGHTRAIN,
    HEABYRAIN,
    THUNDERSTORM,
    SNOW,
    INDOOR,
    WEATHERTYPE_MAX UMETA(Hidden),
};

