OBJS = main.cpp Game_Utils.cpp Game.cpp Enemy.cpp Character.cpp Button.cpp LTexture.cpp
OBJ_NAME = main.exe
COMPILER_FLAGS = -std=c++17 
LINKER_FLAGS = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf 
INCLUDE_DIR = -IC:\SDL2\include
LIB_DIR = -LC:\SDL2\lib

compile:
	g++ $(COMPILER_FLAGS) $(INCLUDE_DIR) $(LIB_DIR) $(OBJS) $(LINKER_FLAGS) -o $(OBJ_NAME)