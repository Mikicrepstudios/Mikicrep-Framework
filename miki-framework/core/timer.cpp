#include <SDL.h>
#include <functional>
#include <vector>

#include "mf/core.h"

/*
// Usage without function:
core::AddTimer(5000, [](){std::cout << "Execute every 5s" << std::endl;}, true);
core::AddTimer(500, [](){std::cout << "Execute once after 500ms" << std::endl;},
false);

// Usage with function:
Lets say that you got function

void SomeFunction(int &arg1, int arg2, bool arg3, bool &arg4);

Lets say that SomeFunction() needs:
- arg1 and arg4: existing variables (we want them to update outside)
- arg2: value copied when timer is created
- arg3: always true (fixed setting)

So now you add timer by

core::AddTimer(1000, [&arg1, arg2, &arg4]() {
    SomeFunction(arg1, arg2, true, arg4);
}, true);
*/

namespace core {
struct Timer {
  Uint64 lastExecution;           // Tick when it was executed last time
  Uint32 interval;                // Each ? ms run timer
  std::function<void()> callback; // What function should timer call
  bool repeat;                    // Should timer repeat
};

std::vector<Timer> timers;

void AddTimer(Uint32 interval, std::function<void()> callback, bool repeat) {
  /**
   * @brief This adds function that will be executed after specified amount of
   * time, check usage in timer.cpp
   * @param interval Run timer every x miliseconds
   * @param callback Function that will be ran (can also just be basic block of
   * code [](){code})
   * @param repeat Should timer be executed only once or every x miliseconds
   */

  timers.push_back({SDL_GetTicks(), interval, callback, repeat});
}

void UpdateTimers(MF_Window &window) {
  /**
   * @brief Run added timers if needed
   */

  Uint64 currentTime = window.currentTick;

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
} // namespace core