#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Title_Difficulty.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NEWERA_API UTitle_Difficulty : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UTitle_Difficulty();
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

