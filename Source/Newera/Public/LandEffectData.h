#pragma once
#include "CoreMinimal.h"
#include "LandEffectData.generated.h"

class UFXSystemComponent;

USTRUCT(BlueprintType)
struct FLandEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* FXSystemComponent;
    
    NEWERA_API FLandEffectData();
};

