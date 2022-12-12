#pragma once
#include "CoreMinimal.h"
#include "NeweraWorldIconRequirementToken.h"
#include "NeweraWorldIconRequirementReversePolishNotationTokens.generated.h"

USTRUCT(BlueprintType)
struct FNeweraWorldIconRequirementReversePolishNotationTokens {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNeweraWorldIconRequirementToken> Data;
    
    NEWERA_API FNeweraWorldIconRequirementReversePolishNotationTokens();
};

