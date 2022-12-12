#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Battle_Log_Range.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UBattle_Log_Range : public UCommonBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayUIMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverflowWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseValue;
    
public:
    UBattle_Log_Range();
};

