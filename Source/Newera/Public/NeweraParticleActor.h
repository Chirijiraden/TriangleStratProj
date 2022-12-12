#pragma once
#include "CoreMinimal.h"
#include "NeweraMapTimeDependingActor.h"
#include "NeweraParticleActor.generated.h"

class UCurveFloat;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ANeweraParticleActor : public ANeweraMapTimeDependingActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* particleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* curveEffectScale;
    
public:
    ANeweraParticleActor();
};

