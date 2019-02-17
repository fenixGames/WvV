#include <event_handler.hpp>
#include <exceptions.hpp>

EventHandler::EventHandler(SDL_EventType eventType)
{
	if (eventType == SDL_QUIT)
		throw SDLException("Event type QUIT cannot be handled");
	type = eventType;
}

SDL_EventType
EventHandler::getType() {
	return type;
}

void
EventHandlerController::handleEvent(SDL_Event * ev) {
	std::list<EventHandler *>::iterator eventHandler;

	for (eventHandler = eventHandlers.begin(); eventHandler != eventHandlers.end(); eventHandler++) {
		if ((*eventHandler)->getType() == ev->type)
			(*eventHandler)->handle(ev);
	}
}