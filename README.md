# Werewolves versus Vampires C++/libSDL
A Game based on 3 match using libSDL2

## Requirements
The libraries `libSDL2` and `yaml-cpp-0.6.2` must be installed on the system.

### Windows

#### libSDL2
Please, download libSDL2 using the following link:
https://www.libsdl.org/release/SDL2-devel-2.0.9-VC.zip

Extract everything into C:\SDL2 and copy the following items into the local 
project using the directory specified after the arrow:
```
C:\SDL2\lib\x86\SDL2.lib -> .\
C:\SDL2\lib\x86\SDL2main.lib -> .\
C:\SDL2\lib\x86\SDL2.dll -> .\lib
```

#### Yaml-cpp-0.6.2
Please, download the project from https://github.com/jbeder/yaml-cpp/archive/yaml-cpp-0.6.2.zip
And extract the content in the local directory, `CMake` will take care of everything.