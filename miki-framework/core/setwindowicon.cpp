#include <string>
#include "SDL.h"
#include "SDL_image.h"

namespace core {
    void SetWindowIcon(SDL_Window* window, std::string path) {
        SDL_Surface* iconSurface = IMG_Load(path.c_str());
        SDL_SetWindowIcon(window, iconSurface);
        SDL_FreeSurface(iconSurface);
    }
}