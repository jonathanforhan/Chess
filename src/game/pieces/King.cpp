#include"King.hpp"

King::King(Window* window, int id)
    : Piece(window), identity(id)
{
    if(id == WHT_K)
        SetRect(0, 0);
    else if(id == BLK_K)
        SetRect(0, 213);
}

int King::GetID()
{
    return identity;
}

bool King::CheckMove(int x, int y)
{
    // get checker number for if soup
    int check = GetPos() - ((y * 10) + x);

    if(x == 0) {
        if(y == 0) {
            if(check == -1 || check == -10 || check == -11) {
                return true;
            }
            else {
                return false;
            }
        }
        else if(y == 7) {
            if(check == -1 || check == 9 || check == 10) {
                return true;
            }
            else {
                return false;
            }

        }
        else {
            if(check == 10 || check == -10) {
                return true;
            }
            else if(check == 9 || check == -1 || check == -11) {
                return true;
            }
            else {
                return false;
            }
        }
    }
    else if(x == 7) {
        if(y == 0) {
            if(check == 1 || check == -10 || check == -9) {
                return true;
            }
            else {
                return false;
            }
        }
        else if(y == 7) {
            if(check == 10 || check == 11 || check == 1) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            if(check == 10 || check == -10) {
                return true;
            }
            else if(check == -9 || check == 1 || check == 11) {
                return true;
            }
            else {
                return false;
            }
        }
    }
    else if(y == 0) {
        if(check == 1 || check == -1) {
            return true;
        }
        else if(check <= -9 && check >= -11) {
            return true;
        }
        else {
            return false;
        }
    }
    else if(y == 7) {
        if(check == 1 || check == -1) {
            return true;
        }
        else if(check >= 9 && check <= 11) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        if(check == 1 || check == -1) {
            return true;
        }
        else if(check >= 9 && check <= 11) {
            return true;
        }
        else if(check <= -9 && check >= -11) {
            return true;
        }
        else {
            return false;
        }
    }
}