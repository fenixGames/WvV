/**
 * Configuration and prototypes regarding the window.
 */

#ifndef WINDOW_H
#include <physics/geometry.hpp>
#include <string>
#include <SDL.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGTH = 480;

class Window {
protected:
	SDL_Surface * window_surface;
	SDL_Window * window;
public:
	Window(int, int, std::string);
	~Window();

	void draw(void);
};
#endif