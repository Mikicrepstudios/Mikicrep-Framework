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
    
        SDL_SetRenderDrawColor(sdlSettings.renderer, 255, 0, 0, 120);
        SDL_Rect rect1 = {50, 50, 50, 50};
        SDL_RenderFillRect(sdlSettings.renderer, &rect1);

        SDL_SetRenderDrawColor(sdlSettings.renderer, 0, 0, 255, 120);
        SDL_Rect rect2 = {75, 75, 50, 50};
        SDL_RenderFillRect(sdlSettings.renderer, &rect2);
    }
}