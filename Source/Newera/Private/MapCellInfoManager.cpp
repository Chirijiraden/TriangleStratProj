#include "MapCellInfoManager.h"

class UMapCellInfoManager;

UMapCellInfoManager* UMapCellInfoManager::GetInstance() {
    return NULL;
}

UMapCellInfoManager::UMapCellInfoManager() {
    this->CurrentTrajectoryDrawer = NULL;
    this->TimerForceRefreshDangerArea = NULL;
    this->GhostCharacter = NULL;
    this->PoolTrajectoryDrawerLine = NULL;
}

