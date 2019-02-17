#include <node.hpp>

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
		graphicResource->getPrintingSurface();
}