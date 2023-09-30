#include "Game.h"
#include <iostream>

Game::Game() {}
Game::~Game() {}

void Game::Initialize()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cout << "Error initializing SDL." << std::endl;
		return;
	}

	window = SDL_CreateWindow(
		"Vision Engine",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		800,
		600,
		SDL_WINDOW_SHOWN
	);

	if (!window) {
		std::cout << "Error creating SDL window." << std::endl;
		return;
	}

	renderer = SDL_CreateRenderer(window, -1, 0);
	if (!renderer) {
		std::cout << "Error creating SDL renderer." << std::endl;
		return;
	}
}