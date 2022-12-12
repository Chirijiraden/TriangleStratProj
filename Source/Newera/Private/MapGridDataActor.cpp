#include "MapGridDataActor.h"

AMapGridDataActor::AMapGridDataActor() {
    this->Height = 0;
    this->HeightFlyingLimit = 999;
    this->HeightObject = 0;
    this->MapAttribute = EMapAttribute::NONE;
    this->LayerLevel = 0;
    this->MapPosX = 0;
    this->MapPosY = 0;
    this->OverrideStateChange = false;
    this->PossibleFreeze = false;
    this->PossiblePuddle = false;
    this->PossibleSnow = false;
}

