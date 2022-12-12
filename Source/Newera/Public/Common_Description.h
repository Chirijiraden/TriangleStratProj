#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_Description.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_Description : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UCommon_Description();
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

