#include "main.h"
/**
 * array_range - f
 * @min: int
 * @max: int
 * Return: pointer
*/
int *array_range(int min, int max)
{
	int *p;
	int i;
		if (min > max)
		{
			return (NULL);
		}
		p = malloc((max - min + 1) * sizeof(int));
		if (p == NULL)
		{
			return (NULL);
		}
		for (i = min ; i <= max ; i++)
		{
			p[i - min] = i;
		}
		return (p);
}
