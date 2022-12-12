#pragma once
#include "CoreMinimal.h"
#include "AbstractParticleModule.h"
#include "Distributions/DistributionVector.h"
#include "ParticleModuleLocationJiggle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleLocationJiggle : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector Intensity;
    
public:
    UParticleModuleLocationJiggle();
};

