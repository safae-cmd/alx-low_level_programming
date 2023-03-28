#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string without printing it
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int n = strlen(s);
	int i;
	char c;

	for (i = 0; i < n / 2; i++)
	{
		c = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = c;
	}

}
