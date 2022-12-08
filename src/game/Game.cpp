#include"Game.hpp"

Game::Game()
{
	if (SDL_Init(SDL_INIT_VIDEO) > 0)
		throw SDL_GetError();
	if (!IMG_Init(IMG_INIT_PNG))
		throw SDL_GetError();
}

Game::~Game()
{
	for (auto& piece : pieces)
	{
		piece.second->DeleteSelf();
	}
}

void Game::Run()
{
	// convert from window coords to pos
	auto to_pos = [](int x, int y){ return (((y - 1) / 100) * 10) + ((x - 1) / 100); };
	auto to_x = [](int x){ return (x - 1) / 100; };
	auto to_y = [](int y){ return (y - 1) / 100; };

	SDL_Event event;

	pieces.emplace(BLK_K, new King(&window, BLK_K));
	pieces.find(BLK_K)->second->SetPos(4, 0);
	pieces.emplace(WHT_K, new King(&window, WHT_K));
	pieces.find(WHT_K)->second->SetPos(4, 7);

	bool drag{};
	int x{};
	int y{};

	while (1)
	{
		while (SDL_WaitEvent(&event))
		{
			SDL_GetMouseState(&x, &y);
			switch (event.type)
			{
			case SDL_QUIT:
				SDL_Quit();
				return;
			case SDL_MOUSEBUTTONDOWN:
				/*if(eventHandler.ClickCheck(x, y))
				{
					drag = true;
					current_piece = eventHandler.PieceCheck(x, y);
				}*/
			case SDL_MOUSEBUTTONUP:
				/*if(eventHandler.MoveCheck(x, y) != false)
				{
					int mx = x / 800;
					int my = y / 800;
					current_piece->Move(mx, my);

					if(eventHandler.CaptureCheck(x, y))
						current_piece = delete;
				}*/
				drag = false;
			default:
				break;
			}

			//eventHandler.Drag(drag, current_piece);

			window.Clear(255, 255, 255);
			board.Render();
			
			for(auto& piece : pieces)
			{
				piece.second->Render();
			}

			window.Display();
		}
	}
}