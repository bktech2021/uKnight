#include "chess.h"
#include <raylib.h>
#include <stdint.h>
#include <stdio.h>

int main(void) {
	uint16_t fb[240 * 240];

	InitWindow(240, 240, "chess??");
	SetTargetFPS(60);

	Image fb_image = {.data = fb,
			  .width = 240,
			  .height = 240,
			  .format = PIXELFORMAT_UNCOMPRESSED_R5G6B5,
			  .mipmaps = 1};
	Texture2D fb_texture = LoadTextureFromImage(fb_image);
	for (int i = 0; i < 240 * 240; i++) {
		fb[i] = 0xFFFF;
	}

	Board cb = {
	    .fb = fb,
	};

	Chess_DrawCheckerboard(&cb);
	UpdateTexture(fb_texture, fb);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawTexture(fb_texture, 0, 0, WHITE);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
