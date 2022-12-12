#include "InterpFloat.h"

void UInterpFloat::StartTransition(float NewTargetValue, float NewDurationSec) {
}

void UInterpFloat::SetCurrentValue(float NewCurrentValue) {
}

bool UInterpFloat::IsOnTransition() const {
    return false;
}

float UInterpFloat::GetCurrentValue() const {
    return 0.0f;
}

void UInterpFloat::Clamp(float NewClampValueMin, float NewClampValueMax) {
}

void UInterpFloat::CancelTransition(bool bCallDelegate) {
}

UInterpFloat::UInterpFloat() {
}

