#include "MapFL.h"

class UObject;

void UMapFL::SwitchDisplayGridEdge(bool bEnable) {
}

void UMapFL::SetMapGridLandHeight(const FIntVector& MapGrid, int32 Height) {
}

void UMapFL::SetMapGridHeightObject(const FIntVector& MapGrid, int32 Height) {
}

void UMapFL::SetBlockDirOnMapGrids(const TArray<FBlockDirectionInfo>& blockInformations) {
}

void UMapFL::DispParmanentVictoryAreaPanel(const FName& EventId) {
}

void UMapFL::DispEventAreaPanel(const FName& EventId) {
}

void UMapFL::DispEvent2AreaPanel(const FName& EventId) {
}

void UMapFL::ClearParmanentVictoryAreaPanel() {
}

void UMapFL::ClearEventAreaPanel() {
}

void UMapFL::ClearEvent2AreaPanel() {
}

void UMapFL::ClearBlockDirOnMapGrids(const TArray<FBlockDirectionInfo>& blockInformations) {
}

bool UMapFL::CheckBlockDirOnMapGrids(const TArray<FIntVector>& mapGridCoordinates) {
    return false;
}

FIntVector UMapFL::CalculateMapCoorinateByGlobalPoint(const UObject* WorldContextObject, const FVector& Location) {
    return FIntVector{};
}

UMapFL::UMapFL() {
}

