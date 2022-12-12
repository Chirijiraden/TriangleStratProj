#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_AutoSave.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_AutoSave : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UCommon_AutoSave();
};

