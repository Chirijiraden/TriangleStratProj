#include "DebugCellStaticMeshActor.h"
#include "Components/StaticMeshComponent.h"

ADebugCellStaticMeshActor::ADebugCellStaticMeshActor() {
    this->staticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->dynamicMaterial = NULL;
}

