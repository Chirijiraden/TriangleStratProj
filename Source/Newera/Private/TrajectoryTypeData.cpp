#include "TrajectoryTypeData.h"

FTrajectoryTypeData::FTrajectoryTypeData() {
    this->HeightAdjustStartPoint = 0.00f;
    this->HeightAdjustEndPoint = 0.00f;
    this->EffectSpawnSpanSec = 0.00f;
    this->EffectSpeed = 0.00f;
    this->RemainSecAfterLand = 0.00f;
    this->TranslucencySortPriority = 0;
    this->TrajectoryOrbitBlockType = ETrajectoryOrbitBlockType::ATTACK;
}

