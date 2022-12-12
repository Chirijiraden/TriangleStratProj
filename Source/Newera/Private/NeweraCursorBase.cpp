#include "NeweraCursorBase.h"

ANeweraCursorBase::ANeweraCursorBase() {
    this->floatCursorMoveCurve = NULL;
    this->panelCursorOffset = 0.00f;
    this->floatCursorBaseZ = 0.00f;
    this->panelCursorBaseZ = 0.00f;
    this->cursorStickRate = 2.00f;
    this->floatCursor = NULL;
    this->panelCursor = NULL;
    this->mapMouseCursor = NULL;
}

