#include "main.h"
#include <stdio.h>
/**
 * print_binary - f
 * @n: int
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int bin = 0;
	unsigned long int f = 1;
	unsigned long int rem;

	while (n != 0)
	{
		rem = ~(n & 2);
		bin += (rem * f);
		f *= 10;
		n = n >> 2;
	}
	printf("%lu", bin);
}
