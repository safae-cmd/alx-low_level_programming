#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - random number
 * Return: n
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ldigit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, ldigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, ldigit);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ldigit);
	}
	return (0);
}
