#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	num = sizeof(unsigned long int) * 8 - 1;
	while (((n >> num) & 1) == 0 && num > 0)
	{
		num--;
	}
	while (num >= 0)
	{
		_putchar(((n >> num) & 1) + '0');
		num--;
	}
}
