#include"Board.hpp"

Board::Board(Window* window)
	: texture(nullptr), rect(nullptr), window(window)
{
	SetTexture(window, "../../res/board.png");
}

Board::~Board()
{
	SDL_DestroyTexture(texture);
}

void Board::SetTexture(Window* window, const char* filepath)
{
	this->texture = IMG_LoadTexture(window->GetRenderer(), filepath);
	if (texture == nullptr)
		throw SDL_GetError;
}

void Board::Render()
{
	window->Render(texture, rect);
}