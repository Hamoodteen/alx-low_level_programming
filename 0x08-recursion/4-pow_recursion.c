#include "main.h"
/**
 * _pow_recursion - f
 * @x: int
 * @y: int
 * Return: i
*/
int _pow_recursion(int x, int y)
{
int i = 0;
if (y < 0)
{
return (-1);
}
else
{
i = x * _pow_recursion(x, (y - 1));
}
return (i);
}
