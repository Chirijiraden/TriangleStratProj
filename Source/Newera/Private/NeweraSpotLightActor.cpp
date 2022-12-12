#include "NeweraSpotLightActor.h"
#include "Components/SpotLightComponent.h"

ANeweraSpotLightActor::ANeweraSpotLightActor() {
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
}

