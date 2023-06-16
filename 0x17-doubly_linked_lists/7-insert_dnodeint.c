#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list pointer
 * @idx: index
 * @n: node
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (!*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	current = *h;
	i = 0;
	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (!current)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	new->prev = current;
	if (current->next)
		current->next->prev = new;
	current->next = new;
	return (new);
}
