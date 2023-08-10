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
int w;
int h;
int ww;
int hh;
if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	for (w = 0 ; w <= width ; w++)
	{
	}
	for (h = 0 ; h <= height ; h++)
	{
	}
	a = (int **)malloc((w * sizeof(width)) * (h * sizeof(height)));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (ww = 0 ; ww <= width ; ww++)
	{
		for (hh = 0 ; hh <= height ; hh++)
		{
			a[ww][hh] = 0;
		}
	}
	return (a);
}
