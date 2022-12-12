#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SlidMoveParam.generated.h"

class UInterpFloat;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FSlidMoveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SlideMoveDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideMoveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveSlideMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpSlideMoveT;
    
    NEWERA_API FSlidMoveParam();
};

