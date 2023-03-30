#include "main.h"
#include <string.h>

/**
 * *string_toupper - change lowercase to uppercase
 * @*c: char
 * Return: string in uppercase
 */
char *string_toupper(char *c)
{
	int i, n;

	n = strlen(c);

	for (i = 0; i < n; i++)
	{
		if (c[i] <= 122 && c[i] >= 97)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
