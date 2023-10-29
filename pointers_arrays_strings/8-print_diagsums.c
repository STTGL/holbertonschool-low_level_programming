#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals
 * @a: The square matrix (2D array)
 * @size: The size of the matrix (number of rows or columns)
 *
 * This function calculates and prints a sum
 */
void print_diagsums(int *a, int size)
{
int main_diag_sum = 0;
int anti_diag_sum = 0;
int i = 0;

for (i = 0; i < size; i++)
{
main_diag_sum += a[i * size + i];
anti_diag_sum += a[i * size + (size - 1 - i)];
}

printf("%d\n, %d\n", main_diag_sum, anti_diag_sum);
}
