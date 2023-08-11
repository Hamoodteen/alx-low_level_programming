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
		if ((nmemb == 0) || (size == 0))
		{
			return (NULL);
		}
		p = malloc(a);
		memset(p, 0, a);
		if (p == NULL)
		{
			return (NULL);
		}
	return (p);
}
