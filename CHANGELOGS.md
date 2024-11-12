## [[1.3.0] Mikicrep Framework](https://miki.macakom.net/projects/mf)
### New update just released!

## Added:
- Core:
- - isMouseDown variable which is true when mouse button is held and off when its released
- - Window is now resizable
- - Window can now be fullscreened
- - Exit function to free up RAM before closing game

## Removed:

## Changed:
- Graphics:
- - DrawText() function now requires MF_Color instead of SDL_Color
- - Colors no longer have general and text subcategory (you cant type anymore colors::general::red instead you do just colors::red)
- - Gray color is now more grayish