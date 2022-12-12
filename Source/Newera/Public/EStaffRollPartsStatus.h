#pragma once
#include "CoreMinimal.h"
#include "EStaffRollPartsStatus.generated.h"

UENUM(BlueprintType)
enum class EStaffRollPartsStatus : uint8 {
    None,
    BeginSetup,
    Setup,
    SetupCompleted,
    Closed,
    Opening,
    Opened,
    Closing,
    BeginRemove,
    Remove,
    RemoveCompleted,
    EndRemove,
};

