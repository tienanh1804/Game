#include "Character.h"
// Khởi tạo vị trí ban đầu cho nhân vật.
Character::Character()
{
	posX = SCREEN_WIDTH - 700;
	posY = GROUND;

	status = 0;
}
// Kiểm tra xem nhân vật có đang đứng trên mặt đất hay không
bool Character::OnGround()
{
	return posY == GROUND;
}
// Xử lý sự kiện cho nhân vật
void Character::HandleEvent(SDL_Event& e, Mix_Chunk *gJump)
{
	if (e.type == SDL_KEYDOWN && e.key.repeat == 0)
	{
		switch (e.key.keysym.sym)
		{
			case SDLK_SPACE:
			{
				if (OnGround())
				{
					Mix_PlayChannel(MIX_CHANNEL, gJump, NOT_REPEATITIVE);
					status = JUMP;
				}
			}
		}
	}
}
// Di chuyển nhân vật trên màn hình
void Character::Move()
{
	if (status == JUMP && posY >= MAX_HEIGHT)
	{
		posY += -JUMP_SPEED;
	}
	if (posY <= MAX_HEIGHT)
	{
		status = FALL;
	}
	if (status == FALL && posY < GROUND)
	{
		posY += FALL_SPEED;
	}
}
// vẽ nhân vật lên màn hình.
void Character::Render(SDL_Rect* currentClip, SDL_Renderer *gRenderer, LTexture gCharacterTexture)
{
	gCharacterTexture.Render(posX, posY, gRenderer, currentClip);
}

int Character::GetPosX()
{
	return posX;
}

int Character::GetPosY()
{
	return posY;
}