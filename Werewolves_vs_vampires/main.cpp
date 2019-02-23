#include <iostream>
#include <SDL.h>

#include <graphics/sprite.hpp>
#include <node.hpp>
#include <scene.hpp>
#include <window.hpp>


const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGTH = 480;


int main(int argc, char * argv[])
{
	Window win(SCREEN_WIDTH, SCREEN_HEIGTH, "SDL Tutorial");
	Scene first;
	Viewport vp1(Point(), Point(), Size(SCREEN_WIDTH, SCREEN_HEIGTH / 2), win.getRenderer());
	Viewport vp2(Point(), Point(0.0, SCREEN_HEIGTH / 2), Size(SCREEN_WIDTH, SCREEN_HEIGTH / 2), win.getRenderer());
	Node label1(Point(), Size(SCREEN_WIDTH, SCREEN_HEIGTH / 2));
	Node label2(Point(0.0, SCREEN_HEIGTH /2), Size(SCREEN_WIDTH, SCREEN_HEIGTH / 2));
	Sprite * sprite1 = new Sprite("resources/hello_world.png", Color(0xFFFFFF), win.getRenderer());
	EventController * evController = new EventController();

	evController->addEventHandler(new QuitHandler());
	first.setRenderer(win.getRenderer());
	
	label1.setGraphicResource((Graphic*)sprite1);
	label2.setGraphicResource((Graphic *)sprite1);
	first.addViewport(&vp1);
	first.addViewport(&vp2);
	first.nodes.push_back(&label1);
	first.nodes.push_back(&label2);
	first.evController = evController;
	win.sceneList.push_back(&first);
	win.start();
	
	return 0;
}

