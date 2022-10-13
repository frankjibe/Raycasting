#pragma once
#include <SFML/Graphics.hpp>
#include <string>



class Game
{
public:
	Game();
	Game(int _fr, int _w, int _h, std::string _name);
	~Game();

	void initialize();
	void getInput();
	void update();
	void draw();
	bool isRunning = false;

private:
	int frameRate;
	int width;
	int height;
	std::string gameName;
	sf::RenderWindow window;

};

