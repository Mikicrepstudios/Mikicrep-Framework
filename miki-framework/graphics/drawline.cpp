#include <SDL.h>

namespace draw {
    void DrawLine(SDL_Renderer* renderer, int x1, int y1, int x2, int y2) {
        SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
    }
}