#include "SDL.h"

#include "mf/core.h"
#include "mf/colors.h"
#include "mf/graphics.h"

namespace core {
    void miki(core::SDL_Settings sdlSettings) {
        /**
         * @brief This will reamain undocumented, figure it yourself ;)
         */

        draw::DrawText(sdlSettings.renderer, sdlSettings.font, {sdlSettings.width / 2 - 400, 0, 800, 50}, "Mikicrep Framework is working", colors::text::whiteTextColor);
    
        SDL_Rect rect1 = {50, 50, 50, 50};
        SDL_Rect rect2 = {75, 50, 50, 50};
        SDL_Rect rect3 = {62, 75, 50, 50};

        draw::DrawTransRect(sdlSettings.renderer, rect1, 255, 0, 0, 255);
        draw::DrawTransRect(sdlSettings.renderer, rect2, 0, 0, 255, 150);
        draw::DrawTransRect(sdlSettings.renderer, rect3, 0, 255, 0, 150);
    }
}