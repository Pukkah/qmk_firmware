#ifdef RGB_MATRIX_ENABLE

#include "config_led.h"
#include "rgb_matrix.h"

#define NA    NO_LED

/*
 * ANSI keymap
 */
led_config_t g_led_config = { 
{
    {  0, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA },
    { NA,  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13 },
    { 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 },
    { 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, NA, 40 },
    { 41, NA, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, NA, 52 },
    { 53, 54, 55, NA, NA, NA, 56, NA, NA, NA, 57, 58, 59, 60 }

}, {
    {0  ,  0}, {16 ,  0}, {32 ,  0}, {48 ,  0}, {64 ,  0}, {80 ,  0}, {96 ,  0}, {112,  0}, {128,  0}, {144,  0}, {160,  0}, {176,  0}, {192,  0}, {216,  0},
    {4  , 16}, {24 , 16}, {40 , 16}, {56 , 16}, {72 , 16}, {88 , 16}, {104, 16}, {120, 16}, {136, 16}, {152, 16}, {168, 16}, {184, 16}, {200, 16}, {220, 16},
    {6  , 32}, {28 , 32}, {44 , 32}, {60 , 32}, {76 , 32}, {92 , 32}, {108, 32}, {124, 32}, {140, 32}, {156, 32}, {172, 32}, {188, 32},            {214, 32},
    {10 , 48},            {36 , 48}, {52 , 48}, {68 , 48}, {84 , 48}, {100, 48}, {116, 48}, {132, 48}, {148, 48}, {164, 48}, {180, 48},            {210, 48},
    {2  , 64}, {22 , 64}, {42 , 64},                                  {102, 64},                                  {162, 64}, {182, 64}, {202, 64}, {222, 64}
}, {
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4,
    4,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4,
    4, 4, 4,          4,          4, 4, 4, 4
} };

#endif /* RGB_MATRIX_ENABLE */
