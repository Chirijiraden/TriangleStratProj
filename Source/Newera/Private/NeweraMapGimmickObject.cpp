#include "NeweraMapGimmickObject.h"
#include "ActorListComponent.h"


ANeweraMapGimmickObject::ANeweraMapGimmickObject() {
    this->mapGimmickHeight = 0.00f;
    this->ActorListComponent = CreateDefaultSubobject<UActorListComponent>(TEXT("ActorListComponent"));
    this->BattleCmd_Enable = false;
}

