#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - f
 * @a: int
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int j = 0;
int l;
int b = 0;
for (i = 0 ; i <= (size - 1) ; i++)
{
j += a[i];
}
printf("%d, ", j);
for (l = size ; l >= 1 ; l--)
{
b += a[l];
}
printf("%d\n", b);
}
