#include "function_pointers.h"
/**
 * array_iterator - f
 * @array: int
 * @size: size
 * @action: func
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
		if ((array == NULL) || (size == 0))
		{
			return;
		}
		for (i = 0; i < size; i++)
			action(array[i]);
}
