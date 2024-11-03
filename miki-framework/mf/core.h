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

        int mouseX = 0;
        int mouseY = 0;

        SDL_Window* window = {};
        SDL_Renderer* renderer = {};
        SDL_Event event = {};
        TTF_Font* font = {};

        // How long window existed
        int frame = 0;
        int timeS = 0;
        int timeM = 0;
        int timeH = 0;
    };

    void InitWindow(core::SDL_Settings &sdlSettings, std::string title, int width, int height);
    void TimeCount(core::SDL_Settings &sdlSettings);

    void miki(core::SDL_Settings sdlSettings); // Best function ever
}