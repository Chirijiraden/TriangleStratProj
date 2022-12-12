#include "BuildingWithReturnPoint.h"
#include "ActorListComponent.h"
#include "NeweraResearchEnterCommand.h"

ABuildingWithReturnPoint::ABuildingWithReturnPoint() {
    this->ActorListComponent = CreateDefaultSubobject<UActorListComponent>(TEXT("ActorList"));
    this->enterCommand = CreateDefaultSubobject<UNeweraResearchEnterCommand>(TEXT("enterCommand"));
}

