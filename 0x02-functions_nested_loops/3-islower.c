#include "main.h"

/**
 * _islower - check if letter is lowercase
 * @c: argument for alphabet
 * Return: O or 1
 */
int _islower(int c)
{
	if (c <= 90 && c > 64)
		return (0);
	else if (c <= 122 && c > 96)
		return (1);
	return (0);
}
