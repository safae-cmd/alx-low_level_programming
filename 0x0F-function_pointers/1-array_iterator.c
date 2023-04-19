#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes function as a parameter
 * @array: pointer to the array to be printed
 * @size: size of array
 * @action: pointer to print functions
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array) && (action))
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
