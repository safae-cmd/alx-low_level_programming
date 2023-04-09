#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: count
 * @argv: string arg
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
