#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetBase.h"
#include "InitialTeamEquipment.h"
#include "NeweraDataAssetNewGame.generated.h"

UCLASS(Blueprintable)
class UNeweraDataAssetNewGame : public UNeweraDataAssetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInitialTeamEquipment> InitialEquipments;
    
public:
    UNeweraDataAssetNewGame();
};

