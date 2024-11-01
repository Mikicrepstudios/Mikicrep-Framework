#include <iostream>
#include "SDL2/SDL.h"
#include <SDL_ttf.h>

namespace draw {
	void DrawButton(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB, int mouseX, int mouseY) {
		if (mouseX >= rect.x && mouseX <= rect.x + rect.w &&
			mouseY >= rect.y && mouseY <= rect.y + rect.h) {
			colorR *= .25;
			colorG *= .25;
			colorB *= .25;
			SDL_SetRenderDrawColor(renderer, colorR, colorG, colorB, 255);
			SDL_RenderFillRect(renderer, &rect);
		}
		else
			SDL_SetRenderDrawColor(renderer, colorR, colorG, colorB, 255);
		SDL_RenderFillRect(renderer, &rect);
	}

	void DrawRect(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB) {
		SDL_SetRenderDrawColor(renderer, colorR, colorG, colorB, 255);
		SDL_RenderFillRect(renderer, &rect);
	}

	void DrawTextureRect(SDL_Renderer* renderer, SDL_Rect rect, SDL_Texture* texture) {
		SDL_RenderCopy(renderer, texture, NULL, &rect);
	}

	void DrawText(SDL_Renderer* renderer, TTF_Font* font, SDL_Rect rect, const char* text, SDL_Color textColor) {
		SDL_Surface* textSurface = TTF_RenderText_Solid(font, text, textColor);
		SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
		SDL_RenderCopy(renderer, textTexture, NULL, &rect);
		SDL_FreeSurface(textSurface);
        SDL_DestroyTexture(textTexture);
	}
}
