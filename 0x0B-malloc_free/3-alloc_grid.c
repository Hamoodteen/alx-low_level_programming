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
int i;
int j;
int clean;
	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	a = malloc(height * sizeof(*a));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0 ; i <= height ; i++)
	{
		a[i] = malloc(width * sizeof(**a));
		if (a[i] == NULL)
		{
			for (clean = 0; clean <= height; clean++)
			{
				free(a[clean]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0 ; j <= width ; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
