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
for (n = 0 ; n <= 9 ; n++)
{
j = (i * n);
if (j < 10)
{
if (n == 9)
{
printf("%d", j);
}
else
{
printf("%d,  ", j);
}
}
else
{
if (n == 9)
{
printf("%d", j);
}
else
{
printf(" %d,", j);
}
}
}
printf("\n");
}
}
