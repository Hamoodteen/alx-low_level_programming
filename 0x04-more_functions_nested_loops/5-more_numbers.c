#include "main.h"
/**
 * more_numbers - f
 * Return: void
*/
void more_numbers(void)
{
int i;
int n;
for (i = 0 ; i < 10 ; i++)
{
for (n = 0 ; n < 15 ; i++)
{
if (n >= 10)
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
