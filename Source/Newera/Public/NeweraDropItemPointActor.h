#pragma once
#include "CoreMinimal.h"
#include "NeweraCommandCollisionActor.h"
#include "EScenarioAnchor.h"
#include "Engine/EngineTypes.h"
#include "DropItemIdAndCount.h"
#include "NeweraDropItemPointActor.generated.h"

class UPrimitiveComponent;
class AActor;
class UShapeComponent;

UCLASS(Blueprintable)
class ANeweraDropItemPointActor : public ANeweraCommandCollisionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DropItemRandomId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDropItemIdAndCount> DropItemIds;
    
    UPROPERTY(EditAnywhere)
    EScenarioAnchor OnMapScenarioAnchor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UShapeComponent* effectCollisionComponent;
    
public:
    ANeweraDropItemPointActor();
protected:
    UFUNCTION(BlueprintCallable)
    void OnEffetInOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEffectInOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

