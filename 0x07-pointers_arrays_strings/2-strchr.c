#include "main.h"
#include <string.h>

/**
 * *_strchr - locate character in a string
 * @s: string
 * @c: character to locate
 * Return: c or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
