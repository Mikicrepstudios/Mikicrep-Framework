#pragma once

#include <SDL_ttf.h>

#include "data.h"
#include "settings.h"
#include "rects.h"
#include "textures.h"

namespace draw {
    // Core
	extern void DrawButton(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB, int mouseX, int mouseY);
	extern void DrawRect(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB);
	extern void DrawTextureRect(SDL_Renderer* renderer, SDL_Rect rect, SDL_Texture* texture);
	extern void DrawText(SDL_Renderer* renderer, TTF_Font* font, SDL_Rect rect, const char* text, SDL_Color color);

    // Game
	extern void DrawHPBars(settings::SDL_Settings &sdlSettings, data::Player player, data::AI AIs[3], rects::EntityRects entityRects);
	extern void DrawSpecialBars(settings::SDL_Settings &sdlSettings, data::Player player, data::AI AIs[3], rects::EntityRects entityRects);
    extern void DrawEntities(settings::SDL_Settings sdlSettings, data::AI AIs[3], int AIOrder[3], textures::EntityTextures &entityTextures, rects::EntityRects entityRects);
	extern void DrawShields(settings::SDL_Settings sdlSettings, rects::ShieldRects shieldRects, textures::SpecialsTextures specialsTextures, int shieldedAIOrder[3]);

	// Visuals
	extern void DrawGUI(settings::SDL_Settings &sdlSettings, int level, int timeM, int timeS);
}