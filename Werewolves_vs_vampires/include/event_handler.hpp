/**
 * Definitions of event handling.
 *
 * This module defines the EventHandler class and
 * the Event class also.
 */

#ifndef EVENT_HANDLER_HPP
#define EVENT_HANDLER_HPP

#include <SDL.h>
#include <list>

class EventHandler {
protected:
	SDL_EventType type;
public:
	EventHandler(SDL_EventType);

	SDL_EventType getType();
	virtual void handle(SDL_Event *) = 0;
};

class EventHandlerController {
public:
	std::list<EventHandler *> eventHandlers;

	void handleEvent(SDL_Event *);
};
#endif