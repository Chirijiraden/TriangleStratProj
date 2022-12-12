#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_Dialog_Join.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_Dialog_Join : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UCommon_Dialog_Join();
private:
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

