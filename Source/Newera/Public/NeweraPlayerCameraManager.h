#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "NeweraPlayerCameraManager.generated.h"

class UMatineeCameraShake;
class ANeweraCameraActor;
class UNeweraCameraModeReceiverInterface;
class INeweraCameraModeReceiverInterface;
class ANeweraStageCameraActor;
class UStrikeStickChecker;

UCLASS(Blueprintable, NonTransient)
class NEWERA_API ANeweraPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANeweraCameraActor> CameraActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANeweraCameraActor> SubCameraActorClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANeweraCameraActor* actorTraceCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANeweraCameraActor* actorTraceCameraSub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<INeweraCameraModeReceiverInterface>> ModeReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ANeweraStageCameraActor*> stageCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatineeCameraShake* LuaCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStrikeStickChecker* strikeStickCheckerRight;
    
public:
    ANeweraPlayerCameraManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANeweraCameraActor* GetCurrentTraceCamera() const;
    
};

