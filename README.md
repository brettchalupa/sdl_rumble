# SDL Rumble

CLI for testing controller rumble quickly with SDL2 + [community mappings](https://github.com/gabomdq/SDL_GameControllerDB).

## macOS

- Install SDL2: `brew install sdl2`
- Compile and run: `clang -v main.cpp -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2 -o sdl_rumble && ./sdl_rumble`

### Findings

- MacOS 12.6 - Xbox One Controller - XInput - yes!
- MacOS 12.6 - DualShock 4 - yes!
- MacOS 12.6 - 8BitDo Pro2 - XInput - yes!
- MacOS 12.6 - 8BitDo Pro2 - DirectInput - no - That operation is not supported
- MacOS 12.6 - 8BitDo Pro2 - Apple/DS4 - no - That operation is not supported
- MacOS 12.6 - 8BitDo Pro2 - Switch Pro - yes (weak)

## Linux (Ubuntu)

- Install SDL2: `sudo apt install libsdl2-dev libsdl2-2.0-0`
- Compile and run: `clang -v main.cpp -lSDL2 -o sdl_rumble && ./sdl_rumble`

### Findings

- Pop_OS! 22.04 - Xbox One Controller - XInput - yes!
- Pop_OS! 22.04 - DualShock 4 - yes!
- Pop_OS! 22.04 - 8BitDo Pro2 - XInput - yes!
- Pop_OS! 22.04 - 8BitDo Pro2 - DirectInput - no - That operation is not supported
- Pop_OS! 22.04 - 8BitDo Pro2 - Apple/DS4 - not detected
- Pop_OS! 22.04 - 8BitDo Pro2 - Switch Pro - not detected
