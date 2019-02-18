/**
 * Class defining abstract graphical interfaces.
 */

#ifndef GRAPHIC_HPP
#define GRAPHIC_HPP

#include <SDL.h>

class Graphic {
protected:
	SDL_Texture * texture;
public:
	Graphic();
	~Graphic();

	virtual SDL_Texture * getTexture() = 0;
};
#endif