#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETerritoryType.h"
#include "EVENTWORLDMAPMOVIE.generated.h"

class UWorldMapWidgetNarrationMovie;

UCLASS(Blueprintable)
class AEVENTWORLDMAPMOVIE : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetNarrationMovie* CurrentWidgetMovie;
    
public:
    AEVENTWORLDMAPMOVIE();
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void PlayFlagChange(ETerritoryType PreTerritoryType, ETerritoryType PostTerritoryType);
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void ForceStop();
    
};

