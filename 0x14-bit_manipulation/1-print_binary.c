#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * @Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int number = (unsigned long int) 1 << ((sizeof(unsigned long int) * 8) - 1);
	while (number > 0)
	{
		if (n & number)
		{
			_puthcar('1');
		}
		else
		{
			_putchar('0');
		}
		number >>= 1;
	}
}
