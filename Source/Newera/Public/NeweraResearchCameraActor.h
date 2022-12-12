#pragma once
#include "CoreMinimal.h"
#include "NeweraCameraActorControllable.h"
#include "NeweraResearchCameraActor.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraResearchCameraActor : public ANeweraCameraActorControllable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialCameraAngleElevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialCameraTargetLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialCameraOffset;
    
    ANeweraResearchCameraActor();
    UFUNCTION(BlueprintCallable)
    void SetCameraTargetLength(float CameraTargetLength);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraTargetLength() const;
    
};

