#pragma once
#include "CoreMinimal.h"
#include "EWorldMapEventIconListState.generated.h"

UENUM(BlueprintType)
enum class EWorldMapEventIconListState : uint8 {
    CLOSE,
    CLOSING,
    OPEN,
    OPENING,
};

