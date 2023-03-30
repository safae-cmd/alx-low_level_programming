#include "main.h"
#include <string.h>

/**
 * *_strncpy - copy string
 * @dest: recieving char
 * @src: char to copy
 * @n: number of characters allowed in dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
