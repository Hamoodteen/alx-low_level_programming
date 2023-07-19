#include "main.h"
/**
 * print_last_digit - 0
 * @n: int
 * Return: n
 */
int print_last_digit(int n)
{
if (n >= 0)
{
return (n % 10);
}
else
{
return (((-1) * n) % 10);
}
return (n);
}
