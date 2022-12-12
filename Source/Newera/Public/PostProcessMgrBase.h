#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PostProcessMgrBase.generated.h"

class AActor;
class APostProcessVolume;

UCLASS(Blueprintable)
class NEWERA_API UPostProcessMgrBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* postProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FocusActor;
    
public:
    UPostProcessMgrBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFocalLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDofDepthBlurRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDofDepthBlurAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDiaphragmBladeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCameraRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAperture() const;
    
};

