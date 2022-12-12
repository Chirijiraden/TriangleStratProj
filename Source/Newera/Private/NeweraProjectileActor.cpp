#include "NeweraProjectileActor.h"
#include "ActorListComponent.h"

ANeweraProjectileActor::ANeweraProjectileActor() {
    this->Launch = false;
    this->persistentFlag = false;
    this->ActorListComponent = CreateDefaultSubobject<UActorListComponent>(TEXT("ActorListComponent"));
}

