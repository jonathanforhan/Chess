#include"EventHandler.hpp"

EventHandler::EventHandler(std::map<piece_list, Piece*>* pieces)
    : pieces(pieces)
{
}

int EventHandler::ClickCheck(int pos)
{
    for (auto& piece : *pieces)
    {
        if(pos == piece.second->GetPos())
        {
            return piece.second->GetID();
        }
    }
    return 0;
}

bool EventHandler::MoveCheck(int pos)
{
    
}

bool EventHandler::CaptureCheck()
{

}