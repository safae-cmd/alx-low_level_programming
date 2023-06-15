#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *p;
	p = h;
	i = 1;
	while (p)
	{
		printf("%i\n", p->n);
		i++;
		p = p->next;
	}
	return (i - 1);
}
