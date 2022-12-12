#include "NeweraGameStateDisplayFlipbook.h"

class ANeweraGameStateDisplayFlipbook;

void ANeweraGameStateDisplayFlipbook::ToggleFlags(EDisplayFlipbookFlag InFlags) {
}

void ANeweraGameStateDisplayFlipbook::RemoveFlags(EDisplayFlipbookFlag InFlags) {
}

void ANeweraGameStateDisplayFlipbook::RefreshCharacter() {
}

void ANeweraGameStateDisplayFlipbook::RefreshAdditionalUnit() {
}

bool ANeweraGameStateDisplayFlipbook::IsOn(EDisplayFlipbookFlag InFlags, bool bCheckAllFlags) const {
    return false;
}

ANeweraGameStateDisplayFlipbook* ANeweraGameStateDisplayFlipbook::GetInstance() {
    return NULL;
}

TMap<FString, FString> ANeweraGameStateDisplayFlipbook::GetAllWeaponIdMap() {
    return TMap<FString, FString>();
}

TMap<FString, ENeweraFlipbookOverrideType> ANeweraGameStateDisplayFlipbook::GetAllFlipbookOverrideTypeMap() {
    return TMap<FString, ENeweraFlipbookOverrideType>();
}

TArray<FText> ANeweraGameStateDisplayFlipbook::GetAllCharacterIdTexts() {
    return TArray<FText>();
}

TMap<FString, FName> ANeweraGameStateDisplayFlipbook::GetAllAttackIdMap() {
    return TMap<FString, FName>();
}

EDisplayFlipbookAdditionalUnitType ANeweraGameStateDisplayFlipbook::GetAdditionalUnitType() const {
    return EDisplayFlipbookAdditionalUnitType::SINGLE;
}

bool ANeweraGameStateDisplayFlipbook::ChangeWeaponSprite(const FString& InSpriteId) {
    return false;
}

bool ANeweraGameStateDisplayFlipbook::ChangePlayRate(float Value) {
    return false;
}

bool ANeweraGameStateDisplayFlipbook::ChangeFlipbookOverrideType(ENeweraFlipbookOverrideType InFlipbookOverrideType) {
    return false;
}

bool ANeweraGameStateDisplayFlipbook::ChangeDirection(EDirectionOnMap InDirection) {
    return false;
}

bool ANeweraGameStateDisplayFlipbook::ChangeCharacter(const FString& InCharacterId) {
    return false;
}

bool ANeweraGameStateDisplayFlipbook::ChangeAttackFlipbook(const FName& InFlipbookId) {
    return false;
}

bool ANeweraGameStateDisplayFlipbook::ChangeAnimType(EAnimationType InAnimationType) {
    return false;
}

void ANeweraGameStateDisplayFlipbook::ChangeAdditionalUnitType(EDisplayFlipbookAdditionalUnitType InDisplayFlipbookAdditionalUnitType) {
}

void ANeweraGameStateDisplayFlipbook::AddFlags(EDisplayFlipbookFlag InFlags) {
}

ANeweraGameStateDisplayFlipbook::ANeweraGameStateDisplayFlipbook() {
    this->RootWidget = NULL;
    this->Character = NULL;
}

