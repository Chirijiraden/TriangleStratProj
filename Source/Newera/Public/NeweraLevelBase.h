#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "NeweraLevelBase.generated.h"

class ULevelWhiteBoxAsset;

UCLASS(Blueprintable)
class NEWERA_API ANeweraLevelBase : public ALevelScriptActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LuaScriptName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CreateMapDataAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GameProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TestLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelWhiteBoxAsset* LevelWhiteBoxAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool unloadSublevel;
    
    ANeweraLevelBase();
};

