#pragma once
#include"Common.h"
#include"Window.hpp"
#include<vector>

class Piece
{
public:
	Piece(Window* window);
	~Piece();

	virtual void Render();

	virtual void Move(int x, int y); // checks if move is valid
	void SetPos(int x, int y); // does not check if move it valid

	int GetPos();
	virtual int GetID() {return -1;};

	void DeleteSelf(){ delete(this); }

protected:
	virtual bool CheckMove(int x, int y) {return -1;};
	virtual void SetRect(int x, int  y);

private:
	void SetTexture(Window* window, const char* filepath);
	SDL_Texture* texture;
	SDL_Rect rect = {0, 0, 213, 213};
	int pos; // 00 - 77
	Window* window;
	std::vector<int> adj; // edges for bfs
};