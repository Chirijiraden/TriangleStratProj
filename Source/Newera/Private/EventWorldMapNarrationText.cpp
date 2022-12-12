#include "EventWorldMapNarrationText.h"

void AEventWorldMapNarrationText::StartWithAutoFlipSingle(FName GopId, float DispTimeSec) {
}

void AEventWorldMapNarrationText::StartWithAutoFlip(const TArray<FWorldMapNarrationTextData>& Datas) {
}

void AEventWorldMapNarrationText::Start(const TArray<FName>& GopIds) {
}

void AEventWorldMapNarrationText::Next() {
}

void AEventWorldMapNarrationText::End() {
}

AEventWorldMapNarrationText::AEventWorldMapNarrationText() {
    this->Timer = NULL;
    this->TimerPlayVoice = NULL;
}

