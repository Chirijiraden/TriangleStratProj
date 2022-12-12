#include "EventSpawnGimmick.h"

void AEventSpawnGimmick::SetSpawnPlaceType(ESpawnPlaceType _spawnPlaceType) {
}

AEventSpawnGimmick::AEventSpawnGimmick() {
    this->SpawnPlaceType = ESpawnPlaceType::SPAWN_CENTER;
    this->IsInheritanceActorLevel = false;
}

