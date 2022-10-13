#include <SFML/Graphics.hpp>
#include "Game.h"

int main()
{
    Game doom(60,320,240,"Doom");
    doom.initialize();
    while (doom.isRunning) {
        doom.getInput();
        doom.update();
        doom.draw();
    }
    return 0;
}