#pragma once
#include"Common.h"

class Window
{
public:
	Window(const char* title, int width, int height);
	~Window();

	void Clear(uint8_t r, uint8_t g, uint8_t b);
	void Render(SDL_Texture* tex, SDL_Rect* rect);
	void Display();

	SDL_Renderer* GetRenderer() { return renderer; };
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};