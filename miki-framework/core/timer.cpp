#include <SDL.h>
#include <vector>
#include <functional>

namespace core {
    struct Timer {
        Uint32 lastExecution;
        Uint32 interval;
        std::function<void()> callback;
        bool repeat; // Determines if the timer should repeat
    };

    std::vector<Timer> timers;

    void addTimer(Uint32 interval, std::function<void()> callback, bool repeat = true) {
        /**
         * @brief This adds function that will be executed after specified amount of time
         * @param interval Run timer every x miliseconds
         * @param callback Function that will be ran (can also just be basic block of code {})
         * @param repeat Should timer be executed only once or every x miliseconds
         */

        timers.push_back({ SDL_GetTicks(), interval, callback, repeat });
    }

    void updateTimers() {
        /**
         * @brief Run added timers if needed
         */

        Uint32 currentTime = SDL_GetTicks();

        // Use an iterator to allow removing timers during iteration
        for (auto it = timers.begin(); it != timers.end();) {
            if (currentTime - it->lastExecution >= it->interval) {
                it->callback();
                if (it->repeat) {
                    it->lastExecution = currentTime;
                    ++it;
                } else {
                    // Remove non-repeating timers
                    it = timers.erase(it);
                }
            } else {
                ++it;
            }
        }
    }
}