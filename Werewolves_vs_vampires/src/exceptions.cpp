#include <SDL.h>

#include <exceptions.hpp>


SDLException::SDLException(const char * msg) {
	message = msg;
}

const char *
SDLException::what() const throw()
{
	std::string msg = message + SDL_GetError();
	return msg.c_str();
}

FileSystemError::FileSystemError(const char * msg, const char * p):
	std::runtime_error(msg)
{
	path = p;
}

const char *
FileSystemError::what() const throw()
{
	std::string msg = std::runtime_error::what();
	msg += " " + path;
	return msg.c_str();
}