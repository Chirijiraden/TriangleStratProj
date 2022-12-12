#pragma once
#include "CoreMinimal.h"
#include "CharacterComponentBase.h"
#include "EFlipbookUseType.h"
#include "AnimationConfigDataSet.h"
#include "NeweraFlipbookNotifyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNeweraFlipbookNotifyComponent : public UCharacterComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFlipbookUseType, FAnimationConfigDataSet> ConfigDatas;
    
public:
    UNeweraFlipbookNotifyComponent();
};

