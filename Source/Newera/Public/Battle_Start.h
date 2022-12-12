#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Battle_Start.generated.h"

class UWidgetNeweraBattleMoviePlayer;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UBattle_Start : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWidgetNeweraBattleMoviePlayer> WidgetClassNeweraMoviePlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetNeweraBattleMoviePlayer* CurrentWidgetMovie;
    
public:
    UBattle_Start();
};

