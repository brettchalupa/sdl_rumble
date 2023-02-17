# SDL Rumble

CLI for testing controller rumble quickly with SDL2 + [community mappings](https://github.com/gabomdq/SDL_GameControllerDB).

## macOS

- Install SDL2: `brew install sdl2`
- Compile and run: `clang -v main.cpp -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2 -o sdl_rumble && ./sdl_rumble`

## Findings

- MacOS 12.6 - 8BitDo Pro2 - XInput - yes!
- MacOS 12.6 - 8BitDo Pro2 - DirectInput - no - That operation is not supported
- MacOS 12.6 - 8BitDo Pro2 - Apple/DS4 - no - That operation is not supported
- MacOS 12.6 - 8BitDo Pro2 - Switch Pro - yes (weak)
- MacOS 12.6 - Xbox One Controller - XInput - yes!
