#ifndef uet_H_
#define uet_H_

#include "Game.h"
#include "Button.h"
#include "job.h"
#include "Character.h"
//Khởi tạo các thành phần cần thiết cho trò chơi.
bool Init();
//Tải các tài nguyên đồ họa và âm thanh cần thiết cho trò chơi
bool LoadMedia();
//Giải phóng tài nguyên và dọn dẹp trước khi kết thúc chương trình.
void Close();
using namespace std;
// Đọc điểm cao nhất từ một tệp tin và trả về dưới dạng một chuỗi.
string GetHighScoreFromFile(string path);
//Cập nhật điểm cao nhất trong tệp tin dựa trên điểm số hiện tại.
void UpdateHighScore(string path,const int& score, const string& old_high_score);
// Cập nhật thời gian chơi, tốc độ và điểm số của trò chơi.
int UpdateGameTimeAndScore(int& time, int& speed, int& score);
//Vẽ hình nền cuộn của trò chơi.
void RenderScrollingBackground(vector <double>& offsetSpeed,
    LTexture(&gBackgroundTexture)[BACKGROUND_LAYER],
    SDL_Renderer* gRenderer);
// Vẽ mặt đất cuộn của trò chơi.
void RenderScrollingGround(int& speed,
    const int acceleration,
    LTexture gGroundTexture,
    SDL_Renderer* gRenderer);
// xử lý xự kiện
void HandlePlayButton(SDL_Event* e,
    Button& PlayButton,
    bool& QuitMenu,
    bool& Play,
    Mix_Chunk* gClick);
// xử lý xự kiện
void HandleHelpButton(SDL_Event* e,
    SDL_Rect(&gBackButton)[BUTTON_TOTAL],
    Button& HelpButton,
    Button& BackButton,
    LTexture gInstructionTexture,
    LTexture gBackButtonTexture,
    SDL_Renderer* gRenderer,
    bool& Quit_game,
    Mix_Chunk* gClick);
// xử lý xự kiện
void HandleExitButton(SDL_Event* e,
    Button& ExitButton,
    bool& Quit,
    Mix_Chunk* gClick);
// xử lý xự kiện
void HandleContinueButton(Button ContinueButton,
    LTexture gContinueButtonTexture,
    SDL_Event* e,
    SDL_Renderer* gRenderer,
    SDL_Rect(&gContinueButton)[BUTTON_TOTAL],
    bool& Game_State, Mix_Chunk* gClick);
// xử lý xự kiện
void HandlePauseButton(SDL_Event* e,
    SDL_Renderer* gRenderer,
    SDL_Rect(&gContinueButton)[BUTTON_TOTAL],
    Button& PauseButton,
    Button ContinueButton,
    LTexture gContinueButtonTexture,
    bool& game_state,
    Mix_Chunk* gClick);
// tạo chướng ngại vật cho trò chơi
void GenerateEnemy(Enemy& enemy1,
    Enemy& enemy2,
    Enemy& enemy3,
    SDL_Rect(&gEnemyClips)[FLYING_FRAMES],
    SDL_Renderer* gRenderer);
// hàm kiểm tra va chạm giữa nhân vật và chướng ngại vật
bool CheckColission(Character character,
    SDL_Rect* char_clip,
    Enemy enemy,
    SDL_Rect* enemy_clip = nullptr);
// hàm kiểm tra va chạm giữa nhân vật và tất cả chướng ngại vật
bool CheckEnemyColission(Character character,
    Enemy enemy1,
    Enemy enemy2,
    Enemy enemy3,
    SDL_Rect* char_clip,
    SDL_Rect* enemy_clip = nullptr);
// Điều khiển các khung hình của nhân vật và chướng ngại vật.
void ControlCharFrame(int& frame);
// Điều khiển các khung hình của nhân vật và chướng ngại vật.
void ControlEnemyFrame(int& frame);
//Vẽ điểm số và điểm cao nhất của người chơi trên màn hình.
void DrawPlayerScore(LTexture gTextTexture,
    LTexture gScoreTexture,
    SDL_Color textColor,
    SDL_Renderer* gRenderer,
    TTF_Font* gFont,
    const int& score);
//Vẽ điểm số và điểm cao nhất của người chơi trên màn hình.
void DrawPlayerHighScore(LTexture gTextTexture,
    LTexture gHighScoreTexture,
    SDL_Color textColor,
    SDL_Renderer* gRenderer,
    TTF_Font* gFont, 
    const std::string& HighScore);
//Vẽ màn hình kết thúc trò chơi và xử lý các sự kiện người chơi sau khi kết thúc trò chơi.
void DrawEndGameSelection(LTexture gLoseTexture,
    SDL_Event* e,
    SDL_Renderer* gRenderer,
    bool& Play_Again);

#endif 
