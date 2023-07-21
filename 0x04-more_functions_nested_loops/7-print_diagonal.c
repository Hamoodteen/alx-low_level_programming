#include "main.h"
/**
 * print_diagonal - f
 * @n: int
 * Return: void
*/
void print_diagonal(int n)
{
int i;
int j;
for (i = -1 ; i < (n - 1) ; i++)
{
for (j = 0 ; j < n ; j++)
{
if (n <= 0)
{

}
else
{
_putchar(' ');
}
}
if (n <= 0)
{

}
else
{
_putchar('\\');
}
_putchar('\n');
}
}
