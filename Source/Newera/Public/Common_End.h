#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_End.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_End : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UCommon_End();
private:
    UFUNCTION(BlueprintCallable)
    void onAnimOpenFinished();
    
};

