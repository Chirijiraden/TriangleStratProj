#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "MapCellEffectManager.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class NEWERA_API UMapCellEffectManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldContext;
    
    UMapCellEffectManager();
    UFUNCTION(BlueprintCallable)
    bool StartFire(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    AActor* RepraceBurnableObject(AActor* ThisObject, const FRotator& Rotator, bool isBuring);
    
    UFUNCTION(BlueprintCallable)
    bool IsBurning(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool IsBurnable(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void DestroyGimmickBurnableObject(AActor* ThisObject, bool changeFlagOnly);
    
    UFUNCTION(BlueprintCallable)
    void DestroyBurnableObject(AActor* ThisObject);
    
};

