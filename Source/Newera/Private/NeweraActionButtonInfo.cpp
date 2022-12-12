#include "NeweraActionButtonInfo.h"

FNeweraActionButtonInfo::FNeweraActionButtonInfo() {
    this->developmentOnly = false;
    this->ACTION = ENeweraGameButton::Up;
    this->opCode = ENeweraButtonOp::None;
    this->pushSec = 0.00f;
}

