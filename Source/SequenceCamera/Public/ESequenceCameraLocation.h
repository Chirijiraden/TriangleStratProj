#pragma once
#include "CoreMinimal.h"
#include "ESequenceCameraLocation.generated.h"

UENUM(BlueprintType)
enum class ESequenceCameraLocation : uint8 {
    Attacker,
    Defender,
    Center,
    OtherActor,
    AllAreaActor,
};

