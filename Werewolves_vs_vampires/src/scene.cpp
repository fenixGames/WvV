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
	SDL_Rect stretchRect;

	for (node = nodes.begin(); node != nodes.end(); node++) {
		stretchRect.x = (*node)->position.x;
		stretchRect.y = (*node)->position.y;
		stretchRect.w = (*node)->size.width;
		stretchRect.h = (*node)->size.height;

		SDL_Surface * surface = (*node)->getSurface();
		if (surface != NULL)
			SDL_BlitScaled(surface, NULL, window, &stretchRect);
	}
}
