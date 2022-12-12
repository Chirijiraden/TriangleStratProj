#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "MainMenu_Accessory_UseUnitList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_Accessory_UseUnitList : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UMainMenu_Accessory_UseUnitList();
    UFUNCTION(BlueprintCallable)
    void onFinishedOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void onFinishedInAnimation();
    
};

