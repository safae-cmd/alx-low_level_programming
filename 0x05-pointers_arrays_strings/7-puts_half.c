#include "main.h"
#include <string.h>

/**
 * puts_half - prints half the string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int n = strlen(str) - 1;

	for (i = (n / 2) + 1; i <= n ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
