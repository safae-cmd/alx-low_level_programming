#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array
 * @nmemb: array
 * @size: size of array
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, *p;

	p = &nmemb;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(nmemb) * size);
	i = 0;
	while (p[i] <= p[size])
	{
		i++;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}

