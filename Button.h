#ifndef BUTTON_H_
#define BUTTON_H_

#include "Game.h"
#include "LTexture.h"

class Button
{
public:
	ButtonSprite currentSprite;
    //Constructor mặc định không tham số.
	Button();
    //Constructor với tham số để thiết lập vị trí ban đầu của nút.
	Button(int x, int y);
    //Thiết lập vị trí mới cho nút.
	void SetPosition(int x, int y);
    // Kiểm tra xem sự kiện chuột có diễn ra bên trong nút hay không. Tham số size được sử dụng để xác định kích thước của nút.
	bool IsInside(SDL_Event *e, int size);
    //Vẽ nút lên màn hình với sprite và vị trí hiện tại.
	void Render(SDL_Rect* currentClip, SDL_Renderer* gRenderer, LTexture gButtonTexture);

private:
	SDL_Point position;
};

#endif 
