#ifndef LTEXTURE_H_
#define LTEXTURE_H_

#include "Game.h"
// quản lí hình ảnh và hiển thị lên màn hình
class LTexture
{
public:
	LTexture();

	~LTexture();
    //giải phóng bộ nhớ và thiết lập lại các giá trị của đối tượng LTexture.
	void Free();
    //tải hình ảnh từ văn bản đã cho, sử dụng một phông chữ, màu văn bản .
	bool LoadFromRenderedText(std::string textureText, TTF_Font* gFont, SDL_Color textColor, SDL_Renderer* gRenderer);
    // tải hình ảnh từ tệp
	bool LoadFromFile(std::string path, SDL_Renderer *gRenderer);
    //hiển thị hình ảnh trên màn hình tại vị trí x, y
	void Render(int x, int y, SDL_Renderer* gRenderer, SDL_Rect* clip = nullptr);
    //chiều rộng.
	int GetWidth();
    //chiều cao.
	int GetHeight();
    
private:
	SDL_Texture* mTexture;

	int mWidth;
	int mHeight;
};

#endif 
