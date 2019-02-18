/**
 * Scene management.
 */

#ifndef SCENE_HPP
#define SCENE_HPP

#include <list>

#include <SDL.h>

#include <node.hpp>
#include <event_handler.hpp>

class Scene {
protected:
	bool finished;
	EventController * evController;
public:
	std::list<Node *> nodes;

	Scene();
	bool is_finished(void);
	void draw(SDL_Surface *);

	void setEventHandlerController(EventController *);
};

#endif