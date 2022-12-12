#include "InOutDoorManager.h"

class ABuilding;

void AInOutDoorManager::OutDoor(bool bImmediate) {
}

bool AInOutDoorManager::IsInDoor() const {
    return false;
}

bool AInOutDoorManager::IsFading() const {
    return false;
}

void AInOutDoorManager::InDoor(ABuilding* InBuilding, bool bImmediate) {
}

float AInOutDoorManager::GetSubLightDarkValue(float org) const {
    return 0.0f;
}

float AInOutDoorManager::GetMainLightDarkValue(float org) const {
    return 0.0f;
}

float AInOutDoorManager::GetDarkWeight() const {
    return 0.0f;
}

float AInOutDoorManager::GetCharacterSpeedRate() const {
    return 0.0f;
}

float AInOutDoorManager::GetCharacterScale() const {
    return 0.0f;
}

AInOutDoorManager::AInOutDoorManager() {
    this->InDoorBuilding = NULL;
    this->BlendInTime = 0.20f;
    this->BlendOutTime = 0.20f;
    this->InDoorCharacterScale = 0.50f;
    this->InDoorCharacterSpeedRate = 0.50f;
    this->InDoorMainLightDarkValue = 0.10f;
    this->InDoorSubLightDarkValue = 0.10f;
    this->DEBUG_StopInFading = true;
    this->WaitFrameAfterInOutEnd = 2;
}

