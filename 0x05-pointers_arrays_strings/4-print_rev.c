#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: points to string value
 * Return: void
 */
void print_rev(char *s)
{
	char *i = s;

	while (*i != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= s)
	{
		_putchar(*i);
		i--;
	}
	_putchar('\n');
}
