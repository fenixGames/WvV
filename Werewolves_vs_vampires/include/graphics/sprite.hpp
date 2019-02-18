/**
 * Class defining image loading for sprites
 */

#ifndef SPRITE_HPP
#define SPRITE_HPP
#include <SDL.h>

#include <graphics/graphic.hpp>

class Sprite : public Graphic {
public:
	Sprite(const char * path_to_sprite, SDL_Renderer *);

	virtual SDL_Texture * getTexture();
};
#endif