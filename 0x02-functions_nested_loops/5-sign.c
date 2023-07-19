#include "main.h"
/**
 * print_sign - 0
 * @n: int
 * Return
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
}
else if (n == 0)
{
_putchar('0');
}
else if (n < 0)
{
_putchar('-');
}
return (n);
}
