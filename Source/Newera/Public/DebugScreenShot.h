#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DebugScreenShot.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ADebugScreenShot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    ADebugScreenShot();
    UFUNCTION(BlueprintCallable)
    void SetPositionZ(float Z);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionY(float Y);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionX(float X);
    
    UFUNCTION(BlueprintCallable)
    void SetOrthoWidth(float Width);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugMenuClose();
    
    UFUNCTION(BlueprintCallable)
    bool IsStandby();
    
    UFUNCTION(BlueprintCallable)
    float GetPositionZ();
    
    UFUNCTION(BlueprintCallable)
    float GetPositionY();
    
    UFUNCTION(BlueprintCallable)
    float GetPositionX();
    
    UFUNCTION(BlueprintCallable)
    float GetOrthoWidth();
    
    UFUNCTION(BlueprintCallable)
    FString GetGameSavedDir();
    
    UFUNCTION(BlueprintCallable)
    FString GetFileName();
    
    UFUNCTION(BlueprintCallable)
    float GetBaseOrthoWidth();
    
    UFUNCTION(BlueprintCallable)
    void ExportScreenShot();
    
    UFUNCTION(BlueprintCallable)
    void ChangeRotation();
    
};

