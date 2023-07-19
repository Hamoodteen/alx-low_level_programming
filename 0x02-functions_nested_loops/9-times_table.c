#include "main.h"
/**
 * times_table - 0
 * Return: void
 */
void times_table(void)
{
int i;
int n;
int j = 0;
for (i = 0 ; i <= 9 ; i++)
{
for (n = 0 ; n <= 9 ; n++)
{
j = (i * n);
_putchar(j + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar((j * n) + '0');
_putchar('\n');
}
}
