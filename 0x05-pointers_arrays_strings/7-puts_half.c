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
	int n = strlen(str);

	for (i = n / 2; i <= n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
