#include "main.h"

/**
 * print_diagonal - draw diagonal line
 * @n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
