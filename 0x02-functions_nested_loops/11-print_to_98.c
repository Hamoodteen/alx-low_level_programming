#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - 0
 * @n: int
 * Return: n
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n ; i <= 97 ; i++)
{
printf("%d, ", i);
}
printf("98");
}
else if (n > 98)
{
for (i = n ; i >= 99 ; i--)
{
printf("%d, ", i);
}
printf("98");
}
else if (n == 98)
{
printf("%d", n);
}
printf("\n");
}
