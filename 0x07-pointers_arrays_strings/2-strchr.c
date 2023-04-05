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
	char **p;

	p = &s;

	while (**p != '\0')
	{
		if (**p == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
