#pragma once
#include "CoreMinimal.h"
#include "FadeCurve.h"
#include "InOutDoorFadeCurve.generated.h"

USTRUCT(BlueprintType)
struct FInOutDoorFadeCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeCurve BlendInDoorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeCurve BlendOutDoorCurve;
    
    NEWERA_API FInOutDoorFadeCurve();
};

