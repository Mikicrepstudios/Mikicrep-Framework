#include <string>
#include "SDL.h"

#include "mf/core.h"
#include "mf/graphics.h"

int main(int argc, char* argv[]) {
    // Main stuff
    std::string title = "Mikicrep Framework";
    core::SDL_Settings sdlSettings = {};
    SDL_Event event = {};

    core::InitWindow(sdlSettings, title, 1280, 800);

    bool running = true;
    while(running) {
        while(SDL_PollEvent(&event) != 0) {
            sdlSettings.event = event;
            if(event.type == SDL_QUIT) running = false;
            if(event.type == SDL_KEYDOWN) {
                if(event.key.keysym.sym == SDLK_ESCAPE) running = false;
            }
        }

        SDL_SetRenderDrawColor(sdlSettings.renderer, 0, 0, 0, 255);
        SDL_RenderClear(sdlSettings.renderer);

        draw::DrawRect(sdlSettings.renderer, {0, 0, 50, 50}, 255, 0, 0);

        SDL_RenderPresent(sdlSettings.renderer);
        SDL_Delay(1000 / sdlSettings.fps);
    }

    return 0;
}