#include "NeweraLightDirRotator.h"
#include "ActorListComponent.h"

float ANeweraLightDirRotator::GetDirectionBlendRate() const {
    return 0.0f;
}

ANeweraLightDirRotator::ANeweraLightDirRotator() {
    this->DirectionLightIntensity = 0.00f;
    this->ActorListComponent = CreateDefaultSubobject<UActorListComponent>(TEXT("ActorListComponent"));
}

