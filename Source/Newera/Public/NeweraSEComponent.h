#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NeweraSEComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NEWERA_API UNeweraSEComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SEGopIds;
    
public:
    UNeweraSEComponent();
    UFUNCTION(BlueprintCallable)
    void StopSE();
    
    UFUNCTION(BlueprintCallable)
    void StartSE();
    
};

