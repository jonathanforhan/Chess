#pragma once
#include"Common.h"
#include"Piece.hpp"
#include<memory>
#include<map>

class EventHandler
{
public:
    EventHandler(std::map<piece_list, Piece*>* pieces);

    int ClickCheck(int pos);
    bool MoveCheck(int pos);
    bool CaptureCheck();


private:
	std::map<piece_list, Piece*>* pieces;
};