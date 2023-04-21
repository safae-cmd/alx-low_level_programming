#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *str;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(a, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);
}
