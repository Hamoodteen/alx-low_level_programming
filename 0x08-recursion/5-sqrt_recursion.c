#include "main.h"
/**
 * _sqrt_recursion - f
 * @n: int
 * Return: int
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}
