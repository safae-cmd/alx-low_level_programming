#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of binary
 * Return: unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, n;
	unsigned int unsint;

	if (b == NULL)
	{
		return (0);
	}
	n = strlen(b);
	unsint = 0;
	for (i = 0; i < n; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		unsint = unsint << 1;
		if (b[i] == '1')
		{
			unsint = unsint | 1;
		}
	}
	return (unsint);
}
	
