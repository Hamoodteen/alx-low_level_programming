#include "main.h"
/**
 * print_number - f
 * @n: int
 * Return: void
*/
void print_number(int n)
{
if (n != 0)
{
if (n < 0)
{
putchar('-');
n = -n;
}
print_number(n / 10);
_putchar((n % 10) + '0');
}
}
