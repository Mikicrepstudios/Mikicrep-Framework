#include <iostream>
#include <string>
#include "SDL_mixer.h"

namespace sfx {
    void PlayBGMusic(std::string path) {
        Mix_Music* music = Mix_LoadMUS(path.c_str());
        if (!music) {
            std::cerr << "Failed to load music file '" << path << "'. SDL_mixer Error: " << Mix_GetError() << '\n';
            return;
        }

        if (Mix_PlayMusic(music, -1) == -1) {
            std::cerr << "Failed to play music. SDL_mixer Error: " << Mix_GetError() << '\n';
            Mix_FreeMusic(music);  // Free the loaded music if playback fails
            return;
        }
    }
}