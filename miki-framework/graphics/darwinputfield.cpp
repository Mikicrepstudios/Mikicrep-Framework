#include <iostream>
#include "SDL.h"

#include "mf/core.h"
#include "mf/colors.h"
#include "mf/graphics.h"
#include "mf/logic.h"

namespace draw {
	void DrawInputRect(core::MF_Window &window, SDL_Rect rect, MF_Color color, std::string &inputText) {
		/**
		 * @brief Draws input field where you can write text
		 * @param renderer Window renderer
		 * @param rect Cords of button
		 * @param color Color of drawn element (MF_Color)
		 * @param mouse Window mouse
		 */

		// If mouse hovers input, then darken it, if not then dont darken
		if (logic::IsMouseTouching(window.mouse, rect)) {
			color.r *= .65;
			color.g *= .65;
			color.b *= .65;
			SDL_SetRenderDrawColor(window.renderer, color.r, color.g, color.b, 255);
			SDL_RenderFillRect(window.renderer, &rect);
		}
		else
			SDL_SetRenderDrawColor(window.renderer, color.r, color.g, color.b, 255);
		SDL_RenderFillRect(window.renderer, &rect);

        draw::DrawText(window.renderer, window.font, rect, inputText.c_str(), colors::white);

        if(window.mouse.isDown && logic::IsMouseTouching(window.mouse, rect)) {
            window.typingVariable = &inputText;
            window.isTypingActive = true;
        }
	}
}