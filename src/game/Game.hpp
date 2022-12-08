#pragma once
#include"Common.h"
#include"Window.hpp"
#include"Board.hpp"
#include"pieces/King.hpp"
#include"pieces/Queen.hpp"
#include"pieces/Bishop.hpp"
#include"pieces/Knight.hpp"
#include"pieces/Rook.hpp"
#include"pieces/Pawn.hpp"
#include<memory>
#include<map>
#include<iterator>

class Game
{
public:
	Game();
	~Game();

	void Run();

private:
	Window window = Window("Chess", WIDTH, HEIGHT);
	Board board = Board(&window);

	std::map<piece_list, Piece*> pieces;
};