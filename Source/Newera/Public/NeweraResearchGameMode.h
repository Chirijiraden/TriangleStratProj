#pragma once
#include "CoreMinimal.h"
#include "NeweraGameModeBase.h"
#include "NeweraResearchGameMode.generated.h"

class UNeweraDataAssetResearch;

UCLASS(Blueprintable, NonTransient)
class NEWERA_API ANeweraResearchGameMode : public ANeweraGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNeweraDataAssetResearch> StaticDataResearchAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetResearch* StaticDataResearch;
    
public:
    ANeweraResearchGameMode();
};

