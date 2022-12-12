#include "DebugCellMan.h"

void ADebugCellMan::SetDebugCellValidation(bool Enable) {
}

bool ADebugCellMan::IsValidDebugCell() const {
    return false;
}

ADebugCellMan::ADebugCellMan() {
    this->cellGridOffsetZ = 0.00f;
    this->debugCellMesh = NULL;
}

