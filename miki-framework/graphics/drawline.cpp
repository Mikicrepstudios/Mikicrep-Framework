#include <SDL.h>

#include <mf/core.h>

namespace draw {
    void DrawLine(SDL_Renderer* renderer, MF_Pixel start, MF_Pixel end) {
        /**
         * @brief Draws line
         * @param x1 X coordinate of the first point
         * @param y1 Y coordinate of the first point
         * @param x2 X coordinate of the second point
         * @param y2 Y coordinate of the second point
         */
        
        SDL_RenderDrawLine(renderer, start.x, start.y, end.x, end.y);
    }
}