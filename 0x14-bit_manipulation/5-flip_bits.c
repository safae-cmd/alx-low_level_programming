#include "main.h"

/**
 * flip_bits - the number of bits to flip to get from one number to another
 * @n: number of bits
 * @m: new number
 * Return: number of bits necessary
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int dif;

	dif = n ^ m;
	while (dif != 0)
	{
		i += dif & 1;
		dif >>= 1;
	}
	return (i);
}

