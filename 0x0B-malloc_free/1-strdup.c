#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - return pointer to new space of the copy of string
 * @str: string
 * Return: char
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (1)
	{
		p = (char *)malloc(strlen(str) + 1);
		for (i = 0; i <= strlen(str); i++)
		{
			p[i] = str[i];
		}
		if (p == NULL)
		{
			return (NULL);
		}
	return (p);
	free(p);
	}
}
