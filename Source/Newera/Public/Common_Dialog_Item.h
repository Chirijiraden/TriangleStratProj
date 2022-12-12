#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_Dialog_Item.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_Dialog_Item : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoPlayWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastForwardWaitTime;
    
    UCommon_Dialog_Item();
    UFUNCTION(BlueprintCallable)
    void onFinishedOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void onFinishedInAnimation();
    
};

