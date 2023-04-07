#include "main.h"

int calc_sqrt(int n, int i, int j);

/**
 * _sqrt_recursion - natural square root
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (calc_sqrt(n, 1, 0));
}


/**
* calc_sqrt - calc sqrt
* @n: number
* @i: iteration
* @j: return walue
* Return: number
*/
int calc_sqrt(int n, int i, int j)
{
	if (n == 0)
		return (j);
	else if (n == 1 || n < i)
		return (-1);
	else
		return ((calc_sqrt((n - i), (i + 2), (j + 1))));
}
