#include "main.h"
#include <stdio.h>
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
for (n = 1 ; n <= 9 ; n++)
{
j = (i * n);
printf("%d,  ", j);
}
_putchar('\n');
}
}
