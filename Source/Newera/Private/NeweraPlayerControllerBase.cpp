#include "NeweraPlayerControllerBase.h"

void ANeweraPlayerControllerBase::SetActionInputMode(ENeweraInputMode inputMode) {
}

void ANeweraPlayerControllerBase::ResetActionInput() {
}

bool ANeweraPlayerControllerBase::IsActionTriggerRepeat(ENeweraInputMode inputMode, ENeweraGameButton ACTION) const {
    return false;
}

bool ANeweraPlayerControllerBase::IsActionTrigger(ENeweraInputMode inputMode, ENeweraGameButton ACTION) const {
    return false;
}

bool ANeweraPlayerControllerBase::IsActionRelease(ENeweraInputMode inputMode, ENeweraGameButton ACTION) const {
    return false;
}

bool ANeweraPlayerControllerBase::IsActionOn(ENeweraInputMode inputMode, ENeweraGameButton ACTION) const {
    return false;
}

FVector2D ANeweraPlayerControllerBase::GetAnalogStickR(ENeweraInputMode inputMode) const {
    return FVector2D{};
}

FVector2D ANeweraPlayerControllerBase::GetAnalogStickL(ENeweraInputMode inputMode) const {
    return FVector2D{};
}

ENeweraInputMode ANeweraPlayerControllerBase::GetActionInputMode() const {
    return ENeweraInputMode::GameUI;
}

void ANeweraPlayerControllerBase::ClearActionInput() {
}

ANeweraPlayerControllerBase::ANeweraPlayerControllerBase() {
    this->gamePlayerInput = NULL;
    this->actionInputMan = NULL;
}

