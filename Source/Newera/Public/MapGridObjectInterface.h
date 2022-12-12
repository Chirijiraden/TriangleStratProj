#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ECellInfoMovableUpdateType.h"
#include "MapGridObjectInterface.generated.h"

UINTERFACE(Blueprintable)
class UMapGridObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IMapGridObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCellInfoMovable(bool bMovable, ECellInfoMovableUpdateType CellInfoMovableUpdateType);
    
};

