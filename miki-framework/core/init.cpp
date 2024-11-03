/**
 * @brief Initilize env
*/

#include <string>
#include "SDL.h"

#include "mf/core.h"

namespace core {
    void InitWindow(core::SDL_Settings &sdlSettings, std::string title, int width, int height) {
        // Update settings
        sdlSettings.width = width;
        sdlSettings.height = height;

        // Init everything
        SDL_Init(SDL_INIT_EVERYTHING);
	    TTF_Init();

        sdlSettings.font = TTF_OpenFont("mf/font.ttf", 96);

        // Create window and renderer
        sdlSettings.window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, sdlSettings.width, sdlSettings.height, 0);
        sdlSettings.renderer = SDL_CreateRenderer(sdlSettings.window, -1, 0);
    }
}