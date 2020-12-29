#include <raylib.h>

int main() {
    const int winWidth = 1280;
    const int winHeight = 500;

    InitWindow(winWidth, winHeight, "My Game");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(SKYBLUE);
        DrawRectangle(50,50,200,300, WHITE);
        DrawRectangleV(Vector2{ 300,50 }, Vector2{ 200,300 }, BLACK);
        EndDrawing();
    }
}