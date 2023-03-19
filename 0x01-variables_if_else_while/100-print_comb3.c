#include <stdio.h>
/**
 * main - print
 * Return: 2digit numbers
 */
int main(void)
{
	int i;

	for (i = 01; i < 100; i++)
	{
		putchar('0' + i);
		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}


