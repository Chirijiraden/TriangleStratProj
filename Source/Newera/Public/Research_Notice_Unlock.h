#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Research_Notice_Unlock.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UResearch_Notice_Unlock : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UResearch_Notice_Unlock();
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

