#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: first number
 * @argv: second number
 * Return: int result
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (!p)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%i\n", p(num1, num2));
	return (0);
}
