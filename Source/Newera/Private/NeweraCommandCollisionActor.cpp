#include "NeweraCommandCollisionActor.h"
#include "ActorListComponent.h"
#include "Components/SphereComponent.h"

void ANeweraCommandCollisionActor::ActiveCollision(bool Active) {
}

ANeweraCommandCollisionActor::ANeweraCommandCollisionActor() {
    this->ActorListComponent = CreateDefaultSubobject<UActorListComponent>(TEXT("ActorListComponent"));
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CommandCollision"));
    this->EffectParticle = NULL;
    this->EffectIntervalSec = 0.00f;
}

