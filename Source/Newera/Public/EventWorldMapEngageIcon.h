#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EventWorldMapEngageIcon.generated.h"

class AWorldMapNarrationEngageIcon;

UCLASS(Blueprintable)
class AEventWorldMapEngageIcon : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldMapNarrationEngageIcon* EngageIcon;
    
public:
    AEventWorldMapEngageIcon();
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void End();
    
};

