/**
 * Nodes are everything that forms part of a scene.
 * It can be a light, a character, a npc or a camera.
 */

#ifndef NODE_HPP
#define NODE_HPP

#include <SDL.h>

#include <physics/geometry.hpp>
#include <graphic.hpp>

class Node {
protected:
	Graphic * graphicResource;
public:
	Point position;
	Size size;

	Node();
	Node(const Point&, const Size&);


	SDL_Surface * getSurface();
	void setGraphicResource(Graphic *);
};
#endif