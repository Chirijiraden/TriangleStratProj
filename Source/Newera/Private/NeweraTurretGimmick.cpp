#include "NeweraTurretGimmick.h"






void ANeweraTurretGimmick::DestroyGimmick() {
}

ANeweraTurretGimmick::ANeweraTurretGimmick() {
    this->nowAttackCount = 0;
    this->sequenceAttackCount = 0;
    this->TurretDirection = 0.00f;
    this->oldDirection = 0.00f;
}

