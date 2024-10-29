#include "pieces.h"
#include "chess.h"
const uint16_t COLORS[] = {0x022E, 0xF64B};

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
			     const uint8_t asset[]) {
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
		_Chess_DrawCell(cb, i % 8, i / 8,
				COLORS[(i % 2) ^ ((i / 8) % 2)]);
	}
}
