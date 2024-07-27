# Gamevui

1, Ý tưởng :
   + Lấy ý tưởng từ game khủng long khi máy tính mất mạng.
   + Tạo một trò chơi để cho người dùng trải nghiệm cách để di chuyển nhân vật.
 
 
2, Tại sao chọn game :
   + Vì game gắn liền với tuổi thơ của mỗi người khi mát tính mất mạng.
   + Vì yêu thích game.
   
3, Cách chạy chương trình :
   + Có thể cài Visual Studio Code hoặc cài CodeBlock.
   
   OBJS = main.cpp Game_Utils.cpp Game_Base.cpp Enemy.cpp Character.cpp Button.cpp LTexture.cpp
   OBJ_NAME = main.exe
   COMPILER_FLAGS = -std=c++17 
   LINKER_FLAGS = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf 
   INCLUDE_DIR = -IC:\SDL2\include
   LIB_DIR = -LC:\SDL2\lib

   compile:
	   g++ $(COMPILER_FLAGS) $(INCLUDE_DIR) $(LIB_DIR) $(OBJS) $(LINKER_FLAGS) -o $(OBJ_NAME)
     
4, Cách chơi :
    + Dùng phím SPACE để chú khung long nhảy vượt qua chướng ngại vật.
    + Điểm số sẽ được ghi lại với số điểm cao nhất mà mình đạt được.
    
5, Đề xuất hướng cải tạo :
    + Làm game có thể ăn vàng để thú vị hơn.
    + Có thể làm nhiểu nhân vật và nhiều cấp độ level hơn.
