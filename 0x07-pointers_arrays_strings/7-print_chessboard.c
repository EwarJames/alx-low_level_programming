#include "holberton.h"

/**
 *print_chessboard - print chaseboard, 2d array
 *@a: 2d array of chars
 */

void print_chaseboard(char (*a)[8])
{
int y, x;

y = 0;
while (y < 8)
{
x = 0;
while (x < 8)
{
_putchar(a[y][x]);
x++;
}
_putchar('\0');
y++;
}
}
