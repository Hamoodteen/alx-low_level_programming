#include "main.h"
/**
 * print_triangle - f
 * @size: int
 * Return: void
*/
void print_triangle(int size)
{
int i;
int j;
for (i = 0 ; i <= size ; i++)
{
for (j = 0 ; j <= (i - 1) ; j++)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
}
