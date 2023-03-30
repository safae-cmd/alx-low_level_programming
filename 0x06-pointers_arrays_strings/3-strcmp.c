#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int a, b, result;

	a = strlen(s1);
	b = strlen(s2);
	result = a - b;
	if (result > 0)
	{
		return (15);
	}
	else if (result < 0)
	{
		return (-15);
	}
	else if (result == 0)
	{
		return (0);
	}
	return (0);
}
