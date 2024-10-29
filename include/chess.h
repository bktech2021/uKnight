#ifndef CHESS_H
#define CHESS_H

#include <stdint.h>

#define bitset(byte, nbit) ((byte) |= (1 << (nbit)))
#define bitclear(byte, nbit) ((byte) &= ~(1 << (nbit)))
#define bitflip(byte, nbit) ((byte) ^= (1 << (nbit)))
#define bitcheck(byte, nbit) ((byte) & (1 << (nbit)))

#define SELECTED_COLOR 0x0000

typedef struct Board {
	uint16_t *fb;
} Board;

void Chess_DrawCheckerboard(Board *cb);
#endif
