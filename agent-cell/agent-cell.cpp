#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

#include <raymath.h>
#include <algorithm>
#include <string>
#include <iostream>
#include "config.h"

int main() {
	InitWindow(Config::WINDOW_WIDTH, Config::WINDOW_HEIGHT, "Agent Cell");
	SetTargetFPS(Config::TARGET_FPS);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(DARKGREEN);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
