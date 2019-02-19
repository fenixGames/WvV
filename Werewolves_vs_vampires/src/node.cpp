#include <node.hpp>

Node::Node() : Node(Point(0, 0), Size(0, 0))
{
}

Node::Node(const Point& startPoint, const Size& startSize)
{
	position = startPoint;
	size = startSize;
	graphicResource = NULL;
	this->parent = NULL;
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

void 
Node::fillDimentions(SDL_Rect *rect) {
	Node * root = this;

	rect->w = (int)this->size.width;
	rect->h = (int)this->size.height;

	rect->x = rect->y = 0;
	while (root != NULL) {
		rect->x += (int)root->position.x;
		rect->y += (int)root->position.y;
		root = root->parent;
	}
}