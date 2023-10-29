#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int l = strlen(s);
	int n;
	for (n = l - 1; n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}

