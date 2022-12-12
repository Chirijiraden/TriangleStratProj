#include "WorldMapLand.h"

class UTexture;





void AWorldMapLand::OnFinishChangeTerritory() {
}

UTexture* AWorldMapLand::GetCurrentTextureBefore() const {
    return NULL;
}

UTexture* AWorldMapLand::GetCurrentTextureAfter() const {
    return NULL;
}


AWorldMapLand::AWorldMapLand() {
    this->TextureLineBefore = NULL;
    this->TextureAreaBefore = NULL;
    this->TextureLineAfter = NULL;
    this->TextureAreaAfter = NULL;
}

