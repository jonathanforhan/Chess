#pragma once

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

#define WIDTH 800
#define HEIGHT 800

enum piece_list {
// --BLACK-- //

// pawns
	BLK_P0,
	BLK_P1,
	BLK_P2,
	BLK_P3,
	BLK_P4,
	BLK_P5,
	BLK_P6,
	BLK_P7,
// knights
	BLK_N0,
	BLK_N1,
// bishops
	BLK_B0,
	BLK_B1,
// rooks
	BLK_R0,
	BLK_R1,
// king and queen
	BLK_Q,
	BLK_K,

// --WHITE-- //

// pawns
	WHT_P0,
	WHT_P1,
	WHT_P2,
	WHT_P3,
	WHT_P4,
	WHT_P5,
	WHT_P6,
	WHT_P7,
// knights
	WHT_N0,
	WHT_N1,
// bishops
	WHT_B0,
	WHT_B1,
// rooks
	WHT_R0,
	WHT_R1,
// king and queen
	WHT_Q,
	WHT_K,
};