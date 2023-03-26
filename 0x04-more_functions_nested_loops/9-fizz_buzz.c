#include <stdio.h>

/**
 * main - prints numbers 1 to 100
 * Return: int
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else
		{
			if (i % 3 == 0)
			{
				printf("Fizz ");
				continue;
			}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
				continue;
			}
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
