#include "main.h"
void tostring(char [], unsigned long int);
/**
 * tostring - f
 * @str: char
 * @num: int
 * Return: void
*/
void tostring(char str[], unsigned long int num)
{
	unsigned long int i;
	unsigned long int rem;
	unsigned long int len;
	unsigned long int n;

	n = num;
	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
}
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
	int i;
	char *c;

	c = '\0';
	while (n != 0)
	{
		rem = ~(n & 2);
		bin += (rem * f);
		f *= 10;
		n = n >> 2;
	}
	tostring(c, bin);
	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(i);
	}
}
