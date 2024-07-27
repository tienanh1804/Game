class Character
{
public:
	static const int JUMP_SPEED = 5;
	static const int FALL_SPEED = 5;

	Character();
    //Kiểm tra xem nhân vật có đang ở trên mặt đất hay không.
	bool OnGround();
    //Xử lý sự kiện của nhân vật, bao gồm nhảy khi nhận sự kiện nhấn phím và phát âm thanh nhảy.
	void HandleEvent(SDL_Event& e, Mix_Chunk *gJump);
    //: Di chuyển nhân vật dựa trên trạng thái hiện tại.
	void Move();
    // Vẽ nhân vật lên màn hình với sprite và vị trí hiện tại.
	void Render(SDL_Rect* currentClip, SDL_Renderer *gRenderer, LTexture gCharacterTexture);
    //Trả về vị trí x của nhân vật.
	int GetPosX();
    //Trả về vị trí y của nhân vật.
	int GetPosY();

private:
    ////Vị trí x ,y của nhân vật trên màn hình.
	int posX, posY;

	int status;
};

#endif 
