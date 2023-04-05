#include "main.h"
#include <string.h>

/**
 * *_strstr - locates substring
 * @haystack: string to search in
 * @needle: sustring
 * Return: pointer to start or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				p = &needle[i];
				return (p);
			}
		}
	}
	return (NULL);
}
