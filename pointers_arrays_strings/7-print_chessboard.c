#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Print a chessboard
 * @a: A 2D array representing the chessboard
 *
 * Prints the chessboard represented by a 2D array.
 */

void print_chessboard(char (*a)[8])
{
int row, col;

for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
putchar(a[row][col]);
if (col >= 7)
{
putchar('\n');
}
}
}
}
