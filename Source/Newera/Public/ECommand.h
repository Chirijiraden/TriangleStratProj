#pragma once
#include "CoreMinimal.h"
#include "ECommand.generated.h"

UENUM(BlueprintType)
enum class ECommand : uint8 {
    None,
    PlaySE,
    PlayVoice,
};

