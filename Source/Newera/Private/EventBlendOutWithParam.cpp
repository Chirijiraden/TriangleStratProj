#include "EventBlendOutWithParam.h"

void AEventBlendOutWithParam::SetTargetType(TEnumAsByte<EViewTargetBlendFunction> _blendFunction) {
}

AEventBlendOutWithParam::AEventBlendOutWithParam() {
    this->BlendExp = 0.00f;
    this->blendTime = 0.00f;
    this->bLockOutgoing = false;
    this->BlendFunction = VTBlend_Linear;
}

