#include "main.h"

/**
 * print_line - draw straight line
 * @n: parameter
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			continue;
		}
		_putchar('_');
	}
	_putchar('\n');
}
