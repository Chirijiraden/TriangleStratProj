#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/GameStateBase.h"
#include "NeweraGameStateBase.generated.h"

class AFrameGrabberActor;
class UForceFeedbackEffectMan;
class UMapTimeManager;
class UMapCellEffectManager;
class UMapActionObjectManager;
class UNeweraAreaSearchManager;
class ANeweraPlayerControllerBase;
class UNeweraFastForwardManager;
class UNeweraPostProcessMgr;
class UWeatherManager;

UCLASS(Blueprintable)
class NEWERA_API ANeweraGameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFrameGrabberActor> FrameGrabberActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNeweraPostProcessMgr* PostProcessManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapTimeManager* MapTimeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeatherManager* WeatherManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapCellEffectManager* MapCellEffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapActionObjectManager* MapActionObjectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffectMan* ForceFeedbackEffectMan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraFastForwardManager* NeweraFastForwardManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraAreaSearchManager* AreaSearchManager;
    
public:
    ANeweraGameStateBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnvironmentSkySphereEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnvironmentSkyLightEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnvironmentLightEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnvironmentDirectionalLightEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeatherManager* GetWeatherManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNeweraPostProcessMgr* GetPostProcessManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANeweraPlayerControllerBase* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapTimeManager* GetMapTimeManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapCellEffectManager* GetMapCellEffectManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMapActionObjectManager* GetMapActionObjectManager() const;
    
};

