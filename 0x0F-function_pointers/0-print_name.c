#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
