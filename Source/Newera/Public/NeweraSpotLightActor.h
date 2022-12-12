#pragma once
#include "CoreMinimal.h"
#include "NeweraLightActor.h"
#include "NeweraSpotLightActor.generated.h"

class USpotLightComponent;

UCLASS(Blueprintable)
class ANeweraSpotLightActor : public ANeweraLightActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComponent;
    
public:
    ANeweraSpotLightActor();
};

