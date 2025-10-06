## [[1.7.0] Mikicrep Framework](https://miki.macakom.net/projects/mf)
### New update just released!

## Added:
- `draw::DrawLine()` now requires thickness and color argument
- `window.fpsAdv.realFPS` which is used to get real window fps

## Removed:

## Changed:
- Button hover effect is now weaker
- Now you have to remove all window logic under `# Finish frame` and replace it with `core::PostWindowLogic(window);`