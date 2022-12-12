#pragma once
#include "CoreMinimal.h"
#include "NeweraParticleSystemsNest.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FNeweraParticleSystemsNest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> Data;
    
    NEWERA_API FNeweraParticleSystemsNest();
};

