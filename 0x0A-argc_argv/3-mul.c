#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: args
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc >= 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
	}
	return (0);
}
