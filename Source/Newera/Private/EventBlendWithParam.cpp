#include "EventBlendWithParam.h"

void AEventBlendWithParam::SetBlendOutFunction(TEnumAsByte<EViewTargetBlendFunction> BlendFunction) {
}

void AEventBlendWithParam::SetBlendInFunction(TEnumAsByte<EViewTargetBlendFunction> BlendFunction) {
}

AEventBlendWithParam::AEventBlendWithParam() {
    this->blendInExp = 0.00f;
    this->BlendInTime = 0.00f;
    this->bLockInOutgoing = false;
    this->blendInFunction = VTBlend_Linear;
    this->blendOutExp = 0.00f;
    this->BlendOutTime = 0.00f;
    this->bLockOutOutgoing = false;
    this->blendOutFunction = VTBlend_Linear;
}

