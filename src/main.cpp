#include <raylib.h>

int main()
{
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 450;

    const char* title = "Raylib Template";
    InitWindow(screenWidth, screenHeight, title);

    SetWindowState(FLAG_VSYNC_HINT);
    SetTargetFPS(60);

    // Load game

    while (!WindowShouldClose())
    {
        // Update game

        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText(title, screenWidth / 2 - MeasureText(title, 20) / 2, screenHeight / 2 - 10, 20, DARKGRAY);

        // Draw game

        EndDrawing();
    }

    // Unload game

    CloseWindow();
    return 0;
}
