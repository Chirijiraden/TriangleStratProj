#pragma once
#include "CoreMinimal.h"
#include "EWorldIconRequirementTokenType.h"
#include "NeweraWorldIconRequirementToken.generated.h"

USTRUCT(BlueprintType)
struct FNeweraWorldIconRequirementToken {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    UPROPERTY(EditAnywhere)
    EWorldIconRequirementTokenType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResult;
    
    NEWERA_API FNeweraWorldIconRequirementToken();
};

