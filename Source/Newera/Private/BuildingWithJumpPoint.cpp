#include "BuildingWithJumpPoint.h"
#include "ActorListComponent.h"
#include "NeweraResearchEnterCommand.h"

ABuildingWithJumpPoint::ABuildingWithJumpPoint() {
    this->ActorListComponent = CreateDefaultSubobject<UActorListComponent>(TEXT("ActorList"));
    this->enterCommand = CreateDefaultSubobject<UNeweraResearchEnterCommand>(TEXT("enterCommand"));
}

