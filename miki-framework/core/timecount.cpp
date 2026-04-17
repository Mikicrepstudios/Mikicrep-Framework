#include "mf/core.h"
#include "SDL_timer.h"
namespace core {
    void TimeCount(core::MF_Window &window) {
        /**
         * @brief This function increases time since window is spawned
         * @param sdlSettings Window that you want to cout time for
         */

        if(SDL_GetTicks64() - window.frame >= 1000) {
            window.frame = SDL_GetTicks64();
            window.timeS++;
            if(window.timeS == 60) {
                window.timeS = 0;
                window.timeM++;
                if(window.timeM == 60) {
                    window.timeM = 0;
                    window.timeH++;
                    // ...
                }
            }
        }
    }
}
