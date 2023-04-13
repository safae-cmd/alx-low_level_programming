#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid created by alloc function.
 * @grid: array
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL && height <= 0)
	{
		return;
	}
	i = 0;
	while (i < height)
	{
		i++;
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
