#include "lists.h"
#include <stdio.h>

void _printfunction(void)  __attribute__((constructor));

/**
 * _printfunction - prints text
 * Return:void
 */
void _printfunction(void)
{
	list_t text = {"You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n", 74, NULL};
	printf("%s", text.str);
}
