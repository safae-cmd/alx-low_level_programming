#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - alphabet
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
