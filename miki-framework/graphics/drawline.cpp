#include <SDL.h>

namespace draw {
    void DrawLine(SDL_Renderer* renderer, int x1, int y1, int x2, int y2) {
        /**
         * @brief Draws line
         * @param x1 X coordinate of the first point
         * @param y1 Y coordinate of the first point
         * @param x2 X coordinate of the second point
         * @param y2 Y coordinate of the second point
         */
        
        SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
    }
}