#include "EventParamActorWorldMapPiece.h"

void AEventParamActorWorldMapPiece::VisibilityFlagEnable() {
}

void AEventParamActorWorldMapPiece::VisibilityFlagDisable() {
}

void AEventParamActorWorldMapPiece::VisibilityEnable() {
}

void AEventParamActorWorldMapPiece::VisibilityDisable() {
}

void AEventParamActorWorldMapPiece::TransitionType(EWorldMapNarrationMillitarySymbolType TargetWorldMapNarrationMillitarySymbolType, bool bImmediately) {
}

void AEventParamActorWorldMapPiece::StartSplineMoveBySpeed(FName TargetSplineTag, float Speed) {
}

void AEventParamActorWorldMapPiece::StartSplineMoveBySec(FName TargetSplineTag, float Sec) {
}

void AEventParamActorWorldMapPiece::SplineMoveOnSkipWithDrawPath(const TArray<FWorldMapMillitarySymbolSplineMoveOnSkipData>& SplineMoveDatas) {
}

void AEventParamActorWorldMapPiece::Spawn(EWorldMapNarrationMillitarySymbolType WorldMapNarrationMillitarySymbolType, EWorldMapNarrationFlagType WorldMapNarrationFlagType) {
}

void AEventParamActorWorldMapPiece::ReturnTransformControlToSequenceKey() {
}

void AEventParamActorWorldMapPiece::PathStartDraw(float IntervalDistance) {
}

void AEventParamActorWorldMapPiece::PathEndDraw() {
}

void AEventParamActorWorldMapPiece::PathClear() {
}

void AEventParamActorWorldMapPiece::DestroySymbolDefault() {
}

void AEventParamActorWorldMapPiece::DestroySymbol(FName EffectAssetId) {
}

void AEventParamActorWorldMapPiece::ChangeType(EWorldMapNarrationMillitarySymbolType WorldMapNarrationMillitarySymbolType) {
}

void AEventParamActorWorldMapPiece::ChangeFlagType(EWorldMapNarrationFlagType WorldMapNarrationFlagType) {
}

AEventParamActorWorldMapPiece::AEventParamActorWorldMapPiece() {
    this->Piece = NULL;
    this->CurrentSpline = NULL;
    this->InterpLocationT = NULL;
}

