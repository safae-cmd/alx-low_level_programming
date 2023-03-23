#include "main.h"
#include <stdbool.h>

/**
 * jack_bauer - print every minute
 */
void jack_bauer(void)
{
	bool stop = false;
	int i, j, k, l;

	for (i = 0; i <= 2 && !stop; i++)
	{
		for (j = 0; j <= 9 && !stop; j++)
		{
			for (k = 0; k <= 5 && !stop; k++)
			{
				for (l = 0; l <= 9 && !stop; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					if (i == 2 && j == 3 && k == 5 && l == 9)
					{
						stop = true;
					}
				}
			}
		}
	}
	_putchar('\n');
}
