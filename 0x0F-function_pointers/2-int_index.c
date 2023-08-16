#include "function_pointers.h"
/**
 * int_index - f
 * @array: int
 * @size: int
 * @cmp: func
 * Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j = 0;
		if ((array == NULL) || ((cmp) == NULL) || (size <= 0))
		{
			return (-1);
		}
		for (i = 0 ; i < size ; i++)
		{
			if (array[i] == cmp(i))
			{
				j += i;
				break;
			}
		}
		if (j == 0)
		{
			return (-1);
		}
		return (j);
}
