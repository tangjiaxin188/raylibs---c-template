#include <raylib.h>
#include "../head/tem.hpp"

void thestartwindow::tem(){

InitWindow(800, 600, windowname.c_str());
SetTargetFPS(30);

while (!WindowShouldClose())
{
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText(text1.c_str(), 800/2 - MeasureText(text2.c_str(),20)/2, 100, 20, RED);
    DrawFPS(10, 10);
    EndDrawing();
}

CloseWindow();

}

thestartwindow::thestartwindow()
{

windowname = "Raylib test";
text1 = "Raylib hello";
text2 = "Raylib hello";

}