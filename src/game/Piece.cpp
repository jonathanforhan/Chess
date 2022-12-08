#include"Piece.hpp"

Piece::Piece(Window* window)
    : texture(nullptr), window(window)
{
    // set tex as sprite map
    SetTexture(window, "../../res/pieces.png");
}

Piece::~Piece()
{
    SDL_DestroyTexture(texture);
}

void Piece::Render()
{
    SDL_Rect dst;
    if(((pos - 7) % 10) == 0)
        dst = {700, (pos / 10) * 100, 100, 100}; 
    else
        dst = {(pos % 7) * 100, (pos / 10) * 100, 100, 100};
    SDL_RenderCopy(window->GetRenderer(), texture, &rect, &dst);
}

int Piece::GetPos()
{
    return pos;
}

void Piece::Move(int x, int y)
{
    if(!CheckMove(x, y))
        return;

    SetPos(x, y);
}

void Piece::SetPos(int x, int y)
{
    pos = (y * 10) + x;
}

void Piece::SetRect(int x, int  y)
{
    rect.x = x; rect.y = y;
}

void Piece::SetTexture(Window* window, const char* filepath)
{
	this->texture = IMG_LoadTexture(window->GetRenderer(), filepath);
	if (texture == nullptr)
		throw SDL_GetError;
}

