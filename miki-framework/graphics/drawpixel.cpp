#include <SDL.h>

namespace draw {
    void DrawPixel(SDL_Renderer* renderer, int x, int y) {
        SDL_RenderDrawPoint(renderer, x, y);
    }
}