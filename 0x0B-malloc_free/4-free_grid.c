#include "main.h"
/**
 * free_grid - f
 * @grid: int
 * @height: int
 * Return: void
*/
void free_grid(int **grid, int height)
{
int i;
	for(int i = 0 ; i <= height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
