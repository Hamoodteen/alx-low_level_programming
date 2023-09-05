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
 * nobd - f
 * @bind: int
 * Return: numd
*/
unsigned int nobd(int bind)
{
	int numd = 0;

	while (bind != 0)
	{
		bind /= 2;
		numd++;
	}
	return (numd);
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

	if (index > 63)
		return (-1);
	if (nobd(n) < index)
		return (0);
	rev = revbinary(binary(n));
	rev >>= index;
	rev &= binary(1);
	return (rev);
}
