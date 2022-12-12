#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterpSkyLight.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AInterpSkyLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    AInterpSkyLight();
    UFUNCTION(BlueprintCallable)
    void EndInterp();
    
    UFUNCTION(BlueprintCallable)
    void BeginInterp();
    
};

