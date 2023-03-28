#include "main.h"

/**
 * puts2 - print every other character
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
