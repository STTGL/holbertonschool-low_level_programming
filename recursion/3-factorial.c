#include <stdio.h>
#include "main.h"

/**
 * factorial - Calculate the factorial of a number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

