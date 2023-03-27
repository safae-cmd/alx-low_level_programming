#include "main.h"

/**
 * swap_int - swaps the value of 2 ints
 * @a: int we want to swap
 * @b: int we want to swap into
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = 0;

	i = *a;
	*a = *b;
	*b = i;
}
