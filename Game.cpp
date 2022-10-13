#include "Game.h"


Game::Game()
{
	Game::frameRate = 60;
	Game::width = 640;
	Game::height = 480;
	Game::gameName = "Game!";
}

Game::Game(int _fr, int _w, int _h, std::string _name) {
	Game::frameRate = _fr;
	Game::width = _w;
	Game::height = _h;
	Game::gameName = _name;
}


Game::~Game()
{

}

void Game::initialize()
{
	Game::window.create (sf::VideoMode(Game::width, Game::height), Game::gameName);
	Game::window.setFramerateLimit(Game::frameRate);
	
	if (window.isOpen()) {
		Game::isRunning = true;
	}

	
}

void Game::getInput()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed) {
			isRunning = false;
			window.close();
		}
			
	}
}

void Game::update()
{
	window.clear();
	Game::draw();
	window.display();

}

void Game::draw()
{


}
