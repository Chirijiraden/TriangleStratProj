#pragma once
#include "CoreMinimal.h"
#include "FadeCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FFadeCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveEndTime;
    
    NEWERA_API FFadeCurve();
};

