#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies string
 * @dest: buffer
 * @src: string
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i, a;

	for (i = 0; i < strlen(src) + 1; i++)
	{
		a = src[i];
		dest[i] = a;
	}
	return (dest);
}
