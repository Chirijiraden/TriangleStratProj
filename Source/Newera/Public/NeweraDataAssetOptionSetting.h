#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetBase.h"
#include "ENeweraFastForwardSceneType.h"
#include "NeweraDataAssetOptionSetting.generated.h"

UCLASS(Blueprintable)
class UNeweraDataAssetOptionSetting : public UNeweraDataAssetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENeweraFastForwardSceneType, float> FastForwardRates;
    
public:
    UNeweraDataAssetOptionSetting();
};

