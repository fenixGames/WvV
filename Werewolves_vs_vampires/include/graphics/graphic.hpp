/**
 * Class defining abstract graphical interfaces.
 */

#ifndef GRAPHIC_HPP
#define GRAPHIC_HPP

#include <SDL.h>

class Graphic {
public:
	virtual SDL_Texture * getTexture() = 0;
};
#endif