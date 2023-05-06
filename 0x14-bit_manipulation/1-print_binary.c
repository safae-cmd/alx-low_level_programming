#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;

	num = 1 << ((sizeof(unsigned long int) * 8) - 1);
	while (num > 0)
	{
		if (n & num)
		{
			_puthcar('1');
		}
		else
		{
			_putchar('0');
		}
		num >>= 1;
	}
}
