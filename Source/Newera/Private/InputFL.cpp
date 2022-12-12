#include "InputFL.h"

bool UInputFL::IsOnFastForward() {
    return false;
}

bool UInputFL::IsOnEventSkip() {
    return false;
}

bool UInputFL::IsEnableInputEventSkip() {
    return false;
}

bool UInputFL::IsAnyDirectionalKey(ENeweraInputMode inputMode) {
    return false;
}

float UInputFL::GetLeftStickTilt(ENeweraInputMode inputMode) {
    return 0.0f;
}

UInputFL::UInputFL() {
}

