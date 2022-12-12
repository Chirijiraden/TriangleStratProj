#include "Building.h"

class UPrimitiveComponent;
class AActor;

void ABuilding::SetAlpha(float timeRate) {
}

void ABuilding::OutDoor(float InTime, const FFadeCurve& InRoofCurve, const FFadeCurve& InWallCurve) {
}

void ABuilding::onOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABuilding::onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABuilding::InDoor(float InTime, const FFadeCurve& InRoofCurve, const FFadeCurve& InWallCurve) {
}

ABuilding::ABuilding() {
    this->manager = NULL;
    this->collision = NULL;
    this->InOutDoorSE = TEXT("SE_MAP_DOOR_OPEN");
}

