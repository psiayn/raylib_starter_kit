#include <iostream>

using namespace std;

#include <raylib.h>

constexpr auto SCREEN_WIDTH = 800;
constexpr auto SCREEN_HEIGHT = 600;

int main(int argc, char *argv[]) {
  InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "RayLib Sample Template");
  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("Congrats, template has been setup", 190, 200, 20, LIGHTGRAY);
    EndDrawing();
  }
  CloseWindow();
  cout << "Huzzah! It works!";
  return 0;
}
