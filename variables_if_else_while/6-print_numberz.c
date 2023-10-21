#include <stdio.h>

/**
 * main - Entry point. Prints single-digit numbers from 0 to 9, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit;

    for (digit =48; digit < 58; digit++) {
        putchar(digit);
    }
    
    putchar('\n');

    return (0);
}


