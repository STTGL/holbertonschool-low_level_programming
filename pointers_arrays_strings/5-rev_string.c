#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	/* Reverse the string */
	while (start < end)
	{
		/* Swap characters at the start and end positions */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move the start position forward and end position backward */
		start++;
		end--;
	}
}

