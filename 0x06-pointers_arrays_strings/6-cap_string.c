#include "main.h"

/**
 * *cap_string - capitalizes string
 * @c: char
 * Return: char
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i - 1] == ' ' || c[i - 1] == '\n'
			|| c[i - 1] == '\t' || c[i - 1] == 44
			|| c[i - 1] == 59 || c[i - 1] == 46
			|| c[i - 1] == 33 || c[i - 1] == 63
			|| c[i - 1] == 34 || c[i - 1] == 40
			|| c[i - 1] == 41 || c[i - 1] == 123
			|| c[i - 1] == 125)
		{
			if (c[i] >= 97 && c[i] <= 122)
			{
				c[i] = c[i] - 32;
			}
		}
	}
	return (c);
}

