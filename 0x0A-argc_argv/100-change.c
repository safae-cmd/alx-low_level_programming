#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: count
 * @argv: amount of money
 * Return: change
 */
int main(int argc, char *argv[])
{
	int n, cents;

	cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	cents += n / 25;
	n %= 25;
	cents += n / 10;
	n %= 10;
	cents += n / 5;
	n %= 5;
	cents += n / 2;
	n %= 2;
	cents += n;

	printf("%d\n", cents);
	return (0);
}
