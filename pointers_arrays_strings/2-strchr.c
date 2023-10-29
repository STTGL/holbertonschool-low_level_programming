#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string argument
 * @c: character argument
 *
 * Return: returns pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
