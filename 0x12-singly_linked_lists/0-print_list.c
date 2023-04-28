#include "lists.h"
#include <stdio.h>

/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
	}
	i = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
