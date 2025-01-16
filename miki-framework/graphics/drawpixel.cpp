#include <SDL.h>

namespace graphics {
    void DrawPixel(SDL_Renderer* renderer, int x, int y) {
        SDL_RenderDrawPoint(renderer, x, y);
    }
}