#pragma once
#include "CoreMinimal.h"
#include "AISettingBase.h"
#include "UObject/NoExportTypes.h"
#include "AIRestrictAttackSetting.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UAIRestrictAttackSetting : public UAISettingBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> AttackableGrids;
    
public:
    UAIRestrictAttackSetting();
};

