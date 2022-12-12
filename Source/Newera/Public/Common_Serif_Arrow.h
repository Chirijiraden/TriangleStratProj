#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_Serif_Arrow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_Serif_Arrow : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UCommon_Serif_Arrow();
private:
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

