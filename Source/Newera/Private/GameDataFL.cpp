#include "GameDataFL.h"

void UGameDataFL::SetPartyTeam(const FName UnitMasterGopId, EPartyTeam partyTeam) {
}

void UGameDataFL::SetMissionCount(const FName& UnitDataMasterId, int32 Count) {
}

void UGameDataFL::SetFaithParam(EFaithType Type, int32 NewValue) {
}

void UGameDataFL::SaveFaithPointDataToCSV() {
}

bool UGameDataFL::IsPartyMember(const FName UnitMasterGopId) {
    return false;
}

EPartyTeam UGameDataFL::GetPartyTeam(const FName UnitMasterGopId) {
    return EPartyTeam::Unknown;
}

int32 UGameDataFL::GetMissionCount(const FName& UnitMasterGopId) {
    return 0;
}

EGameMode UGameDataFL::GetGameMode() {
    return EGameMode::INVALID;
}

int32 UGameDataFL::GetFaithParam(EFaithType Type) {
    return 0;
}

bool UGameDataFL::DebugCanGetImmortalPlume() {
    return false;
}

UGameDataFL::UGameDataFL() {
}

