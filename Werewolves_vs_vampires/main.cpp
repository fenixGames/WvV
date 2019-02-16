#include <iostream>
#include <SDL.h>
#include <window.hpp>
using namespace std;

int main(int argc, char * argv[])
{
	Window win(SCREEN_WIDTH, SCREEN_HEIGTH, "SDL Tutorial");

	win.draw();
	SDL_Delay(2000);
	return 0;
}

