#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EWeatherType.h"
#include "EWindType.h"
#include "WeatherManager.generated.h"

class UThunder;
class UWeather;
class UWorld;

UCLASS(Blueprintable)
class NEWERA_API UWeatherManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeather* WeatherMaterialParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UThunder* ThunderMaterialParams;
    
    UWeatherManager();
    UFUNCTION(BlueprintCallable)
    void SetWindPower(float WindPower);
    
    UFUNCTION(BlueprintCallable)
    void SetWindDirection(const FVector& windDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugWindPower(int32 WindPower);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugWindDirectionY(float Y);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugWindDirectionX(float X);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugThunderStorm();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSunnyAndSnowStick();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSunnyAndPuddle();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSunny();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSnow();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugLightRain();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugHeavyRain();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCloudyeAndPuddle();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCloudyAndSnowStick();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugCloudy();
    
    UFUNCTION(BlueprintCallable)
    void SetBattleWeatherControll(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWindType GetWindType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWindPower() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetWindDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeatherType GetWeatherType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnable() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetDebugWindPower();
    
    UFUNCTION(BlueprintCallable)
    float GetDebugWindDirectionY();
    
    UFUNCTION(BlueprintCallable)
    float GetDebugWindDirectionX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleWeatherControll() const;
    
    UFUNCTION(BlueprintCallable)
    void BattleWindSimurate();
    
    UFUNCTION(BlueprintCallable)
    void BattleWeatherSimurate();
    
};

