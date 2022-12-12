#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeweraHandyManMoviePlayer.generated.h"

class UHandyMan_ClassUp_Effect_Movie;

UCLASS(Blueprintable)
class NEWERA_API ANeweraHandyManMoviePlayer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHandyMan_ClassUp_Effect_Movie> WidgetClassHandyManClassUpEffectMovie;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHandyMan_ClassUp_Effect_Movie* CurrentWidgetMovie;
    
public:
    ANeweraHandyManMoviePlayer();
};

