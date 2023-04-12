#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenate two strings
 * @s1: first str
 * @s2: second str
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	size_t i, j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= strlen(s2); j++)
	{
		p[strlen(s1) + j] = s2[j];
	}
	return (p);
}
