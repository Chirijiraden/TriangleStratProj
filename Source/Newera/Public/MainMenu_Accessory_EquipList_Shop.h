#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "MainMenu_Accessory_EquipList_Shop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_Accessory_EquipList_Shop : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UMainMenu_Accessory_EquipList_Shop();
    UFUNCTION(BlueprintCallable)
    void onFinishedOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void onFinishedInAnimation();
    
};

