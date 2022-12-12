#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "NeweraCameraActor.generated.h"

class AInOutDoorManager;
class ANeweraPlayerCameraManager;
class UNeweraStandbyCameraComponent;
class USpringArmComponent;

UCLASS(Blueprintable)
class NEWERA_API ANeweraCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* cameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNeweraStandbyCameraComponent* standbyCameraComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInOutDoorManager* InOutDoorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANeweraPlayerCameraManager* PlayerCameraManager;
    
public:
    ANeweraCameraActor();
};

