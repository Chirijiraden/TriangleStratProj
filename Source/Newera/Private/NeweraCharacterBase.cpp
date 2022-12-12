#include "NeweraCharacterBase.h"
#include "Components/SceneComponent.h"
#include "ActorListComponent.h"
#include "NeweraActionComponent.h"
#include "NeweraCharacterModifierComponent.h"
#include "NeweraBillboardComponent.h"
#include "NeweraFlipbookNotifyComponent.h"
#include "NeweraJumpMoveComponent.h"
#include "NeweraGridMoveComponent.h"
#include "NeweraSpriteManagerComponent.h"

void ANeweraCharacterBase::StartRotationYawBP(const FRotator& TargetRotator, float DurationSec) {
}

void ANeweraCharacterBase::SetRimRightParam(float fExp, FLinearColor Color) {
}



UNeweraActionComponent* ANeweraCharacterBase::GetActionComponent() const {
    return NULL;
}

void ANeweraCharacterBase::ChangeVisibility(bool Enable) {
}

ANeweraCharacterBase::ANeweraCharacterBase() {
    this->characterDirection = NULL;
    this->actionComponent = CreateDefaultSubobject<UNeweraActionComponent>(TEXT("actionComponent"));
    this->ActorListComponent = CreateDefaultSubobject<UActorListComponent>(TEXT("ActorListComponent"));
    this->gridMoveComponent = CreateDefaultSubobject<UNeweraGridMoveComponent>(TEXT("gridMoveComponent"));
    this->jumpMoveComponent = CreateDefaultSubobject<UNeweraJumpMoveComponent>(TEXT("jumpMoveComponent"));
    this->BillboardComponent = CreateDefaultSubobject<UNeweraBillboardComponent>(TEXT("BillboardComponent"));
    this->spriteManagerComponent = CreateDefaultSubobject<UNeweraSpriteManagerComponent>(TEXT("spriteManagerComponent"));
    this->flipbookNotifyComponent = CreateDefaultSubobject<UNeweraFlipbookNotifyComponent>(TEXT("flipbookNotifyComponent"));
    this->characterModifierComponent = CreateDefaultSubobject<UNeweraCharacterModifierComponent>(TEXT("characterModifierComponent"));
    this->secondRotationScene = CreateDefaultSubobject<USceneComponent>(TEXT("SecondeRotationScene"));
    this->CircleShadowPositionComponent = NULL;
    this->DecalComponentCircleShadow = NULL;
    this->DecalComponentCircleShadowHorse = NULL;
    this->circleShadowMaterialInstanceDynamic = NULL;
    this->circleShadowHorseMaterialInstanceDynamic = NULL;
    this->circleShadowOpacityByCameraAngleCurve = NULL;
    this->InOutDoorManager = NULL;
    this->interpOpacity = NULL;
    this->rimRightCollection = NULL;
    this->Fresnel_Exp_Friendly = 0.00f;
    this->Fresnel_Exp_Guest = 0.00f;
    this->Fresnel_Exp_Neutral = 0.00f;
    this->Fresnel_Exp_Enemy = 0.00f;
    this->InterpRotationT = NULL;
}

