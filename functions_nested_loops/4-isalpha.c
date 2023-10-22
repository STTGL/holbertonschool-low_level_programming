#include "main.h"

/**
 * _isalpha - It is the function.
 * @c: Believe or not, it is c.
 * Return: 1 if argument is alphabetic 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
