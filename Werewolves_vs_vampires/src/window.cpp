#include <window.hpp>
#include <exception>

class SDLException : public std::exception {
protected:
	std::string message;
public:
	SDLException(const char * msg) {
		message = msg;
	}
	virtual const char * what() const throw() {
		std::string msg = message + SDL_GetError();
		return msg.c_str();
	}
};

Window::Window(int width, int height, std::string title) {
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
		throw SDLException("SDL Inititalization failed");

	window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
	if (window == NULL)
		throw SDLException("Unable to create Window");

	window_surface = SDL_GetWindowSurface(window);
}

Window::~Window() {
	SDL_DestroyWindow(window);
}

void
Window::draw() {
	SDL_FillRect(window_surface, NULL,
		SDL_MapRGB(window_surface->format, 0xFF, 0xFF, 0xFF));
	SDL_UpdateWindowSurface(window);
}