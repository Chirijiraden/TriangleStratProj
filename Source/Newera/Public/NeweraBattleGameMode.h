#pragma once
#include "CoreMinimal.h"
#include "NeweraGameModeBase.h"
#include "NeweraBattleGameMode.generated.h"

class UNeweraDataAssetBattle;

UCLASS(Blueprintable, NonTransient)
class NEWERA_API ANeweraBattleGameMode : public ANeweraGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNeweraDataAssetBattle> StaticDataBattleAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraDataAssetBattle* StaticDataBattle;
    
public:
    ANeweraBattleGameMode();
};

