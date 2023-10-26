#include "main.h"
#include <stdio.h>

void print_rev(char *s)
{
int l = strlen (s);
int n;
int s=l;
for(n = 0; n < l; n++){
putchar (*s);
s--;
}
}
