/**
 * @brief This namespace contains stuff that are required for Mikicrep Framework to work correctly
 */

#pragma once

#include <string>
#include "SDL.h"
#include "SDL_ttf.h"

namespace core {
    struct SDL_Settings {
        int width = 1280;
        int height = 800;
        int fps = 60; // THIS IS NOT FPS COUNTER, IT IS MAXIMUM FPS

        SDL_Window* window = {};
        SDL_Renderer* renderer = {};
        SDL_Event event = {};
        TTF_Font* font = {};
    };

    void InitWindow(core::SDL_Settings &sdlSettings, std::string title, int width, int height);
    void miki(core::SDL_Settings sdlSettings); // Best function ever
}