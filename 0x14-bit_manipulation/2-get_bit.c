#include "main.h"
/**
 * binary - f
 * @n: int
 * Return: bin
*/
long int binary(unsigned long int n)
{
	unsigned long int bin = 0;
	unsigned long int f = 1;
	unsigned long int rem;

	while (n != 0)
	{
		rem = n % 2;
		bin += (rem * f);
		f *= 10;
		n /= 2;
	}
	return (bin);
}
/**
 * revbinary - f
 * @n: int
 * Return: rev
*/
unsigned int revbinary(unsigned int n)
{
	unsigned int rev = 0;
	int count = 0;

	while (n > 0)
	{
		rev |= (n & 1) << count;
		count++;
		n >>= 1;
	}
	return (rev);
}
/**
 * get_bit - f
 * @n: int
 * @index: int
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	long int rev;

	rev = revbinary(binary(n));
	if (rev)
	{
		rev >>= index;
		rev &= binary(1);
	}
	else
	{
		return (-1);
	}
}
