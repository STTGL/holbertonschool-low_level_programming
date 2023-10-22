#include "main.h"

/**
 * _islower - It does what it does.
 * @c: input for checking its case
 * Return: 1 if argument is lowercase o otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
