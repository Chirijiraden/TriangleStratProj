#pragma once
#include "CoreMinimal.h"
#include "EEventInfoDataSource.generated.h"

UENUM(BlueprintType)
enum class EEventInfoDataSource : uint8 {
    None,
    Note,
    Tutorial,
    Information,
};

