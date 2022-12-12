#include "EventSpawnActorBurnable.h"

void AEventSpawnActorBurnable::SetSpawnPlaceType(ESpawnPlaceType NewSpawnPlaceType) {
}

AEventSpawnActorBurnable::AEventSpawnActorBurnable() {
    this->SpawnPlaceType = ESpawnPlaceType::SPAWN_CENTER;
    this->PauseSequence = false;
}

