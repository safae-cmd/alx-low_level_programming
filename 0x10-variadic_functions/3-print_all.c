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
	char a, *d;
	int i, b, j;

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		switch(format[i])
		{
			case 'a':
			{
				a = va_arg(ap, int);
				printf("%c", a);
				break;
			}
			case 'b':
			{
				b = va_arg(ap, int);
				printf("%d", b);
				break;
			}
			case 'c':
			{
				printf("%f", va_arg(ap, double));
				break;
			}
			case 'd':
			{
				j = 0;
				while (*d != '\0')
				{

					d = va_arg(ap, char *);
					if (d == NULL)
					{	
						printf("(nil)");
					}
					printf("%s", d);
					j++;
					break;
				}
			}
		}
		if (format[i] != '\0' && (format[i] == 'a' || format[i] == 'b' || format[i] == 'c' || format[i] == 'd'))
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
