#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix
 * @a: The square matrix (2D array)
 * @size: The size of the matrix (number of rows or columns)
 *
 * This function calculates and prints the sum of the main diagonal and
 * anti-diagonal of a square matrix of integers.
 */
void print_diagsums(int *a, int size) {
    int main_diag_sum = 0;  // Sum of the main diagonal
    int anti_diag_sum = 0;  // Sum of the anti-diagonal

    for (int i = 0; i < size; i++) {
        main_diag_sum += a[i * size + i];
        anti_diag_sum += a[i * size + (size - 1 - i)];
    }

    printf(main_diag_sum);
    printf(anti_diag_sum);
}
