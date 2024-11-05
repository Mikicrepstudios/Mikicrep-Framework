#include <iostream>
#include "SDL2/SDL.h"
#include <SDL_ttf.h>

namespace draw {
	void DrawButton(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB, int mouseX, int mouseY) {
		/**
		 * @brief Draws button which gets darker on mouse hover
		 * @param renderer Window renderer
		 * @param rect Cords of button
		 * @param colorR R amount from RGB
		 * @param colorG G amount from RGB
		 * @param colorB B amount from RGB
		 * @param mouseX X position of mouse
		 * @param mouseY Y position of mouse
		 */

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
		/**
		 * @brief Draws simple rectangle
		 * @param renderer Window renderer
		 * @param rect Cords of rectangle
		 * @param colorR R amount from RGB
		 * @param colorG G amount from RGB
		 * @param colorB B amount from RGB
		 */

		SDL_SetRenderDrawColor(renderer, colorR, colorG, colorB, 255);
		SDL_RenderFillRect(renderer, &rect);
	}

	void DrawTransRect(SDL_Renderer* renderer, SDL_Rect rect, int colorR, int colorG, int colorB, int colorA) {
		/**
		 * @brief Draws simple transparent rectangle
		 * @param renderer Window renderer
		 * @param rect Cords of rectangle
		 * @param colorR R amount from RGB
		 * @param colorG G amount from RGB
		 * @param colorB B amount from RGB
		 * @param colorA Opacity of rect (255 - visible, 0 - transparent)
		 */

		SDL_SetRenderDrawColor(renderer, colorR, colorG, colorB, colorA);
		SDL_RenderFillRect(renderer, &rect);
	}

	void DrawTextureRect(SDL_Renderer* renderer, SDL_Rect rect, SDL_Texture* texture) {
		/**
		 * @brief Draws simple rectangle with specified texture
		 * @param renderer Window renderer
		 * @param rect Cords of rectangle
		 * @param texture Texture for the rect, must be SDL_Texture*
		 */

		SDL_RenderCopy(renderer, texture, NULL, &rect);
	}

	void DrawText(SDL_Renderer* renderer, TTF_Font* font, SDL_Rect rect, const char* text, SDL_Color textColor) {
		/**
		 * @brief Draws text on screen
		 * @param renderer Window renderer
		 * @param rect Cords of text box
		 * @param text Text that will be drawn, must be char*, you can convert std::string to it using .c_str()
		 * @param textColor Color of text, must be SDL_Color, you can use colors::text::white, replace white with your wanted color
		 */
		
		SDL_Surface* textSurface = TTF_RenderText_Solid(font, text, textColor);
		SDL_Texture* textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
		SDL_RenderCopy(renderer, textTexture, NULL, &rect);
		SDL_FreeSurface(textSurface);
        SDL_DestroyTexture(textTexture);
	}
}
