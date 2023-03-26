#include "main.h"

/**
 * print_triangle - print triangle
 * @size: parameter
 * Return: triangle
 */
void print_triangle(int size)
{
	int j, i, k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size - j; i++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= j; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
