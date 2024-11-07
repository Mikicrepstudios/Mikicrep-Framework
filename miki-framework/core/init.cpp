#include <string>
#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"

#include "mf/core.h"

namespace core {
    void InitWindow(core::MF_Window &window, std::string title, int width, int height) {
        /**
         * @brief Initilizes window and stuff related to it
         * @param window Stuct that contains information about window
         * @param title Title of the window
         * @param width Width of the window
         * @param height Height of the window
         */

        // Update settings
        window.width = width;
        window.height = height;

        // Init everything
        SDL_Init(SDL_INIT_EVERYTHING);
	    TTF_Init();
        IMG_Init(IMG_INIT_PNG);

        window.font = TTF_OpenFont("mf/font.ttf", 96); // Increase 2nd number if you want better quality font

        // Create window and renderer
        window.window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, window.width, window.height, 0);
        window.renderer = SDL_CreateRenderer(window.window, -1, 0);

        SDL_SetRenderDrawBlendMode(window.renderer, SDL_BLENDMODE_BLEND); // Transparency
    }
}