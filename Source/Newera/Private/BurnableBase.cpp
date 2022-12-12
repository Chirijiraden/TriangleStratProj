#include "BurnableBase.h"
#include "ActorListComponent.h"

ABurnableBase::ABurnableBase() {
    this->EnableBurnedResult = false;
    this->FuelTime = 0.00f;
    this->IsNotAlreadyMap = false;
    this->ActorListComponent = CreateDefaultSubobject<UActorListComponent>(TEXT("ActorListComponent"));
}

