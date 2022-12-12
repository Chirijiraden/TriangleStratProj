#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECellInfoMeshType.h"
#include "ECellInfoMoveRouteAdvanceDispFlag.h"
#include "CellInfoMeshArray.h"
#include "MapCellInfo.generated.h"

class AStaticMeshActor;

UCLASS(Blueprintable)
class UMapCellInfo : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    TMap<ECellInfoMeshType, FCellInfoMeshArray> MeshMap;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<ECellInfoMoveRouteAdvanceDispFlag, AStaticMeshActor*> MeshMapForMoveRouteSub;
    
public:
    UMapCellInfo();
};

