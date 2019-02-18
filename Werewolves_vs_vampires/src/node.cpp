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


SDL_Texture *
Node::getTexture()
{
	if (graphicResource != NULL)
		return graphicResource->getTexture();
	return NULL;
}

void
Node::setGraphicResource(Graphic * resource) {
	graphicResource = resource;
}