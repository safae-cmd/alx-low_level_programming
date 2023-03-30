#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings with a n bytes limit
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	a = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[a + i] = src[i];

	}
	dest[a + i ] = '\0';
	return (dest);
}
