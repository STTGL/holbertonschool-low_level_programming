#include "main.h"

int _pow_recursion(int x, int y)

{
if (y < 0)
{
return (-1);
}
if (y==0)
{
return (1);
}
x*=x;
y--;
if (y > 1)
{
_pow_recursion (x, y);
}
if (y == 1)
{
return (x);
}
}
