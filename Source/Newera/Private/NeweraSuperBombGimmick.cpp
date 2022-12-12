#include "NeweraSuperBombGimmick.h"

void ANeweraSuperBombGimmick::SwitchOff() {
}




void ANeweraSuperBombGimmick::EndExplosionEffect() {
}

ANeweraSuperBombGimmick::ANeweraSuperBombGimmick() {
    this->CountDownCounter = 25;
    this->AutoExplosion = false;
    this->countDownWork = 0;
    this->lastTriggerCheckTurn = 0;
}

