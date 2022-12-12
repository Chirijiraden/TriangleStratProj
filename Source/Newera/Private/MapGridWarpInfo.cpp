#include "MapGridWarpInfo.h"

FMapGridWarpInfo::FMapGridWarpInfo() {
    this->MapGridWarpType = EMapGridWarpType::NONE;
    this->cost = 0;
    this->bActive = false;
    this->CellInfoMovableUpdateType = ECellInfoMovableUpdateType::ALL;
}

