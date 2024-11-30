//
// Created by joppo on 11/29/24.
//
#include "raylib.h"

void drawCircle(int x, int y, int r) {
    BeginDrawing();
    DrawCircle(x, y, r, BLACK);
    EndDrawing();
}

void DrawFrameUpdate() {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("learn da notes", 10, 10, 40, BLACK);
    DrawCircleLines(300, 300, 20, BLACK);
    EndDrawing();
}