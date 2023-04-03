#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: pointer to constant byte
 * @b: constant byte
 * @n: memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p;

	p = s;

	for (i = 0; i < n; i++)
	{
		*p = b;
		p++;
	}
	return (s);
}

