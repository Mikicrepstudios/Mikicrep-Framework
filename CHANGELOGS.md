## [[1.7.0] Mikicrep Framework](https://miki.macakom.net/projects/mf)
### New update just released!

## Added:
- `window.fpsAdv.realFPS` which is used to get real window fps
- `files::lsDir()` - function that lets you list contents of some directory and return it as std::vector

## Removed:

## Changed:
- Button hover effect is now weaker
- Now you have to remove all window logic under `# Finish frame` and replace it with `core::PostWindowLogic(window);`
- `draw::DrawLine()` now requires thickness and color argument
- `draw::DrawButton()` and `logic::isMouseTouching()` no longer takes `int mouseX, mouseY` instead it now takes `MF_Window::Mouse` (`window.mouse`)