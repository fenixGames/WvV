/**
 * Nodes are everything that forms part of a scene.
 * It can be a light, a character, a npc or a camera.
 */

#ifndef NODE_HPP
#include <SDL.h>

#include <physics/geometry.hpp>
#include <graphic.hpp>

class Node {
public:
	Point position;
	Size size;
	Graphic * graphicResource;

	Node();
};
#endif