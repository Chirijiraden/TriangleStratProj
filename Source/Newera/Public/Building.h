#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "BuildingMaterials.h"
#include "FadeCurve.h"
#include "Building.generated.h"

class UPrimitiveComponent;
class AFadeStaticMeshActor;
class AInOutDoorManager;
class ALight;

UCLASS(Blueprintable)
class NEWERA_API ABuilding : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFadeStaticMeshActor*> fadeActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingMaterials roof;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingMaterials wall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInOutDoorManager* manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALight*> lights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InOutDoorSE;
    
public:
    ABuilding();
    UFUNCTION(BlueprintCallable)
    void SetAlpha(float timeRate);
    
    UFUNCTION(BlueprintCallable)
    void OutDoor(float InTime, const FFadeCurve& InRoofCurve, const FFadeCurve& InWallCurve);
    
private:
    UFUNCTION(BlueprintCallable)
    void onOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void onOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void InDoor(float InTime, const FFadeCurve& InRoofCurve, const FFadeCurve& InWallCurve);
    
};

