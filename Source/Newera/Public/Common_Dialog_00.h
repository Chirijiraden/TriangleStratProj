#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_Dialog_00.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_Dialog_00 : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UCommon_Dialog_00();
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

