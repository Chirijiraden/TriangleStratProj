#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MapUnitDrawerInterface.h"
#include "MapCharacterControllInterface.h"
#include "UObject/NoExportTypes.h"
#include "NeweraMapGimmickObject.generated.h"

class UActorListComponent;
class ANeweraCharacterBase;

UCLASS(Blueprintable)
class NEWERA_API ANeweraMapGimmickObject : public AActor, public IMapCharacterControllInterface, public IMapUnitDrawerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> gridOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mapGimmickHeight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorListComponent* ActorListComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BattleCmd_Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleCmd_TextGopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleCmd_ActObjTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BattleCmd_ActObjArgment;
    
    ANeweraMapGimmickObject();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHpZeroBP(ANeweraCharacterBase* attacker);
    
    
    // Fix for true pure virtual functions not being implemented
};

