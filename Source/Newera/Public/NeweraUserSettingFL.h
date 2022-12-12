#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraUserSettingFL.generated.h"

UCLASS(Blueprintable)
class UNeweraUserSettingFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraUserSettingFL();
    UFUNCTION(BlueprintCallable)
    static void SetVSyncEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewDistanceQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadingQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetScreenResolutionY(int32 ResY);
    
    UFUNCTION(BlueprintCallable)
    static void SetScreenResolutionX(int32 ResX);
    
    UFUNCTION(BlueprintCallable)
    static void SetScreenResolution(int32 ResX, int32 ResY);
    
    UFUNCTION(BlueprintCallable)
    static void SetScreenMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetRenderingResolutionQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetPostProcessingQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetFrameRateLimit(int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    static void SetFoliageQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetEffectQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static void SetAntiAliasingQuality(int32 quality);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVSyncEnabled();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetViewDistanceQuality();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTextureQuality();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShadowQuality();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShadingQuality();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetScreenResolutionY();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetScreenResolutionX();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetScreenMode();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRenderingResolutionQuality();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPostProcessingQuality();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFrameRateLimit();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFoliageQuality();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetEffectQuality();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetAntiAliasingQuality();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyUserSettings();
    
};

