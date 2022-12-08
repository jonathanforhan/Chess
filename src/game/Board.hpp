#pragma once
#include"Common.h"
#include"Window.hpp"

class Board
{
public:
	Board(Window* window);
	~Board();

	void SetTexture(Window* window, const char* filepath);
	void Render();

private:

	SDL_Texture* texture;
	SDL_Rect* rect;
	Window* window;
};