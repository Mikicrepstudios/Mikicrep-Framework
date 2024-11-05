/**
 * @brief This namespace contains functions for drawing elements
 */

#pragma once

#include <SDL_ttf.h>

namespace draw {
    // Core
	void DrawButton(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB, int mouseX, int mouseY);
	void DrawRect(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB);
	void DrawTransRect(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB, int colorA);
	void DrawTextureRect(SDL_Renderer* renderer, SDL_Rect rect, SDL_Texture* texture);
	void DrawText(SDL_Renderer* renderer, TTF_Font* font, SDL_Rect rect, const char* text, SDL_Color color);
}