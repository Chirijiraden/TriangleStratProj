#pragma once
#include "CoreMinimal.h"
#include "NeweraMapTimeDependingActor.h"
#include "NeweraLightActor.generated.h"

class ANeweraParticleActor;
class UCurveFloat;

UCLASS(Blueprintable)
class ANeweraLightActor : public ANeweraMapTimeDependingActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CurveLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANeweraParticleActor* targetParticleActor;
    
public:
    ANeweraLightActor();
};

