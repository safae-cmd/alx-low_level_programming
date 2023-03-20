#include <stdio.h>
/**
 * main - 2x2
 * Return: 2 2-digit number
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(',');
			putchar(' ');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
		}
	}
	putchar('\n');
	return (0);
}
