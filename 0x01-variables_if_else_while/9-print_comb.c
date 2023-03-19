#include <stdio.h>
/**
 * main - print
 * Return: single digit numbers
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i < 9)
		{	putchar(',');
			putchar(' ');
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
