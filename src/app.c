#include <raylib.h>
#include "app.h"
#include "draw.h"
#include "constants.h"

int mainAppLoop() {
    // Main app loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        DrawFrameUpdate();
    }
    return 0;
}

int appInit() {
    InitWindow(screenWidth, screenHeight, "reading da notes");
    SetTargetFPS(144);

    return 0;
}

int appExit() {
    CloseWindow();
    return 0;
}

int drawAllComponents() {

    return 0;
}
