#include <iostream>
#include <SDL.h>

#include <sprite.hpp>
#include <node.hpp>
#include <scene.hpp>
#include <window.hpp>


int main(int argc, char * argv[])
{
	Window win(SCREEN_WIDTH, SCREEN_HEIGTH, "SDL Tutorial");
	Scene first;
	Node label;
	Sprite * sprite = new Sprite("resources/hello_world.bmp");
	EventController * evController = new EventController();

	evController->addEventHandler(new QuitHandler());
	
	label.setGraphicResource((Graphic*)sprite);
	first.nodes.push_back(&label);
	first.evController = evController;
	win.sceneList.push_back(&first);
	win.start();
	
	return 0;
}

