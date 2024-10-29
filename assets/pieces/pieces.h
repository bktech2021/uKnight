#ifndef _PIECES_H
#define _PIECES_H
#include "bishop.h"
#include "king.h"
#include "knight.h"
#include "pawn.h"
#include "queen.h"
#include "rook.h"
#include <stdint.h>
const uint8_t *pieces[] = {piece_rook,   piece_queen, piece_pawn,
                           piece_knight, piece_king,  piece_bishop};

#endif
