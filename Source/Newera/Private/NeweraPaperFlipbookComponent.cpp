#include "NeweraPaperFlipbookComponent.h"

class UPaperFlipbook;

void UNeweraPaperFlipbookComponent::PlayNewFlipbook(UPaperFlipbook* NewFlipbook, bool bLoop, bool bReverse, int32 _ReservedStartFrame, float _ReservedPlayRate) {
}

UNeweraPaperFlipbookComponent::UNeweraPaperFlipbookComponent() {
    this->DefaultMaterial = NULL;
    this->GhostMaterial = NULL;
    this->SelectActionMaterial = NULL;
    this->StealthStateMaterial = NULL;
    this->UseType = EFlipbookUseType::NONE;
    this->MirroringType = EFlipbookMirroringType::NONE;
    this->MIDParamNameMirrorFlag = TEXT("MirrorFlag");
    this->bDummyShadow = false;
    this->CurrentMaterialInstanceDynamic = NULL;
    this->DefaultMaterialInstanceDynamic = NULL;
    this->GhostMaterialInstanceDynamic = NULL;
    this->SelectActionMaterialInstanceDynamic = NULL;
    this->StealthStateMaterialInstanceDynamic = NULL;
    this->InterpCameraFullViewModeTransitionT = NULL;
    this->ReservedFlipbook = NULL;
}

