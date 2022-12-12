#pragma once
#include "CoreMinimal.h"
#include "WorldMapPlacedObjectBase.h"
#include "WorldMapPlacedObjectC1City000.generated.h"

UCLASS(Blueprintable)
class AWorldMapPlacedObjectC1City000 : public AWorldMapPlacedObjectBase {
    GENERATED_BODY()
public:
    AWorldMapPlacedObjectC1City000();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetToDefaultState_ImplementationBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyStatueImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyStatueImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyStatue_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyStatue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroySouthWallImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroySouthWallImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroySouthWall_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroySouthWall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyHarborImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyHarborImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyHarbor_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyHarbor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AppearSaltPillarImmediately_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void AppearSaltPillarImmediately();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AppearSaltPillar_ImplementationBP();
    
    UFUNCTION(BlueprintCallable)
    void AppearSaltPillar();
    
};

