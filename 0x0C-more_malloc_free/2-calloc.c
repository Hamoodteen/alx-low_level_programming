#include "main.h"
/**
 * _calloc - f
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int a = (nmemb * size);
		p = malloc(a);
		memset(p, 0, a);
		if ((nmemb == 0) || (size == 0) || (p == NULL))
		{
			return (NULL);
		}
	return (p);
}
