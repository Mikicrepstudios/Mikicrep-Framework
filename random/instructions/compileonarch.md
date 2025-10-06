# Compiling on `arch`

This guide provides the most up-to-date instructions for compiling on Arch Linux, as it is our primary development environment. Compilation steps for other operating systems may not be included unless they have been tested and verified.

Requirements:
- [Setup env](https://github.com/Mikicrepstudios/Mikicrep-Framework?tab=readme-ov-file#setuping-env) first
- ```pacman -S --needed base-devel sdl2 sdl2_ttf sdl2_image sdl2_mixer```
- ```pacman -S --needed mingw-w64-gcc``` and AUR package `mingw-w64-sdl2` for windows compiling (optional)

## Compiling and running on linux
1. Clone this repo and go into its directory
2. Open terminal and run `make`
- You can move `output` folder out of repo folder and delete repo folder
- App will not open automatically after successful compilation
3. Run `make open` to run compiled app
### Windows x86_64 (64bit)
1. Clone this repo and go into its directory
2. Download `sdl2mingw.zip` [here](https://drive.google.com/drive/folders/1uVe7oKMzCTTUeMJuHL7vqK0O2FK_pIPs?usp=drive_link)
3. Extract `sdl2mingw.zip` in root folder of repo (make sure you put folder not contents of folder)
4. Open terminal and run `make windows`
5. Move contents from `x86_64dll` folder to output folder
- You can move `output` folder out of repo folder and delete repo folder
- App will not open automatically after successful compilation
- Works under [WINE](https://www.winehq.org/) too
### Windows x86 (32bit)
1. Clone this repo and go into its directory
2. Download `sdl2mingw32.zip` [here](https://drive.google.com/drive/folders/1uVe7oKMzCTTUeMJuHL7vqK0O2FK_pIPs?usp=drive_link)
3. Extract `sdl2mingw32.zip` in root folder of repo (make sure you put folder not contents of folder)
4. Open terminal and run `make windows32`
5. Move contents from `x86dll` folder to output folder
- You can move `output` folder out of repo folder and delete repo folder
- App will not open automatically after successful compilation
- Works under [WINE](https://www.winehq.org/) too
