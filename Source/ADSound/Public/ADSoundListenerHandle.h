#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ADSoundListenerHandle.generated.h"

class AActor;
class UADSoundListenerBase;

UCLASS(Blueprintable)
class ADSOUND_API UADSoundListenerHandle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundListenerBase* Listener;
    
public:
    UADSoundListenerHandle();
    UFUNCTION(BlueprintCallable)
    void UseCameraRotation(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldTransform(const FTransform& NewTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldRotation(const FQuat& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldLocation(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetVelocity(const FVector& NewVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetRelativeTransform(const FTransform& NewTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetRelativeRotation(const FQuat& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetRelativeLocation(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetOwner(const AActor* NewOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetWorldTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetWorldRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRelativeTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQuat GetRelativeRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRelativeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAutoUpdateVelocity(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldTransform(const FTransform& AddTransform);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldRotation(const FQuat& AddRotation);
    
    UFUNCTION(BlueprintCallable)
    void AddWorldLocation(const FVector& AddLocation);
    
    UFUNCTION(BlueprintCallable)
    void AddRelativeTransform(const FTransform& AddTransform);
    
    UFUNCTION(BlueprintCallable)
    void AddRelativeRotation(const FQuat& AddRotation);
    
    UFUNCTION(BlueprintCallable)
    void AddRelativeLocation(const FVector& AddLocation);
    
};

