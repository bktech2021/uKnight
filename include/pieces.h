#ifndef PIECES_H
#define PIECES_H

#define PIECE_ROOK 0
#define PIECE_QUEEN 1
#define PIECE_PAWN 2
#define PIECE_KNIGHT 3
#define PIECE_KING 4
#define PIECE_BISHOP 5

#include <stdint.h>

extern const uint8_t *pieces[133*6];

#endif

