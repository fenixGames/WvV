#include <scene.hpp>

Scene::Scene(SDL_Renderer * render)
{
	finished = false;
	evController = NULL;
	renderer = render;
}

bool
Scene::is_finished()
{
	return finished;
}

void
Scene::draw()
{
	std::list<Node *>::iterator node;
	SDL_Rect stretchRect;

	SDL_RenderClear(renderer);
	for (node = nodes.begin(); node != nodes.end(); node++) {
		(*node)->fillDimentions(&stretchRect);

		SDL_Texture * surface = (*node)->getTexture();
		if (surface != NULL)
			SDL_RenderCopy(renderer, surface, NULL, &stretchRect);
	}
	SDL_RenderPresent(renderer);
}
