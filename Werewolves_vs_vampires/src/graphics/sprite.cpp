#include <fstream>

#include <SDL_image.h>

#include <graphics/sprite.hpp>
#include <exceptions.hpp>

Sprite::Sprite(const char * path_to_file, SDL_Renderer * renderer) {
	std::ifstream file(path_to_file);
	SDL_Surface * image;

	if (!file.good())
		throw FileSystemError("Sprite do not found", path_to_file);

	image = IMG_Load(path_to_file);
	if (image == NULL) {
		std::string msg = "Could not load sprite ";
		msg += path_to_file;
		msg += " ";
		msg += IMG_GetError();
		throw SDLException(msg.c_str());
	}

	texture = SDL_CreateTextureFromSurface(renderer, image);
	if (texture == NULL) {
		std::string msg = "Could not optimize sprite ";
		msg += path_to_file;
		throw SDLException(msg.c_str());
	}
	SDL_FreeSurface(image);
}

SDL_Texture *
Sprite::getTexture() {
	return texture;
}