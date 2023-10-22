#include "main.h"
/**
 * print_alphabet_x10 - The previous but bigger
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int n;
	char f16;

	n = 0;
	while (n < 10)
	{
	for (f16 = 'a'; f16 <= 'z'; f16++)
	{
	_putchar(f16);
	}

	_putchar('\n');
	n++;
	}
}
