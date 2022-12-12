#include "EventSpawnActor.h"

void AEventSpawnActor::SetSpawnPlaceType(ESpawnPlaceType NewSpawnPlaceType) {
}

AEventSpawnActor::AEventSpawnActor() {
    this->SpawnPlaceType = ESpawnPlaceType::SPAWN_CENTER;
    this->PauseSequence = false;
}

