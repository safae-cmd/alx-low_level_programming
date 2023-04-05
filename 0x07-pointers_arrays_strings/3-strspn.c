#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				break;
			}
		}
		s++;
	}
	return (j + 1);
}


