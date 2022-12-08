#pragma once
#include"../Common.h"
#include"../Piece.hpp"

class King : public Piece
{
public:
    King(Window* window, int id);

    int GetID() override;
    void Render() override {
        Piece::Render();
    }
private:
    bool CheckMove(int x, int y) override;

    int identity = 0;
};