#include <node.hpp>

Node::Node()
{
	graphicResource = NULL;
}

Node::Node(const Point& startPoint, const Size& startSize)
{
	position = startPoint;
	size = startSize;
	graphicResource = NULL;
}


SDL_Surface *
Node::getSurface()
{
	if (graphicResource != NULL)
		return graphicResource->getPrintingSurface();
	return NULL;
}

void
Node::setGraphicResource(Graphic * resource) {
	graphicResource = resource;
}