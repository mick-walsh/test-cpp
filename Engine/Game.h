#pragma once
#include <SDL.h>

class __declspec(dllexport) Game
{
private:
	SDL_Window* window;
	SDL_Renderer* renderer;

public:
	Game();
	~Game();

	void Initialize();
};

