#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head
 * @idx: index
 * @n: data
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	for (i = 0; current->next && i < idx; i++)
	{
		current = current->next;
		i++;
	}
	if (!current || i < idx)
	{
		return (0);
	}
	else
	{
		new->n = n;
		new->next = current;
	}
	return (new);
}
