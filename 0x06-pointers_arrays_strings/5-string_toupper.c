#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @c: char
 * Return: string in uppercase
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] <= 122 && c[i] >= 97)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
