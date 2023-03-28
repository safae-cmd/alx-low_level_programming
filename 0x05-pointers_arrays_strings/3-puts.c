#include "main.h"

/**
 * _puts - print string
 * @str: string var
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		*str = *str + 1;
		putchar(str);
	}
	_putchar('\n');
}
