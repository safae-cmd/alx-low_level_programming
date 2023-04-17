#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: first string
 * @s2: string to be added
 * @n: first bytes of s2
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n > j)
	{
		n = j;
	}
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		p[k] = s1[k];
	}
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + n] = '\0';
	return (p);
}
