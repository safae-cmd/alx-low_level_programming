#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of ints
* @min: min value
* @max: max value
* Return: array pointer
*/
int *array_range(int min, int max)
{
	int i, *c;

	if (min > max)
	{
		return (NULL);
	}
	c = malloc(sizeof(int) * (max - min + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		c[i] = min;
	}
	return (c);
}
