#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *d;
	int i;

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				d = va_arg(ap, char *);
				if (d == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", d);
				break;
		}
		if (format[i] != '\0' && (format[i] == 'c'
			|| format[i] == 'i' || format[i] == 'f'))
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
