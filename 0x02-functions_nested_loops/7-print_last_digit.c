#include "main.h"
/**
 * print_last_digit - 0
 * @n: int
 * Return: n
 */
int print_last_digit(int n)
{
if (n >= 0)
{
n = (n % 10);
_putchar('0' + n);
return (n);
}
else
{
n = ((n % 10) * (-1));
_putchar('0' + n);
return (n);
}
return (n);
}
