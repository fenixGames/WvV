#include <sprite.hpp>
#include <fstream>
#include <exceptions.hpp>

Sprite::Sprite(const char * path_to_file) {
	std::ifstream file(path_to_file);

	if (!file.good())
		throw FileSystemError("Sprite do not found", path_to_file);

	surface = SDL_LoadBMP(path_to_file);
	if (surface == NULL) {
		std::string msg = "Could not load sprite";
		msg += path_to_file;
		throw SDLException(msg.c_str());
	}
}

SDL_Surface *
Sprite::getPrintingSurface()
{
	return surface;
}