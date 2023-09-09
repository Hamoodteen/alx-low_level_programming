#include "main.h"
#include <stdio.h>
/**
 * clear_bit - f
 * @n: int
 * @index: int
 * Return: int
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int powerOfZero;
	unsigned int bit;

	if (index > 64)
		return (-1);
	bit = index;
	for (powerOfZero = 1; bit > 0; powerOfZero *= 2, bit--)
		;

	if ((*n >> index) & 1)
		*n -= powerOfZero;
	return (1);
}
