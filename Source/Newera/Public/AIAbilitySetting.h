#pragma once
#include "CoreMinimal.h"
#include "AISettingBase.h"
#include "AbilitySetting.h"
#include "AIAbilitySetting.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UAIAbilitySetting : public UAISettingBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilitySetting> AbilitySettings;
    
public:
    UAIAbilitySetting();
};

