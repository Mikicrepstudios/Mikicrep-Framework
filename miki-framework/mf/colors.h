/**
 * @brief This namespace contains colors for various elements
 */

#pragma once

#include "SDL.h"

struct MF_Color {
    int r = 0;
    int g = 0;
    int b = 0;
};

namespace colors {
    /**
     * @brief General colors
     */
    namespace general {
        constexpr MF_Color white = {255, 255, 255};
    };

    /**
     * @brief Colors for texts
     */
    namespace text {
	    constexpr SDL_Color blackTextColor = {0, 0, 0};
        constexpr SDL_Color whiteTextColor = {255, 255, 255};
    };
}