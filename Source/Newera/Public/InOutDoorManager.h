#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InOutDoorFadeCurve.h"
#include "InOutDoorManager.generated.h"

class ABuilding;

UCLASS(Blueprintable)
class NEWERA_API AInOutDoorManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuilding* InDoorBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InDoorCharacterScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InDoorCharacterSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InDoorMainLightDarkValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InDoorSubLightDarkValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInOutDoorFadeCurve RoofInvisibleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInOutDoorFadeCurve WallInvisibleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInOutDoorFadeCurve CharacterScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInOutDoorFadeCurve DarkCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DEBUG_StopInFading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitFrameAfterInOutEnd;
    
public:
    AInOutDoorManager();
    UFUNCTION(BlueprintCallable)
    void OutDoor(bool bImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDoor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFading() const;
    
    UFUNCTION(BlueprintCallable)
    void InDoor(ABuilding* InBuilding, bool bImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSubLightDarkValue(float org) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMainLightDarkValue(float org) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDarkWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCharacterSpeedRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCharacterScale() const;
    
};

