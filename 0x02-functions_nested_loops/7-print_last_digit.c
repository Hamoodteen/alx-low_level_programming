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
_putchar(n + '0');
return (n);
}
else
{
n = (((-1) * n) % 10);
_putchar(n + '0');
return (n);
}
return (n);
}
