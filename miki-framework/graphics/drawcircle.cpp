#include <SDL.h>

#include <mf/graphics.h>

namespace draw {
    void DrawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius) {
        int x = 0;
        int y = radius;
        int decision = 1 - radius;

        while (x <= y) {
            // Draw horizontal lines to fill the circle
            DrawLine(renderer, centerX - x, centerY + y, centerX + x, centerY + y);
            DrawLine(renderer, centerX - x, centerY - y, centerX + x, centerY - y);
            DrawLine(renderer, centerX - y, centerY + x, centerX + y, centerY + x);
            DrawLine(renderer, centerX - y, centerY - x, centerX + y, centerY - x);

            if (decision < 0) {
                decision += 2 * x + 3;
            } else {
                decision += 2 * (x - y) + 5;
                y--;
            }
            x++;
        }
    }
}