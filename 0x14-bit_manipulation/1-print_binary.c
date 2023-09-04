#include "main.h"
/**
 * print_binary - f
 * @n: int
 * Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int num;
	unsigned long int count;

	num = count = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		num = num << 1;
		num += n & 1;
		count++;
		n = n >> 1;
	}
	while (num > 0)
	{
		_putchar((num & 1) + '0');
		num = num >> 1;
		count--;
	}
	if (count > 0)
	{
		while (count != 0)
		{
			_putchar('0');
			count--;
		}
	}
}
