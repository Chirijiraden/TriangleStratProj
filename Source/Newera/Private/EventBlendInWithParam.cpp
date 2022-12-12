#include "EventBlendInWithParam.h"

void AEventBlendInWithParam::SetTargetType(TEnumAsByte<EViewTargetBlendFunction> _blendFunction) {
}

AEventBlendInWithParam::AEventBlendInWithParam() {
    this->BlendExp = 0.00f;
    this->blendTime = 0.00f;
    this->bLockOutgoing = false;
    this->BlendFunction = VTBlend_Linear;
}

