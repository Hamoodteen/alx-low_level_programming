#include "main.h"
/**
 * alloc_grid - f
 * @width: int
 * @height: int
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **a;
	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	a = (int **)malloc(sizeof(width) * sizeof(height));
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
