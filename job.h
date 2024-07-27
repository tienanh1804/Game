#ifndef job_H_
#define job_H_

#include "LTexture.h"

#define ENEMY_MAX_HEIGHT 300
#define ENEMY_MIN_HEIGHT 330

#define ENEMY_POSITION_RANGE 250
#define ENEMY1_RANGE 100
#define ENEMY2_RANGE 350
#define ENEMY3_RANGE 500


class Enemy
{
public:
	Enemy(int _type = 0);
	
	~Enemy();
    //tải hình ảnh của kẻ địch từ một đường dẫn và hiển thị lên màn hình.
	void LoadFromFile(std::string path, SDL_Renderer* gRenderer);
    //để di chuyển kẻ địch với một gia tốc nhất định.
	void Move(const int& acceleration);
    //để vẽ kẻ địch lên màn hình với một khung hiện tại
	void Render(SDL_Renderer* gRenderer, SDL_Rect* currentClip = nullptr);
    //Các phương thức getter để truy xuất thông tin về loại kẻ địch, vị trí, kích thước và tốc độ của kẻ địch.
	int GetType();

	int GetSpeed(const int& acceleration);

	int GetPosX();

	int GetPosY();

	int GetWidth();

	int GetHeight();
private:
	int posX, posY;

	int eWidth, eHeight;

	int type;

	SDL_Texture *EnemyTexture;
};

#endif 
