#pragma once
#include "CoreMinimal.h"
#include "NeweraGameStateBase.h"
#include "NeweraGameStateWorldMap.generated.h"

class UWorldMapManager;

UCLASS(Blueprintable)
class NEWERA_API ANeweraGameStateWorldMap : public ANeweraGameStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWorldMapManager> WorldMapManagerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapManager* WorldMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RequestStartWorldMap;
    
public:
    ANeweraGameStateWorldMap();
};

