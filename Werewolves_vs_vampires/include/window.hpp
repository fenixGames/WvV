/**
 * Configuration and prototypes regarding the window.
 */

#ifndef WINDOW_H
#define WINDOW_H
#include <string>
#include <list>

#include <SDL.h>

#include <scene.hpp>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGTH = 480;

class Window {
private:
	SDL_Surface * windowSurface;
	SDL_Window * window;
	std::list<Scene *>::iterator itScenes;

	Scene * getCurrentScene();
	
public:
	std::list<Scene *> sceneList;

	Window(int, int, std::string);
	~Window();

	void draw(void);
	void start();

	const SDL_Surface * getSurface() const;
};
#endif