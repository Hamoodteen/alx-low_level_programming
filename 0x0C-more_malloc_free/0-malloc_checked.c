#include "main.h"
/**
 * malloc_checked - f
 * @b: unsigned int
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	int *p;
		p = malloc(b);
		if (p == NULL)
		{
			exit(98);
		}
	return (p);
}
