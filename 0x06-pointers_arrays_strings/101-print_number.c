#include "main.h"
/**
 * print_number - f
 * @n: int
 * Return: void
*/
void print_number(int n)
{
if ((n / 10) > 0)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}
