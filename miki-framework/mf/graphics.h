/**
 * @brief This namespace contains functions for drawing elements
 */

#pragma once

#include <SDL_ttf.h>

#include "mf/core.h"

namespace draw {
    // Core
	void SetDrawColor(SDL_Renderer* renderer, MF_Color color);
	void DrawPixel(SDL_Renderer* renderer, int x, int y);
	void DrawLine(SDL_Renderer* renderer, int x1, int y1, int x2, int y2);

	void DrawButton(SDL_Renderer* renderer, SDL_Rect rect, MF_Color color, int mouseX, int mouseY);

	// Rectangle
	void DrawRect(SDL_Renderer* renderer, SDL_Rect rect, MF_Color color);
	void DrawTransRect(SDL_Renderer* renderer, SDL_Rect rect, MF_Color color, int colorA);
	void DrawShakingRect(SDL_Renderer* renderer, SDL_Rect rect, MF_Color color, int intensity);
	void DrawTextureRect(SDL_Renderer* renderer, SDL_Rect rect, SDL_Texture* texture);

	// Circle
	void DrawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius);
	void DrawCircleBorder(SDL_Renderer* renderer, SDL_Rect &rect, MF_Color color);
	
	void DrawText(SDL_Renderer* renderer, TTF_Font* font, SDL_Rect rect, const char* text, MF_Color color);
}