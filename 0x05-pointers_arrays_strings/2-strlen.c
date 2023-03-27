#include "main.h"

/**
 * _strlen - calculate length of string
 * @s: pointer s
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
