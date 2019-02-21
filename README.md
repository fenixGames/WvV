# Werewolves versus Vampires C++/libSDL
A Game based on 3 match using libSDL2

## Requirements
The library `libSDL2` must be installed on the system.

### Windows

#### libSDL2
Please, download libSDL2 using the following links:
https://www.libsdl.org/release/SDL2-devel-2.0.9-VC.zip

Extract everything into C:\SDL2 and copy the following items into the local
project using the directory specified after the arrow:
```
C:\SDL2\lib\x86\SDL2.lib -> .\libSDL2
C:\SDL2\lib\x86\SDL2main.lib -> .\libSDL2
C:\SDL2\lib\x86\SDL2.dll -> .\libSDL2
```
#### libSDL2-Image

Use the following link to download the image support for libSDL
`https://www.libsdl.org/projects/SDL_image/release/SDL2_image-devel-2.0.4-VC.zip`

Extract everything into `C:\SDL2_image` and copy everything under `C:\SDL2_image\lib\x64\` into `.\libSDL2`

### FreeBSD
#### libSDL2 and libSDL2-Image

Run `pkg install -y sdl2 sdl2-image`, done.

### Linux
Use you favorite package manager to install them.
