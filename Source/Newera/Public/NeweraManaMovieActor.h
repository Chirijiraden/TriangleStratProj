#pragma once
#include "CoreMinimal.h"
#include "EManaComponentStatus.h"
#include "GameFramework/Actor.h"
#include "NeweraManaMovieActor.generated.h"

class UManaComponent;

UCLASS(Blueprintable)
class NEWERA_API ANeweraManaMovieActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UManaComponent* ManaComponent;
    
public:
    ANeweraManaMovieActor();
private:
    UFUNCTION(BlueprintCallable)
    void onManaComponentStatusChanged(EManaComponentStatus InManaComponentStatus, UManaComponent* InManaComponent);
    
};

