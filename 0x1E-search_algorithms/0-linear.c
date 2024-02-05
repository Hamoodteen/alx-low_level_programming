#include "search_algos.h"

/**
 * linear_search - f
 * @array: array
 * @size: size
 * @value: value
 * Return: int
*/
int linear_search(int *array, size_t size, int value)
{
	size_t f = 0, i;

	for (i = 0; i != size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			f = 1;
			break;
		}
	}
	if (f == 1)
		return (value);
	else
		return (-1);
}
