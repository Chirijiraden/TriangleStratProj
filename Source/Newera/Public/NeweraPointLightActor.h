#pragma once
#include "CoreMinimal.h"
#include "NeweraLightActor.h"
#include "NeweraPointLightActor.generated.h"

class UPointLightComponent;

UCLASS(Blueprintable)
class ANeweraPointLightActor : public ANeweraLightActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLightComponent;
    
public:
    ANeweraPointLightActor();
};

