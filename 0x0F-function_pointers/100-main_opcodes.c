#include <stdio.h>
#include <stdlib.h>

void print_code(int numb);
/**
 * main - prints opcodes of its own main function
 * @argc: number of args
 * @argv: arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int numb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numb = atoi(argv[1]);
	if (numb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_code(numb);
	return (0);
}

/**
 * print_code - print opcodes in the main
 * @numb: num of bytes of the opcode
 * Return: int
 */
void print_code(int numb)
{
	int i;
	unsigned char *m;

	m = (unsigned char *) main;
	for (i = 0; i < numb; i++)
	{
		printf("%02x", m[i]);
		if (i < numb - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}
