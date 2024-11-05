#include <string>
#include "SDL.h"

#include "mf/core.h"

namespace core {
    void InitWindow(core::SDL_Settings &sdlSettings, std::string title, int width, int height) {
        /**
         * @brief Initilizes window and stuff related to it
         * @param sdlSettings Stuct that contains information about window
         * @param title Title of the window
         * @param width Width of the window
         * @param height Height of the window
         */

        // Update settings
        sdlSettings.width = width;
        sdlSettings.height = height;

        // Init everything
        SDL_Init(SDL_INIT_EVERYTHING);
	    TTF_Init();

        sdlSettings.font = TTF_OpenFont("mf/font.ttf", 96); // Increase 2nd number if you want better quality font

        // Create window and renderer
        sdlSettings.window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, sdlSettings.width, sdlSettings.height, 0);
        sdlSettings.renderer = SDL_CreateRenderer(sdlSettings.window, -1, 0);

        SDL_SetRenderDrawBlendMode(sdlSettings.renderer, SDL_BLENDMODE_BLEND); // Transparency
    }
}