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
        constexpr MF_Color black = {0, 0, 0};
        constexpr MF_Color gray = {130, 124, 112};
        constexpr MF_Color darkgray = {74, 73, 87};
        constexpr MF_Color darkblue = {5, 17, 87};
        constexpr MF_Color indigo = {45, 105, 203};
        constexpr MF_Color aqua = {0, 166, 238};
        constexpr MF_Color lightblue = {111, 235, 255};

        constexpr MF_Color darkgreen = {6, 54, 25};
        constexpr MF_Color leafgreen = {86, 98, 4};
        constexpr MF_Color olive = {155, 149, 0};
        constexpr MF_Color grassgreen = {17, 150, 59};
        constexpr MF_Color lightgreen = {81, 225, 19};
        constexpr MF_Color cyan = {42, 102, 106};
        constexpr MF_Color bluishgreen = {8, 162, 154};
        constexpr MF_Color sky = {8, 253, 204};

        constexpr MF_Color brown = {90, 59, 28};
        constexpr MF_Color lightbrown = {174, 101, 7};
        constexpr MF_Color orange = {247, 170, 48};
        constexpr MF_Color yellow = {244, 234, 92};
        constexpr MF_Color lightgray = {172, 190, 156};
        constexpr MF_Color violet = {142, 123, 164};
        constexpr MF_Color rose = {214, 160, 144};
        constexpr MF_Color lavanderblue = {183, 192, 255};

        constexpr MF_Color crimsonred = {71, 1, 31};
        constexpr MF_Color darkred = {161, 44, 50};
        constexpr MF_Color red = {254, 59, 30};
        constexpr MF_Color pink = {250, 47, 122};
        constexpr MF_Color purple = {153, 47, 124};
        constexpr MF_Color lightpurple = {230, 28, 247};
        constexpr MF_Color lavanderrose = {251, 159, 218};
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