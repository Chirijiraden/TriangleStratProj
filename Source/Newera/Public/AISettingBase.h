#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AISettingBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UAISettingBase : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSetting;
    
public:
    UAISettingBase();
};

