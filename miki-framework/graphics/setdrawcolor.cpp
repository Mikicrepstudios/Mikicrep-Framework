#include "SDL.h"

#include "mf/colors.h"

namespace draw {
	void SetDrawColor(SDL_Renderer* renderer, MF_Color color) {
		SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, 255);
	}
}
