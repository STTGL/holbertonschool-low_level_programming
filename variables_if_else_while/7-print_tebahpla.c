#include <stdio.h>

/**
 * main - this program prints reverse alphabet
 * Return: Always (0)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
