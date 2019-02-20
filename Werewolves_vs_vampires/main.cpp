#include <iostream>
#include <SDL.h>

#include <graphics/sprite.hpp>
#include <node.hpp>
#include <scene.hpp>
#include <window.hpp>


int main(int argc, char * argv[])
{
	Window win(SCREEN_WIDTH, SCREEN_HEIGTH, "SDL Tutorial");
	Scene first;
	Viewport vp(Point(), Point(), Size(SCREEN_WIDTH, SCREEN_HEIGTH), win.getRenderer());
	Node label(Point(), Size(SCREEN_WIDTH, SCREEN_HEIGTH));
	Sprite * sprite = new Sprite("resources/hello_world.png", Color(0xFFFFFF), win.getRenderer());
	EventController * evController = new EventController();

	evController->addEventHandler(new QuitHandler());
	
	label.setGraphicResource((Graphic*)sprite);
	first.addViewport(&vp);
	first.nodes.push_back(&label);
	first.evController = evController;
	win.sceneList.push_back(&first);
	win.start();
	
	return 0;
}

