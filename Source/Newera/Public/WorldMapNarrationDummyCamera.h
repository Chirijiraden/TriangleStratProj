#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "UObject/NoExportTypes.h"
#include "ECameraMode.h"
#include "UObject/NoExportTypes.h"
#include "WorldMapNarrationDummyCamera.generated.h"

class UInterpFloat;

UCLASS(Blueprintable)
class AWorldMapNarrationDummyCamera : public ACineCameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpT;
    
public:
    AWorldMapNarrationDummyCamera();
    UFUNCTION(BlueprintCallable)
    void ReserveCameraPosition(FVector LocationOnEnd, FRotator RotationOnEnd, float FOVOnEnd);
    
    UFUNCTION(BlueprintCallable)
    void ReserveCameraModeCommon();
    
    UFUNCTION(BlueprintCallable)
    void ReserveCameraMode(ECameraMode CameraModeDefault, const FVector& LocationOnEnd, const FRotator& RotationOnEnd);
    
};

