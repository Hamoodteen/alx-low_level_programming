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
int h;
int w;
int i;
int j;
	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	for (h = 0 ; h <= height ; h++)
	{
	}
	a = (int **)malloc(h * sizeof(height));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0 ; i <= height ; i++)
	{
		for (w = 0 ; w <= width ; i++)
		{
		}
		a[i] = (int *)malloc(w * sizeof(width));
		for (j = 0 ; j <= width ; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
