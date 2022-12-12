#pragma once
#include "CoreMinimal.h"
#include "KnockBackParam.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FKnockBackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpCurve1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpCurve2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpCurve3;
    
    NEWERA_API FKnockBackParam();
};

