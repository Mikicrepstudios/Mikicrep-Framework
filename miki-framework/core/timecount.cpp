#include "mf/core.h"

namespace core {
    void TimeCount(core::SDL_Settings &sdlSettings) {
        /**
         * @brief This function increases time since window is spawned
         * @param sdlSettings Window that you want to cout time for
         */

        sdlSettings.frame++;
        if(sdlSettings.frame == sdlSettings.fps) {
            sdlSettings.frame = 0;
            sdlSettings.timeS++;
            if(sdlSettings.timeS == 60) {
                sdlSettings.timeS = 0;
                sdlSettings.timeM++;
                if(sdlSettings.timeM == 60) {
                    sdlSettings.timeM = 0;
                    sdlSettings.timeH++;
                    // ...
                }
            }
        }
    }
}