#include "GOP_Sound_3DSetTable.h"

FGOP_Sound_3DSetTable::FGOP_Sound_3DSetTable() {
    this->bSpatialize = false;
    this->bAttenuateByDistance = false;
    this->bAttachOwner = false;
    this->InteriorSourceRadius = 0.00f;
    this->InteriorDistance = 0.00f;
    this->AttenuationDistanceMin = 0.00f;
    this->AttenuationDistanceMax = 0.00f;
    this->DopplerEffectRate = 0.00f;
    this->ConeAngleInner = 0.00f;
    this->ConeAngleOuter = 0.00f;
    this->ConeOutsideVolumeRate = 0.00f;
    this->SendLevelCenter = 0.00f;
    this->SendLevelLFE = 0.00f;
}

