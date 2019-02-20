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
Scene::draw()
{
	std::list<Viewport *>::iterator itViews;
	SDL_Rect stretchRect;

	for (itViews = this->viewports.begin(); itViews != this->viewports.end(); itViews++) {
		(*itViews)->renderNodes(&this->nodes);
	}
	
}

void
Scene::addViewport(Viewport *viewport) {
	this->viewports.push_back(viewport);
}
