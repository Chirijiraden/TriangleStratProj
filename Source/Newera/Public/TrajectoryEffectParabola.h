#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrajectoryEffectParabola.generated.h"

class UInterpFloat;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class UTrajectoryEffectParabola : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* TimerDeactivateEffect;
    
public:
    UTrajectoryEffectParabola();
};

