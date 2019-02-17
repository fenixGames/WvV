/**
 * Scene management.
 */

#ifndef SCENE_HPP
#include <list>

#include <node.hpp>

class Scene {
protected:
	bool finished;
public:
	std::list<Node *> nodes;

	bool is_finished(void);
	void draw(void);
};

#endif