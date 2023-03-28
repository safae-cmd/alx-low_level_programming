#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: points to string value
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;


	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = i; i >= 0; j--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
