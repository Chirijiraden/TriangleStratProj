#include "NeweraSaveGameManager.h"

class UObject;

bool UNeweraSaveGameManager::SaveGameData(const UObject* WorldContext, int32 DataIndex, bool gameClear) {
    return false;
}

bool UNeweraSaveGameManager::ResetSystemData(int32 DataIndex) {
    return false;
}

void UNeweraSaveGameManager::MakeInvertedSystemData(int32 DataIndex) {
}

void UNeweraSaveGameManager::MakeInvertedGameData(int32 DataIndex) {
}

void UNeweraSaveGameManager::MakeDifferentVersionSystemData(int32 DataIndex, int32 Version) {
}

void UNeweraSaveGameManager::MakeDifferentVersionGameData(int32 DataIndex, int32 Version) {
}

void UNeweraSaveGameManager::MakeCrackedGameData(int32 DataIndex, int32 randSeed) {
}

void UNeweraSaveGameManager::MakeBrokenGameData(int32 DataIndex, int32 randSeed) {
}

bool UNeweraSaveGameManager::LoadGameData(int32 DataIndex) {
    return false;
}

UNeweraSaveGameManager::UNeweraSaveGameManager() {
    this->SaveGame = NULL;
    this->SaveSystemData = NULL;
    this->memorySaveGame = NULL;
    this->swappedSaveSystemData = NULL;
}

