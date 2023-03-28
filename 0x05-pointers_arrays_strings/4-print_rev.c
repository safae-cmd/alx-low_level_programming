#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: points to string value
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

