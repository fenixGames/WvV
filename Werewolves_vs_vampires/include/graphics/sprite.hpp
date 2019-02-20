/**
 * Class defining image loading for sprites
 */

#ifndef SPRITE_HPP
#define SPRITE_HPP
#include <SDL.h>

#include <graphics/graphic.hpp>

class Sprite : public Graphic {
protected:
	SDL_Texture * texture;

public:
	Sprite(const char * path_to_sprite, Color&, SDL_Renderer *);
	~Sprite();

	virtual SDL_Texture * getTexture();
};
#endif