#include <iostream>
#include <SDL.h>
#include "config/config.hpp"
using namespace std;

int main(int argc, char * argv[])
{
	SDL_Window * window = NULL;
	SDL_Surface * screen_surface = NULL;

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		cout << "SDL initialization failed. SDL Error: " << SDL_GetError();
		exit(1);
	}
	
	window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGTH, SDL_WINDOW_SHOWN);
	if (window == NULL) {
		cout << "Window could not be created -> SDL Error: " << SDL_GetError();
		exit(1);
	}

	screen_surface = SDL_GetWindowSurface( window );
	SDL_FillRect(screen_surface, NULL, SDL_MapRGB(screen_surface->format, 0xFF, 0xFF, 0xFF));

	SDL_UpdateWindowSurface(window);

	SDL_Delay(2000);

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}

