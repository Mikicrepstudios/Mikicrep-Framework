#include <SDL.h>

#include "mf/core.h"
#include "mf/graphics.h"

namespace draw {
    void DrawLine(SDL_Renderer* renderer, MF_Pixel start, MF_Pixel end, int thickness, MF_Color color) {
        /**
         * @brief Draws line
         * @param start Start point
         * @param end End point
         */
        
        draw::SetDrawColor(renderer, color);
        
		for (int i = -thickness / 2; i <= thickness / 2; ++i) {
        	SDL_RenderDrawLine(renderer, start.x, start.y, end.x, end.y);
    	}
    }
}
