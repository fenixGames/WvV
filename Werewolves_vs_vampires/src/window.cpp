#include <window.hpp>
#include <exceptions.hpp>

Window::Window(int width, int height, std::string title) {
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
		throw SDLException("SDL Inititalization failed");

	window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
	if (window == NULL)
		throw SDLException("Unable to create Window");

	windowSurface = SDL_GetWindowSurface(window);
}

Window::~Window() {
	SDL_DestroyWindow(window);
}

void
Window::draw() {
	SDL_FillRect(windowSurface, NULL,
		SDL_MapRGB(windowSurface->format, 0xFF, 0xFF, 0xFF));
	SDL_UpdateWindowSurface(window);
}