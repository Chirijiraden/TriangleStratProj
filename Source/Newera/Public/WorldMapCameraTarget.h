#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldMapCameraTarget.generated.h"

class UInterpFloat;
class UCurveFloat;

UCLASS(Blueprintable)
class AWorldMapCameraTarget : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* InterpLocationT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* InterpCurve;
    
public:
    AWorldMapCameraTarget();
};

