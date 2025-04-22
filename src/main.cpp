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

        // Draw game

        EndDrawing();
    }

    // Unload game

    CloseWindow();
    return 0;
}
