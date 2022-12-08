add_library(gamelib STATIC
            Common.c
            Window.cpp
            Piece.cpp
                pieces/King.cpp
                pieces/Queen.cpp
                pieces/Rook.cpp
                pieces/Bishop.cpp
                pieces/Knight.cpp
                pieces/Pawn.cpp
            Board.cpp
            Game.cpp)

include_directories("SDL2_INCLUDE_DIRS")
target_link_libraries(gamelib ${SLD2_LIBRARIES} libSDL2.dll.a libSDL2_image.dll.a)
target_include_directories(gamelib PUBLIC "./")