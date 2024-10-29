#include <stdint.h>

const uint8_t piece_rook[133] = {
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b10011111,
    0b11111110, 0b00000000, 0b01111110, 0b01111111, 0b11111000, 0b00000001,
    0b11111001, 0b11111111, 0b11100000, 0b00000111, 0b11100111, 0b11111111,
    0b10000000, 0b00011111, 0b11111111, 0b11111110, 0b00000000, 0b01111111,
    0b11111111, 0b11111000, 0b00000001, 0b11111111, 0b11111111, 0b11100000,
    0b00000111, 0b11111111, 0b11111111, 0b10000000, 0b00011111, 0b11111111,
    0b11111110, 0b00000000, 0b01111111, 0b11111111, 0b11111000, 0b00000000,
    0b01111111, 0b11111111, 0b10000000, 0b00000001, 0b11111111, 0b11111110,
    0b00000000, 0b00000001, 0b11111111, 0b11100000, 0b00000000, 0b00000111,
    0b11111111, 0b10000000, 0b00000000, 0b00011111, 0b11111110, 0b00000000,
    0b00000000, 0b01111111, 0b11111000, 0b00000000, 0b00000001, 0b11111111,
    0b11100000, 0b00000000, 0b00000111, 0b11111111, 0b10000000, 0b00000000,
    0b00011111, 0b11111110, 0b00000000, 0b00000000, 0b01111111, 0b11111000,
    0b00000000, 0b00000111, 0b11111111, 0b11111000, 0b00000000, 0b00011111,
    0b11111111, 0b11100000, 0b00000001, 0b11111111, 0b11111111, 0b11100000,
    0b00000111, 0b11111111, 0b11111111, 0b10000000, 0b01111111, 0b11111111,
    0b11111111, 0b10000001, 0b11111111, 0b11111111, 0b11111110, 0b00000111,
    0b11111111, 0b11111111, 0b11111000, 0b00011111, 0b11111111, 0b11111111,
    0b11100000, 0b00000000, 0b00000000, 0b00000000, 0b00000000};

const uint8_t piece_queen[133] = {
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00011110,
    0b00000000, 0b00000000, 0b00000000, 0b01111000, 0b00000000, 0b00000000,
    0b00000111, 0b11111000, 0b00000000, 0b00000000, 0b00011111, 0b11100000,
    0b00000000, 0b00000000, 0b01111111, 0b10000000, 0b00000000, 0b00000001,
    0b11111110, 0b00000000, 0b00000000, 0b00000001, 0b11100000, 0b00000000,
    0b00000000, 0b00000111, 0b10000000, 0b00000001, 0b10000000, 0b00000000,
    0b00000000, 0b01100110, 0b00000000, 0b00000000, 0b00000001, 0b10000111,
    0b10000001, 0b11100000, 0b01111000, 0b00011110, 0b00000111, 0b10000001,
    0b11100000, 0b01111110, 0b01111111, 0b10011111, 0b10000001, 0b11111001,
    0b11111110, 0b01111110, 0b00000111, 0b11111111, 0b11111111, 0b11111000,
    0b00011111, 0b11111111, 0b11111111, 0b11100000, 0b00011111, 0b11111111,
    0b11111110, 0b00000000, 0b01111111, 0b11111111, 0b11111000, 0b00000001,
    0b11111111, 0b11111111, 0b11100000, 0b00000111, 0b11111111, 0b11111111,
    0b10000000, 0b00000111, 0b11111111, 0b11111000, 0b00000000, 0b00011111,
    0b11111111, 0b11100000, 0b00000000, 0b01111111, 0b11111111, 0b10000000,
    0b00000001, 0b11111111, 0b11111110, 0b00000000, 0b00011111, 0b11111111,
    0b11111110, 0b00000000, 0b01111111, 0b11111111, 0b11111000, 0b00000001,
    0b11111111, 0b11111111, 0b11100000, 0b00000111, 0b11111111, 0b11111111,
    0b10000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000};

const uint8_t piece_pawn[] = {
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00011111, 0b11100000,
    0b00000000, 0b00000000, 0b01111111, 0b10000000, 0b00000000, 0b00001111,
    0b11111111, 0b10000000, 0b00000000, 0b00111111, 0b11111110, 0b00000000,
    0b00000000, 0b11111111, 0b11111000, 0b00000000, 0b00000011, 0b11111111,
    0b11100000, 0b00000000, 0b00001111, 0b11111111, 0b10000000, 0b00000000,
    0b00111111, 0b11111110, 0b00000000, 0b00000000, 0b00111111, 0b11100000,
    0b00000000, 0b00000000, 0b11111111, 0b10000000, 0b00000000, 0b00001111,
    0b11111111, 0b10000000, 0b00000000, 0b00111111, 0b11111110, 0b00000000,
    0b00000000, 0b00111111, 0b11100000, 0b00000000, 0b00000000, 0b11111111,
    0b10000000, 0b00000000, 0b00001111, 0b11111111, 0b10000000, 0b00000000,
    0b00111111, 0b11111110, 0b00000000, 0b00000011, 0b11111111, 0b11111110,
    0b00000000, 0b00001111, 0b11111111, 0b11111000, 0b00000000, 0b00111111,
    0b11111111, 0b11100000, 0b00000000, 0b11111111, 0b11111111, 0b10000000,
    0b00000011, 0b11111111, 0b11111110, 0b00000000, 0b00001111, 0b11111111,
    0b11111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000};

