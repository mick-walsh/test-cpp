#include <iostream>
#include <Game.h>

int main(int argc, char** argv)
{
	auto game = new Game();
	game->Initialize();
	delete game;

	std::cout << "Hello, world" << std::endl;
	return 0;
}