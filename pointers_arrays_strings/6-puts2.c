#include "main.h"
#include <stdio.h>
/**
 * puts2 - It just puts
 *
 * @str: string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i = i + 2;
		if (str[i - 1] == '\0')
		{
			break;
		}
	}
	putchar('\n');
}
