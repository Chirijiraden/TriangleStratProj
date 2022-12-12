#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FlipbookConfigDataSetEffect.h"
#include "NeweraFlipbookConfigDataEffect.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UNeweraFlipbookConfigDataEffect : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlipbookConfigDataSetEffect Data;
    
public:
    UNeweraFlipbookConfigDataEffect();
};

