#include "SequenceCameraCenterBaseActor.h"

void ASequenceCameraCenterBaseActor::SetCenterRate(float Rate) {
}

ASequenceCameraCenterBaseActor::ASequenceCameraCenterBaseActor() {
    this->CenterRate = 0.50f;
    this->bScaleWithDistance = true;
}

