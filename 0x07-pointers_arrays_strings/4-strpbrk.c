#include "main.h"
#include <string.h>

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string to be searched for
 * @accept: original string
 * Return: pointer to s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}

	}
	return (NULL);
}
