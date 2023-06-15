#include "lists.h"

/**
 * dlistint_len - calculates the number of elements of a linked list
 * @h: pointer to list
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *p;

	p = h;
	i = 1;
	while (p)
	{
		i++;
		p = p->next;
	}
	return (i - 1);
}
