#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of all parameters
 * @n: first par
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list a;

	if (n == 0)
	{
		return (0);
	}
	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(a, int);
	}
	va_end(a);
	return (sum);
}

