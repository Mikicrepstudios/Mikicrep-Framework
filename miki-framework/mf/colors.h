/**
 * @brief This namespace contains colors for various elements
 */

#pragma once

#include "SDL.h"

namespace colors {
    /**
     * @brief Colors for texts
     */
    namespace text {
	    constexpr SDL_Color blackTextColor = {0, 0, 0};
        constexpr SDL_Color whiteTextColor = {255, 255, 255};
    };
}