#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "MainMenu_Accessory_EquipList_Inventory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_Accessory_EquipList_Inventory : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UMainMenu_Accessory_EquipList_Inventory();
    UFUNCTION(BlueprintCallable)
    void onFinishedOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void onFinishedInAnimation();
    
};

