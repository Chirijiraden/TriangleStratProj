#pragma once
#include "CoreMinimal.h"
#include "NeweraFloatUIBase.h"
#include "Battle_HPGauge_S.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UBattle_HPGauge_S : public UNeweraFloatUIBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    UMaterialInstanceDynamic* TpListMaterial[5];
    
public:
    UBattle_HPGauge_S();
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

