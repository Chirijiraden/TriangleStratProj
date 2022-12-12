#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NeweraSaveGameManager.generated.h"

class USaveGameData;
class USaveSystemData;

UCLASS(Blueprintable)
class NEWERA_API UNeweraSaveGameManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveGameData* SaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveSystemData* SaveSystemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveGameData* memorySaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveSystemData* swappedSaveSystemData;
    
public:
    UNeweraSaveGameManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool SaveGameData(const UObject* WorldContext, int32 DataIndex, bool gameClear);
    
    UFUNCTION(BlueprintCallable)
    bool ResetSystemData(int32 DataIndex);
    
    UFUNCTION(BlueprintCallable)
    void MakeInvertedSystemData(int32 DataIndex);
    
    UFUNCTION(BlueprintCallable)
    void MakeInvertedGameData(int32 DataIndex);
    
    UFUNCTION(BlueprintCallable)
    void MakeDifferentVersionSystemData(int32 DataIndex, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    void MakeDifferentVersionGameData(int32 DataIndex, int32 Version);
    
    UFUNCTION(BlueprintCallable)
    void MakeCrackedGameData(int32 DataIndex, int32 randSeed);
    
    UFUNCTION(BlueprintCallable)
    void MakeBrokenGameData(int32 DataIndex, int32 randSeed);
    
    UFUNCTION(BlueprintCallable)
    bool LoadGameData(int32 DataIndex);
    
};

