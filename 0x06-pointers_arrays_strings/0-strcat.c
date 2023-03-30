#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	n = strlen(dest);
	for (i = 0; i <= n; i++)
	{
		dest[n + i] = src[i];
	}
	return (dest);
}
