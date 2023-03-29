#include "main.h"
#include <string.h>

/**
 * puts_half - prints half the string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;
	int n = (strlen(str) - 1);

	for (i = 0 ; i <= n; i++)
		;
	for (j = i / 2; j <= n; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
