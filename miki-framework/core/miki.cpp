#include <iostream>
#include <string>
#include "SDL.h"

#include "mf/core.h"
#include "mf/colors.h"
#include "mf/files.h"
#include "mf/graphics.h"
#include "mf/logic.h"

namespace core {
    void miki(core::MF_Window window) {
        /**
         * @brief This will reamain undocumented, figure it yourself ;)
         */

        draw::DrawText(window.renderer, window.font, {window.width / 2 - 400, 0, 800, 50}, "Mikicrep Framework is working", colors::text::whiteTextColor);
    
        SDL_Rect rect1 = {50, 50, 50, 50};
        SDL_Rect rect2 = {75, 50, 50, 50};
        SDL_Rect rect3 = {62, 75, 50, 50};

        draw::DrawTransRect(window.renderer, rect1, colors::general::colorID[26], 255); // Color ID for red
        draw::DrawTransRect(window.renderer, rect2, colors::general::indigo, 150);
        draw::DrawTransRect(window.renderer, rect3, colors::general::grassgreen, 150);

        if(logic::IsMouseTouching(window.mouseX, window.mouseY, rect3))
            draw::DrawRect(window.renderer, {window.width - 50, window.height - 50, 50, 50}, colors::general::grassgreen);
        else if(logic::IsMouseTouching(window.mouseX, window.mouseY, rect2))
            draw::DrawRect(window.renderer, {window.width - 50, window.height - 50, 50, 50}, colors::general::indigo);
        else if(logic::IsMouseTouching(window.mouseX, window.mouseY, rect1))
            draw::DrawRect(window.renderer, {window.width - 50, window.height - 50, 50, 50}, colors::general::colorID[26]); // Color ID for red
    }
}