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

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %sn", h->len, h->str);
		}
		i++;
		h = h->second;
	}
	return (i);
}
