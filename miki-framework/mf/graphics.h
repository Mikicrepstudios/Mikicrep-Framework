#pragma once

#include <SDL_ttf.h>

namespace draw {
    // Core
	extern void DrawButton(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB, int mouseX, int mouseY);
	extern void DrawRect(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB);
	extern void DrawTextureRect(SDL_Renderer* renderer, SDL_Rect rect, SDL_Texture* texture);
	extern void DrawText(SDL_Renderer* renderer, TTF_Font* font, SDL_Rect rect, const char* text, SDL_Color color);
}