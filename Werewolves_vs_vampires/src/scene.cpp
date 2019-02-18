#include <scene.hpp>

Scene::Scene()
{
	finished = false;
	evController = NULL;
}

bool
Scene::is_finished()
{
	return finished;
}

void
Scene::draw(SDL_Surface * window)
{
	std::list<Node *>::iterator node;

	for (node = nodes.begin(); node != nodes.end(); node++) {
		SDL_Surface * surface = (*node)->getSurface();
		if (surface != NULL)
			SDL_BlitSurface(surface, NULL, window, NULL);
	}
}

void
Scene::setEventHandlerController(EventController * controller) {
	evController = controller;
}

void
Scene::setQuitter(QuitHandler *quitHandler)
{
	if (evController == NULL)
		return;

	if (!evController->isEventHandlerAdded(SDL_QUIT))
		evController->addEventHandler(quitHandler);
}