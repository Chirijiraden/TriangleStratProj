#pragma once
#include "CoreMinimal.h"
#include "EFlipbookEffectMirroringType.h"
#include "FlipbookConfigDataEffect.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FFlipbookConfigDataEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFlipbookEffectMirroringType MirroringType;
    
    NEWERA_API FFlipbookConfigDataEffect();
};

