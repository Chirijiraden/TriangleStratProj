#pragma once
#include "CoreMinimal.h"
#include "SaveGameDataType.generated.h"

UENUM(BlueprintType)
enum class SaveGameDataType : uint8 {
    System,
    Game,
};

