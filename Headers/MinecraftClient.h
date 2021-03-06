#pragma once

#include "Minecraft.h"
#include "TextureGroup.h"

struct ScreenChooser;
class ParticleEngine;

class MinecraftClient {
public:
	char filler1[100];
	Minecraft& minecraft;
	
	ScreenChooser* getScreenChooser() const;
	Player* getLocalPlayer();
	ParticleEngine* getParticleEngine() const;
	mce::TextureGroup* getTextures() const;
	
	void init();
};
