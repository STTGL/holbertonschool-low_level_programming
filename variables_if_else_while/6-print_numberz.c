#include <stdio.h>

/**
 * main - Entry point. Prints single-digit numbers from 0 to 9, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit;

    for (digit = 0; digit < 10; digit++) {
        putchar(digit);
    }
    
    putchar('\n');

    return (0);
}


