#include "NeweraPointLightActor.h"
#include "Components/PointLightComponent.h"

ANeweraPointLightActor::ANeweraPointLightActor() {
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
}

