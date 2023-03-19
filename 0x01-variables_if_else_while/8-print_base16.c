#include <stdio.h>
/**
 * main - print numbers
 * Return: base 16 numbers
 */
int main(void)
{
	char i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}
