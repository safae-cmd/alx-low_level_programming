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
	int i, j;

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
		p[i] = malloc(sizeof(int) * (width));
		if (p[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(p[i]);
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
