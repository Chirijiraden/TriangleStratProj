#pragma once
#include "CoreMinimal.h"
#include "InOutDoorFadeCurve.h"
#include "InOutDoorFadeParams.generated.h"

USTRUCT(BlueprintType)
struct FInOutDoorFadeParams : public FInOutDoorFadeCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InDoorValue;
    
    NEWERA_API FInOutDoorFadeParams();
};

