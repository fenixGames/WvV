/**
 * Class defining image loading for sprites
 */

#ifndef SPRITE_HPP
#include <SDL.h>
#include <graphic.hpp>

class Sprite : public Graphic {
public:
	Sprite(const char * path_to_sprite);

	virtual SDL_Surface * getPrintingSurface();
};
#endif