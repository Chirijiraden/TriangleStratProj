#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "MainMenu_StoryChart_Base.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_StoryChart_Base : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UMainMenu_StoryChart_Base();
    UFUNCTION(BlueprintCallable)
    void SetResId(FName resId);
    
};

