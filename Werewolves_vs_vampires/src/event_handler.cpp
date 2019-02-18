#include <event_handler.hpp>
#include <exceptions.hpp>

EventHandler::EventHandler(SDL_EventType eventType)
{
	type = eventType;
}

SDL_EventType
EventHandler::getType() {
	return type;
}

void
EventHandlerController::addEventHandler(EventHandler * eventHandler) {
	std::list<EventHandler *>::iterator iteratorEvents;

	for (iteratorEvents = eventHandlers.begin(); iteratorEvents != eventHandlers.end(); iteratorEvents++) {
		if ((*iteratorEvents)->getType() == eventHandler->getType()) {
			std::string msg("Event Handler already allocated: ");
			msg += eventHandler->getType();

			throw std::invalid_argument(msg);
		}
	}
	eventHandlers.push_back(eventHandler);
}

void
EventHandlerController::handleEvents() {
	SDL_Event ev;
	std::list<EventHandler *>::iterator iteratorEvents;

	while (SDL_PollEvent(&ev)) {
		for (iteratorEvents = eventHandlers.begin(); iteratorEvents != eventHandlers.end(); iteratorEvents++) {
			if ((*iteratorEvents)->getType() == ev.type)
				(*iteratorEvents)->handle(&ev);
		}
	}
}

QuitHandler::QuitHandler(SDL_EventType eventType, callbackFunc quitFunc):
	EventHandler(eventType)
{
	quitCallback = quitFunc;
}

void
QuitHandler::handle(SDL_Event * ev)
{
	(*quitCallback)();
}