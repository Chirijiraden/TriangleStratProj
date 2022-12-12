#pragma once
#include "CoreMinimal.h"
#include "ESequenceCameraForward.generated.h"

UENUM(BlueprintType)
enum class ESequenceCameraForward : uint8 {
    Attacker,
    Defender,
    AttackerToDefender,
    AttackerToDefenderYaw,
    OtherActor,
    World,
    AllAreaActor,
};

