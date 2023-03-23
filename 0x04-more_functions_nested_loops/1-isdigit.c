#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: parameter
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	char i = c;

	if ((i >= '0') && (i <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
