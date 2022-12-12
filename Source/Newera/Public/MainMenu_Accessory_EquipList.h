#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "MainMenu_Accessory_EquipList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_Accessory_EquipList : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UMainMenu_Accessory_EquipList();
    UFUNCTION(BlueprintCallable)
    void onFinishedOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void onFinishedInAnimation();
    
};

