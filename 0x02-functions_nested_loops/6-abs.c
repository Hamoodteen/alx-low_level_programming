#include "main.h"
/**
 * _abs - 0
 * @n: int
 * Return: n
 */
int _abs(int n)
{
if (n >= 0)
{
_putchar(n);
}
else if (n < 0)
{
int m = ((n*n)/n);
_putchar(m);
}
return (n);
}
