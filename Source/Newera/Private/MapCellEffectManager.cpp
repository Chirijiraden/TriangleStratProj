#include "MapCellEffectManager.h"

class AActor;

bool UMapCellEffectManager::StartFire(AActor* Actor) {
    return false;
}

AActor* UMapCellEffectManager::RepraceBurnableObject(AActor* ThisObject, const FRotator& Rotator, bool isBuring) {
    return NULL;
}

bool UMapCellEffectManager::IsBurning(AActor* Actor) {
    return false;
}

bool UMapCellEffectManager::IsBurnable(AActor* Actor) {
    return false;
}

void UMapCellEffectManager::DestroyGimmickBurnableObject(AActor* ThisObject, bool changeFlagOnly) {
}

void UMapCellEffectManager::DestroyBurnableObject(AActor* ThisObject) {
}

UMapCellEffectManager::UMapCellEffectManager() {
    this->WorldContext = NULL;
}

