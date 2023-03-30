#include "main.h"

/**
 * reverse_array - reverse content of an array of ints
 * @a: array pointer
 * @n: number of elements
 * Return: reversed content
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}

