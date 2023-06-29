#include <raylib.h>
//#include <raymath.h>

int main(void)
{
    InitWindow(800, 600, "Raylib 测试！");
    SetTargetFPS(30);

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Hello Raylib!", 800/2 - MeasureText("Hello Raylib!",20)/2, 100, 20, RED);
            DrawFPS(10, 10);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}