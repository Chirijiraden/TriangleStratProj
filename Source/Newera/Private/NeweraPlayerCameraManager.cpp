#include "NeweraPlayerCameraManager.h"

class ANeweraCameraActor;

ANeweraCameraActor* ANeweraPlayerCameraManager::GetCurrentTraceCamera() const {
    return NULL;
}

ANeweraPlayerCameraManager::ANeweraPlayerCameraManager() {
    this->actorTraceCamera = NULL;
    this->actorTraceCameraSub = NULL;
    this->LuaCameraShake = NULL;
    this->strikeStickCheckerRight = NULL;
}

