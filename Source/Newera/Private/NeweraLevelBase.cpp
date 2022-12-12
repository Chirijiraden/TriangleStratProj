#include "NeweraLevelBase.h"

ANeweraLevelBase::ANeweraLevelBase() {
    this->CreateMapDataAtRuntime = true;
    this->GameProgress = false;
    this->TestLevel = false;
    this->LevelWhiteBoxAsset = NULL;
    this->unloadSublevel = false;
}

