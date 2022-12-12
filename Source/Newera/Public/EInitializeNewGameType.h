#pragma once
#include "CoreMinimal.h"
#include "EInitializeNewGameType.generated.h"

UENUM(BlueprintType)
enum class EInitializeNewGameType : uint8 {
    Product,
    Trial1,
    Trial2,
    EditorInGame,
    NoEquipment,
};

