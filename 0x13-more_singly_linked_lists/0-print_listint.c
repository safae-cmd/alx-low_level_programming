#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of the list
 * @h: pointer to struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (1);
	}
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
