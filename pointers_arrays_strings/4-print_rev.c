#include "main.h"
#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
int l = strlen (s);
int n;
for(n = l-1; n >= 0; n--){
putchar (s[n]);
}
}
