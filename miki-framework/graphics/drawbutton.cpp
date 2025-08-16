#include "SDL.h"

#include "mf/colors.h"

namespace draw {
	void DrawButton(SDL_Renderer* renderer, SDL_Rect rect, MF_Color color, int mouseX, int mouseY) {
		/**
		 * @brief Draws button which gets darker on mouse hover
		 * @param renderer Window renderer
		 * @param rect Cords of button
		 * @param color Color of drawn element (MF_Color)
		 * @param mouseX X position of mouse
		 * @param mouseY Y position of mouse
		 */

		// If mouse hovers button then darken it, if not then dont darken
		if (mouseX >= rect.x && mouseX <= rect.x + rect.w &&
			mouseY >= rect.y && mouseY <= rect.y + rect.h) {
			color.r *= .65;
			color.g *= .65;
			color.b *= .65;
			SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, 255);
			SDL_RenderFillRect(renderer, &rect);
		}
		else
			SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, 255);
		SDL_RenderFillRect(renderer, &rect);
	}
}