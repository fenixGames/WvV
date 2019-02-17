#include <graphic.hpp>

Graphic::~Graphic()
{
	SDL_FreeSurface(surface);
}