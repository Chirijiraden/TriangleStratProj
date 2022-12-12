#pragma once
#include "CoreMinimal.h"
#include "EFunctionFlag.generated.h"

UENUM(BlueprintType)
enum class EFunctionFlag : uint8 {
    SHOP_BAR,
    SHOP_SMITH,
    SHOP_ITEM,
    SHOP_GENERAL,
    SHOP_GENERAL_SCOUT,
    MENU_MAIN_UNLOCK,
    MENU_MAIN_STAND_BY,
    MENU_BATTLE_ORDER,
    MAX,
};

