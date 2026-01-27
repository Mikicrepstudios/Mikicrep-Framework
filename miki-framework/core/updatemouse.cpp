#include "mf/core.h"

namespace core {
    void UpdateMouseState(core::MF_Window &window) {
        /**
         * @brief This function updates variables like window.mouse.isDown, window.mouse.isPressed...
         */

        if(window.event.type == SDL_MOUSEBUTTONDOWN) {
            // Mouse button is held
            window.mouse.isDown = true;

            // Store previous state
            window.mouse.wasDown = window.mouse.isDown;
            window.mouse.isPressed = window.mouse.isDown && !window.mouse.wasDown;
        }

        else if(window.event.type == SDL_MOUSEBUTTONUP) {
            // Mouse button is released
            window.mouse.isDown = false;
        }
    }
}