#pragma once
#include "CoreMinimal.h"
#include "ENeweraButtonOp.h"
#include "ENeweraGameButton.h"
#include "ENeweraButton.h"
#include "NeweraActionButtonInfo.generated.h"

USTRUCT(BlueprintType)
struct FNeweraActionButtonInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool developmentOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeweraGameButton ACTION;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENeweraButton> Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENeweraButtonOp opCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pushSec;
    
    NEWERA_API FNeweraActionButtonInfo();
};

