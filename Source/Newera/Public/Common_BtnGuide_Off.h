#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_BtnGuide_Off.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_BtnGuide_Off : public UCommonBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UWidgetAnimation*> Animations;
    
public:
    UCommon_BtnGuide_Off();
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

