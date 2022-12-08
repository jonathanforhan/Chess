#include"Window.hpp"

Window::Window(const char* title, int width, int height)
	: window(nullptr), renderer(nullptr)
{
	window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
	if (window == nullptr)
		throw SDL_GetError;

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == nullptr)
		throw SDL_GetError;
}

Window::~Window()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}

void Window::Clear(uint8_t r, uint8_t g, uint8_t b)
{
	SDL_RenderClear(renderer);
	SDL_SetRenderDrawColor(renderer, r, g, b, 255);
}

void Window::Render(SDL_Texture* tex, SDL_Rect* rect)
{
	SDL_RenderCopy(renderer, tex, NULL, rect);
}

void Window::Display()
{
	SDL_RenderPresent(renderer);
}