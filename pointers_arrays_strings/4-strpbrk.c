#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 *
 * Return: A pointer
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);  /* Return a pointer to the matching byte in s */
}
}
}

return (NULL);
}
