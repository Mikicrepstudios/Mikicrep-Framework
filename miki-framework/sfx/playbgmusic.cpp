#include <string>
#include "SDL_mixer.h"

namespace sfx {
    void PlayBGMusic(std::string path) {
        Mix_Music *music = Mix_LoadMUS(path.c_str());
        Mix_PlayMusic(music, -1);
    }
}