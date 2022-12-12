#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "NeweraCharacterModifierComponent.generated.h"

class UMatineeCameraShake;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UNeweraCharacterModifierComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* Shake;
    
public:
    UNeweraCharacterModifierComponent();
};

