#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeweraBattleMoviePlayer.generated.h"

class UWidgetNeweraBattleMoviePlayer;

UCLASS(Blueprintable)
class NEWERA_API ANeweraBattleMoviePlayer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWidgetNeweraBattleMoviePlayer> WidgetClassBattleMoviePlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetNeweraBattleMoviePlayer* CurrentWidgetMovie;
    
public:
    ANeweraBattleMoviePlayer();
};

