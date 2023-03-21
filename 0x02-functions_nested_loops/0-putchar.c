#include "main.h"
#include <unistd.h>

/**
 * main - print text
 * Return: 0
 */

int main(void)
{
	char message[] = "_putchar\n";

	write(1, message, sizeof(message) - 1);
	return (0);
}
