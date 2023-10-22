#include "main.h"

/**
 * times_table - generates times table
 * Return: void
 */

void times_table(void)
{
	int i, j;
	int vur;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			vur = i * j;

			if (j > 0 && vur <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

			}
			else if (j > 0 && vur > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (vur >= 10)
			{
				_putchar(vur / 10 + '0');
				_putchar(vur % 10 + '0');
			}
			else
			{
			_putchar(vur + '0');
			}
}
		_putchar('\n');
	}
}
