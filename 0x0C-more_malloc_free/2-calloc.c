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
		p = malloc(size * nmemb);
		p = 0;
		if ((nmemb == 0) || (size == 0) || (p == NULL))
		{
			return (NULL);
		}
	return (p);
}
