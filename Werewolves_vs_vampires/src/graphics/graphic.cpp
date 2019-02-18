#include <graphics/graphic.hpp>

Graphic::Graphic()
{
	surface = NULL;
}

Graphic::~Graphic()
{
	if (surface != NULL)
		SDL_FreeSurface(surface);
}