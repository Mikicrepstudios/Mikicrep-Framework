#include "mf/core.h"
#include "mf/colors.h"
#include "mf/graphics.h"

namespace core {
    void miki(core::SDL_Settings sdlSettings) {
        /**
         * @brief This will reamain undocumented, figure it yourself ;)
         */

        draw::DrawText(sdlSettings.renderer, sdlSettings.font, {sdlSettings.width / 2 - 400, 0, 800, 50}, "Mikicrep Framework is working", colors::text::whiteTextColor);
    }
}