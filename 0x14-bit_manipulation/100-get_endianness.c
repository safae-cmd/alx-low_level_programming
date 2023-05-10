#include "main.h"

/**
 * get_endianness - checks the endianess
 * Return: O or 1
 */
int get_endianness(void)
{
	unsigned int n;
	char *p;

	p = (char *)&n;
	return (*p == 1);
}
