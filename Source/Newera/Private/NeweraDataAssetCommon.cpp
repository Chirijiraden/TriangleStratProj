#include "NeweraDataAssetCommon.h"

UNeweraDataAssetCommon::UNeweraDataAssetCommon() {
    this->bHideRoutePointMeshByHeight = false;
    this->CellInfoHeightOffset = 0.00f;
    this->CellInfoPositionOffsetRoutePointMesh = 0.00f;
    this->FlipbookLocationGap = 0.00f;
    this->FlipbookLocationGapForOtherUnit = 0.00f;
    this->FlipbookOffsetPowerToScreenCenterByCameraAngle = 0.00f;
    this->FlipbookOffsetToCenterByCameraAngle = 0.00f;
    this->FlipbookOffsetOnFullViewMode = 0.00f;
    this->FlipbookOffsetOnFullViewModeTransitionSec = 0.00f;
    this->FlyingUnitMoveAdditionalHeightByGrid = 0;
    this->FlyingUnitUpDownSpeed = 0.00f;
    this->JumpMoveThresholdHeightGap = 0;
    this->LadderPreMoveSec = 0.00f;
    this->LadderPostMoveSec = 0.00f;
    this->LadderMoveSpeedByGridPerSec = 0.00f;
    this->LadderMoveOffsetToLadderByGrid = 0.00f;
    this->LadderMoveAnimationEndPointOnUp = 0.00f;
    this->LadderMoveAnimationStartPointOnDown = 0.00f;
    this->MoveCostStandard = 0;
    this->TrolleyMoveJumpAdditionalHeightByGrid = 0.00f;
    this->UnitMoveSpeedPerSecTrolley = 0.00f;
    this->UnitActorPivotPositionFromCellTop = 0.00f;
    this->UnitActorData = NULL;
    this->WeatherDurationSecForFadeOutSoundOnImmediatelyChange = 0.00f;
    this->GopBattlePanelDataTable = NULL;
}

