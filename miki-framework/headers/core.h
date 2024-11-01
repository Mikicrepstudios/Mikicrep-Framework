#pragma once

#include "SDL.h"
#include "SDL_ttf.h"

namespace core {
    struct SDL_Settings {
        int width = 1280;
        int height = 800;
        int fps = 60;

        SDL_Window* window = {};
        SDL_Renderer* renderer = {};
        SDL_Event event = {};
        TTF_Font* font = {};
    };

    void InitWindow(core::SDL_Settings &sdlSettings, std::string title, int width, int height);
}