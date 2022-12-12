#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldMapOrderedInitializationInterface.h"
#include "ETerritoryType.h"
#include "WorldMapLand.generated.h"

class UTexture;

UCLASS(Blueprintable)
class AWorldMapLand : public AActor, public IWorldMapOrderedInitializationInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* TextureLineBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* TextureAreaBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* TextureLineAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* TextureAreaAfter;
    
public:
    AWorldMapLand();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TransitionTerritoryEmblem(ETerritoryType OriginalType, ETerritoryType OverrideType, float DurationSec);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Resume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishChangeTerritory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetCurrentTextureBefore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetCurrentTextureAfter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeTerritoryBP(float Sec);
    
    
    // Fix for true pure virtual functions not being implemented
};

