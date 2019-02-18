#include <graphics/graphic.hpp>

Graphic::Graphic()
{
	texture = NULL;
}

Graphic::~Graphic()
{
	if (texture != NULL)
		SDL_DestroyTexture(texture);
}