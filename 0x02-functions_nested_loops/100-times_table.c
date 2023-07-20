#include "main.h"
#include <stdio.h>
/**
 * print_times_table - 0
 * @n: int
 * Return: n
 */
void print_times_table(int n)
{
int i;
int m;
int j = 0;
if ((n > 15) || (n < 0))
{
return (n);
}
else
{
for (i = 0; i <= n; i++)
{
for (m = 0; m <= n; m++)
{
j = (i * m);
if ((j < 10) && (m != 0))
{
if (m == 9)
{
printf("  %d", j);
}
else
{
printf(" %d, ", j);
}
}
else
{
if (m == 9)
{
printf("%d", j);
}
else
{
printf("%d, ", j);
}
}
}
printf("\n");
}
}
}
