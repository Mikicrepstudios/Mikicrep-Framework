#include "mf/core.h"

namespace core {
    // Call this ONCE at start of frame
    void BeginMouseFrame(core::MF_Window &window) {
        // Store mouse x and y
        SDL_GetMouseState(&window.mouse.x, &window.mouse.y);

        // Reset pressed for this frame
        window.mouse.isPressed = false;
    }

    // Call this for EACH mouse event
    void HandleMouseEvent(core::MF_Window &window) {
        if(window.event.type == SDL_MOUSEBUTTONDOWN) {
            window.mouse.isDown = true;
        } else if(window.event.type == SDL_MOUSEBUTTONUP) {
            window.mouse.isDown = false;
        }
    }
    
    // Call this ONCE after processing ALL events
    void EndMouseFrame(core::MF_Window &window) {
        window.mouse.isPressed = window.mouse.isDown && !window.mouse.wasDown;
        
        window.mouse.wasDown = window.mouse.isDown;
    }
}