#include "TrapBase.h"

void ATrapBase::SetDestructed(bool isDestructed) {
}


void ATrapBase::CallDelegateOnActivationEnd() {
}

ATrapBase::ATrapBase() {
    this->bIsActibated = false;
    this->bIsDestructed = false;
    this->spawnTeam = 0;
    this->bIsLoadedSpawn = false;
    this->bpBridgeBoolParam1 = false;
    this->bpBridgeIntParam1 = 0;
    this->bpBridgeFloatParam1 = 0.00f;
}