const uint8_t piece_knight[] = {
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b11111000,
    0b00000000, 0b00000000, 0b00011111, 0b11100000, 0b00000000, 0b00000000,
    0b01111111, 0b11111111, 0b00000000, 0b00000001, 0b11111111, 0b11111100,
    0b00000000, 0b00000001, 0b11111111, 0b11111100, 0b00000000, 0b00000111,
    0b11111111, 0b11110000, 0b00000000, 0b01111111, 0b11111111, 0b11100000,
    0b00000001, 0b11111111, 0b11111111, 0b10000000, 0b00011111, 0b11111111,
    0b11111110, 0b00000000, 0b01111111, 0b11111111, 0b11111000, 0b00000111,
    0b11111111, 0b11111111, 0b11100000, 0b00011111, 0b11111111, 0b11111111,
    0b10000000, 0b01111111, 0b11111111, 0b11111110, 0b00000001, 0b11111111,
    0b11111111, 0b11111000, 0b00000001, 0b11100001, 0b11111111, 0b11100000,
    0b00000111, 0b10000111, 0b11111111, 0b10000000, 0b00000000, 0b01111111,
    0b11111110, 0b00000000, 0b00000001, 0b11111111, 0b11111000, 0b00000000,
    0b00011111, 0b11111111, 0b10000000, 0b00000000, 0b01111111, 0b11111110,
    0b00000000, 0b00000111, 0b11111111, 0b11111000, 0b00000000, 0b00011111,
    0b11111111, 0b11100000, 0b00000000, 0b01111111, 0b11111111, 0b10000000,
    0b00000001, 0b11111111, 0b11111110, 0b00000000, 0b00011111, 0b11111111,
    0b11111000, 0b00000000, 0b01111111, 0b11111111, 0b11100000, 0b00000001,
    0b11111111, 0b11111111, 0b10000000, 0b00000111, 0b11111111, 0b11111110,
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000};

const uint8_t piece_king[] = {
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00011110,
    0b00000000, 0b00000000, 0b00000000, 0b01111000, 0b00000000, 0b00000000,
    0b00000111, 0b11111000, 0b00000000, 0b00000000, 0b00011111, 0b11100000,
    0b00000000, 0b00000000, 0b01111111, 0b10000000, 0b00000000, 0b00000001,
    0b11111110, 0b00000000, 0b00000001, 0b11111111, 0b11111111, 0b11100000,
    0b00000111, 0b11111111, 0b11111111, 0b10000000, 0b01111111, 0b11111111,
    0b11111111, 0b10000001, 0b11111111, 0b11111111, 0b11111110, 0b00000111,
    0b11111111, 0b11111111, 0b11111000, 0b00011111, 0b11111111, 0b11111111,
    0b11100000, 0b01111111, 0b11111111, 0b11111111, 0b10000001, 0b11111111,
    0b11111111, 0b11111110, 0b00000111, 0b11111111, 0b11111111, 0b11111000,
    0b00000111, 0b11111111, 0b11111111, 0b10000000, 0b00011111, 0b11111111,
    0b11111110, 0b00000000, 0b01111111, 0b11111111, 0b11111000, 0b00000001,
    0b11111111, 0b11111111, 0b11100000, 0b00000001, 0b11111111, 0b11111110,
    0b00000000, 0b00000111, 0b11111111, 0b11111000, 0b00000000, 0b00011111,
    0b11111111, 0b11100000, 0b00000000, 0b01111111, 0b11111111, 0b10000000,
    0b00000111, 0b11111111, 0b11111111, 0b10000000, 0b00011111, 0b11111111,
    0b11111110, 0b00000000, 0b01111111, 0b11111111, 0b11111000, 0b00000001,
    0b11111111, 0b11111111, 0b11100000, 0b00000000, 0b00000000, 0b00000000,
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000};

const uint8_t piece_bishop[] = {
    0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00011110,
    0b00000000, 0b00000000, 0b00000000, 0b01111000, 0b00000000, 0b00000000,
    0b00000111, 0b11111000, 0b00000000, 0b00000000, 0b00011111, 0b11100000,
    0b00000000, 0b00000000, 0b01111111, 0b10000000, 0b00000000, 0b00000001,
    0b11111110, 0b00000000, 0b00000000, 0b00000111, 0b11111000, 0b00000000,
    0b00000000, 0b00000111, 0b10000000, 0b00000000, 0b00000000, 0b00011110,
    0b00000000, 0b00000000, 0b00000001, 0b11111110, 0b00000000, 0b00000000,
    0b00011111, 0b11100110, 0b00000000, 0b00000000, 0b01111111, 0b10011000,
    0b00000000, 0b00000001, 0b11110011, 0b11111000, 0b00000000, 0b00000111,
    0b11001111, 0b11100000, 0b00000000, 0b01111111, 0b11111111, 0b10000000,
    0b00000001, 0b11111111, 0b11111110, 0b00000000, 0b00000111, 0b11111111,
    0b11111000, 0b00000000, 0b00011111, 0b11111111, 0b11100000, 0b00000000,
    0b01111111, 0b11111111, 0b10000000, 0b00000001, 0b11111111, 0b11111110,
    0b00000000, 0b00000001, 0b11111111, 0b11100000, 0b00000000, 0b00000111,
    0b11111111, 0b10000000, 0b00000000, 0b01111111, 0b11111111, 0b10000000,
    0b00000001, 0b11111111, 0b11111110, 0b00000000, 0b00011111, 0b11111111,
    0b11111110, 0b00000000, 0b01111111, 0b11111111, 0b11111000, 0b00000001,
    0b11111111, 0b11111111, 0b11100000, 0b00000111, 0b11111111, 0b11111111,
    0b10000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000};

const uint8_t *pieces[] = {piece_rook,	 piece_queen, piece_pawn,
			   piece_knight, piece_king,  piece_bishop};