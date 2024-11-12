#include <iostream>
#include <string>
#include "SDL.h"

#include "mf/core.h"
#include "mf/graphics.h"
#include "mf/logic.h"
#include "mf/sfx.h"

int main(int argc, char* argv[]) {
    bool running = true;
    std::cout << "-------Mikicrep Framework-------" << std::endl
              //<< "-------Ver: 1.2.0---------------" << std::endl
              << "-------Ver: D E V---------------" << std::endl
              << "Copyright Mikicrep Studios 2024" << std::endl;

    // Main stuff
    std::string title = "Mikicrep Framework";
    core::MF_Window window = {};
    SDL_Event event = {};

    // Create window
    if(core::InitWindow(window, title, 1280, 800) == false) running = false;

    while(running) {
        // Prepare next frame
        SDL_GetMouseState(&window.mouseX, &window.mouseY);

        // Check for events
        while(SDL_PollEvent(&event) != 0) {
            // Handle window events
            window.event = event;
            switch(event.type) {
                case SDL_QUIT:
                    // Quit game
                    running = false;
                    break;
                case SDL_KEYDOWN:
                    // Handle keyboard presses
                    switch(event.key.keysym.sym) {
                        case SDLK_ESCAPE:
                            // Quit game
                            running = false;
                            break;
                    }
                    break;
            }
        }

        // Clear frame
        SDL_SetRenderDrawColor(window.renderer, 0, 0, 0, 255);
        SDL_RenderClear(window.renderer);

        // Draw stuff
        core::miki(window);

        // Finish frame
        SDL_RenderPresent(window.renderer);
        core::TimeCount(window);
        SDL_Delay(1000 / window.fps);
    }

    return 0;
}
