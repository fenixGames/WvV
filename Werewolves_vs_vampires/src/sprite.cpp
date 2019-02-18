#include <fstream>

#include <sprite.hpp>
#include <exceptions.hpp>

Sprite::Sprite(const char * path_to_file, SDL_PixelFormat * format) {
	std::ifstream file(path_to_file);
	SDL_Surface * image;

	if (!file.good())
		throw FileSystemError("Sprite do not found", path_to_file);

	image = SDL_LoadBMP(path_to_file);
	if (image == NULL) {
		std::string msg = "Could not load sprite ";
		msg += path_to_file;
		throw SDLException(msg.c_str());
	}

	surface = SDL_ConvertSurface(image, format, 0);
	if (surface == NULL) {
		std::string msg = "Could not optimize sprite ";
		msg += path_to_file;
		throw SDLException(msg.c_str());
	}
	SDL_FreeSurface(image);
}

SDL_Surface *
Sprite::getPrintingSurface() {
	return surface;
}