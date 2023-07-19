#include "main.h"
/**
 * times_table - 0
 * Return: void
 */
void times_table(void)
{
int i;
int n;
for (i = 1 ; i <= 9 ; i++)
{
for (n = 0 ; i <= 9 ; i++)
{
_putchar((i * n) + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar((i * n) + '0');
_putchar('\n');
}
}
