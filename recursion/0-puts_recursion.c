#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 *
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(s[0]);
		_puts_recursion(s + 1);

	}
	else
	{
		putchar('\n');
	}
}
