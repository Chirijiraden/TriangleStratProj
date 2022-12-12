#include "StaffRollClearRouteDataTable.h"

FStaffRollClearRouteDataTable::FStaffRollClearRouteDataTable() {
    this->bUnuse = false;
    this->bOverWriteParams = false;
    this->ScrollTime = 0.00f;
    this->StartTimeGap = 0.00f;
    this->EndTimeGap = 0.00f;
    this->bUseEndTime = false;
    this->EndTime = 0.00f;
    this->BGMStartTime = 0.00f;
}

