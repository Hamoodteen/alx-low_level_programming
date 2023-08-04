#include "main.h"
/**
 * factorial - f
 * @n: int
 * Return: i
*/
int factorial(int n)
{
int i = 0;
if (n < 0)
{
return (-1);
}
else if ((n == 0) || (n == 1))
{
return (1);
}
else
{
i = n * factorial(n - 1);
}
return (i);
}
