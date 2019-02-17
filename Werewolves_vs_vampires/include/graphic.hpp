/**
 * Class defining abstract graphical interfaces.
 */

#ifndef GRAPHIC_HPP
#define GRAPHIC_HPP

#include <SDL.h>

class Graphic {
protected:
	SDL_Surface * surface;
public:
	Graphic();
	~Graphic();
	virtual SDL_Surface * getPrintingSurface() = 0;
};
#endif