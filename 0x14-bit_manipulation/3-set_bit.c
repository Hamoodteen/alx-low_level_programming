#include "main.h"
/**
 * set_bit - f
 * @n: int
 * @index: index
 * Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int powerOfOne;

	if (index > 64)
		return (-1);

	for (powerOfOne = 1; index > 0; index--, powerOfOne *= 2)
		;
	*n += powerOfOne;
	return (1);
}
