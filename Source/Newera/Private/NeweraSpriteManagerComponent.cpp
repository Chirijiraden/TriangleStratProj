#include "NeweraSpriteManagerComponent.h"

void UNeweraSpriteManagerComponent::onFinishedPlaying() {
}

UNeweraSpriteManagerComponent::UNeweraSpriteManagerComponent() {
    this->bAlwaysHorse = false;
    this->SpriteReplaceDestString = TEXT("000");
    this->SpriteRootComponent = NULL;
    this->LightForHandLamp = NULL;
    this->InterpRotT = NULL;
    this->CurveFloatOffsetYByCameraAngle = NULL;
}

