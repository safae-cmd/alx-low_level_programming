#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to a 2 dimensional array of strings
 * @width: width
 * @height: height
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * (i * width));
		if (p[i] == NULL)
		{
			for (k = i - 1; k >= 0; k--)
			{
				free(p[k]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
