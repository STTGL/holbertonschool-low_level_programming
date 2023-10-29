#include <stdio.h>
#include "main.h"

/**
 * leet - Replace specified characters
 * @str: The input string to be modified
 *
 * Return: A pointer to the modified string
 */

char *leet(char *str) {
char *original = "aAeEoOtTlL";
char *replacements = "443370711";
int i, j;

for (i = 0; str[i] != '\0'; i++) {
for (j = 0; original[j] != '\0'; j++) {
if (str[i] == original[j]) {
str[i] = replacements[j];
break;
}
}
}

    return (str);
}
