#include "frame.h"
#include "pieces.h"
#include <raylib.h>
#include <stdint.h>
#include <stdio.h>

#define PIECE_ROOK 0
#define PIECE_QUEEN 1
#define PIECE_PAWN 2
#define PIECE_KNIGHT 3
#define PIECE_KING 4
#define PIECE_BISHOP 5

#define bitset(byte, nbit) ((byte) |= (1 << (nbit)))
#define bitclear(byte, nbit) ((byte) &= ~(1 << (nbit)))
#define bitflip(byte, nbit) ((byte) ^= (1 << (nbit)))
#define bitcheck(byte, nbit) ((byte) & (1 << (nbit)))

typedef struct Board {
  uint16_t *fb;
} Board;

const uint16_t COLORS[] = {0x022E, 0xF64B, 0xBE48};

static void _Chess_DrawCell(Board *cb, int cx, int cy, uint16_t color) {
  for (
      struct {
        int i;
        int x;
        int y;
      } it = {0, 0, 0};
      it.i < 30 * 30; it.i++, it.x = it.i % 30, it.y = it.i / 30) {
    cb->fb[(240 * ((30 * cy) + it.y)) + (30 * cx) + it.x] = color;
  }
}

static void _Chess_DrawAsset(Board *cb, int cx, int cy, uint16_t color,
                             const char asset[]) {
  for (
      struct {
        int i;
        int x;
        int y;
      } it = {0, 0, 0};
      it.i < 30 * 30; it.i++, it.x = it.i % 30, it.y = it.i / 30) {
    if (!bitcheck(asset[(it.i) / 8], 7 - (it.i % 8)))
      continue;
    cb->fb[240 * ((30 * cy) + it.y) + (30 * cx) + it.x] = color;
  }
}

static void _Chess_DrawPiece(Board *cb, int cx, int cy, uint16_t color,
                             int piece) {
  _Chess_DrawAsset(cb, cx, cy, color, pieces[piece]);
}

void Chess_DrawCheckerboard(Board *cb) {
  for (int i = 0; i < 64; i++) {
    _Chess_DrawCell(cb, i % 8, i / 8, COLORS[(i % 2) ^ ((i / 8) % 2)]);
  }
}

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
  _Chess_DrawCell(&cb, 0, 0, COLORS[2]);
  _Chess_DrawPiece(&cb, 0, 1, 0, PIECE_PAWN);
  _Chess_DrawPiece(&cb, 0, 2, 0, PIECE_KING);
  _Chess_DrawPiece(&cb, 0, 3, 0, PIECE_KNIGHT);
  _Chess_DrawPiece(&cb, 0, 4, 0, PIECE_QUEEN);
  _Chess_DrawPiece(&cb, 0, 5, 0, PIECE_ROOK);
  _Chess_DrawPiece(&cb, 0, 6, 0, PIECE_BISHOP);

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
