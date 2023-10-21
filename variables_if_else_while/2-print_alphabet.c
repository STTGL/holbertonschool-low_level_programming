#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all lowercase letters from 'a' to 'z'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}

putchar('\n');
return (0);
}

