#pragma once
#include "CoreMinimal.h"
#include "SeqCameraEffectAsset.generated.h"

class UParticleSystem;
class UMaterialInstance;

USTRUCT(BlueprintType)
struct FSeqCameraEffectAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* Decal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DecalActorClass;
    
    NEWERA_API FSeqCameraEffectAsset();
};

