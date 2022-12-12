#include "StaffRollMisc.h"

FStaffRollMisc::FStaffRollMisc() {
    this->ScrollTime = 0.00f;
    this->SkipEndWaitTime = 0.00f;
    this->DefaultBlankSpaceHeight = 0.00f;
    this->DefaultLineHeight = 0.00f;
    this->DefaultInTime = 0.00f;
    this->DefaultOutTime = 0.00f;
    this->bUseStartPosition = false;
    this->StartTimeGap = 0.00f;
    this->EndTimeGap = 0.00f;
    this->bUseEndTime = false;
    this->EndTime = 0.00f;
    this->bUseBGM = false;
    this->BGMStartTime = 0.00f;
    this->bUseClearRoute = false;
    this->bNeedStopTitleMovie = false;
    this->bUseFade = false;
    this->bForceNewlineStaffName = false;
    this->PlaySpeedInputDelta = 0.00f;
    this->MaxPlaySpeed = 0.00f;
}

