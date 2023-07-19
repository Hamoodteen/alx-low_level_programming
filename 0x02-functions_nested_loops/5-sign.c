#include "main.h"
/**
 * print_sign - 0
 * @n: int
 * Return: n
 */
int print_sign(int n)
{
if (n > 0)
{
return ('+');
}
else if (n == 0)
{
return ('0');
}
else if (n < 0)
{
return ('-');
}
}
