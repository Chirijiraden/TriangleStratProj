#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_Choice.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_Choice : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UCommon_Choice();
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

