#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function
 *
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: What do you think?
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len_dest, len_src;

	i = 0;
	len_dest = 0;
	len_src = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	while (i < n)
	{
		if (n <= len_src)
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		else
		{
			n = len_src;
			dest[len_dest + i] = src[i];
			i++;
		}
	}

	return (dest);
}
