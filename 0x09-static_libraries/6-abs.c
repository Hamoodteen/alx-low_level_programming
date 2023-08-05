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
return (n);
}
else if (n < 0)
{
n = (-1) * n;
return (n);
}
return (n);
}
