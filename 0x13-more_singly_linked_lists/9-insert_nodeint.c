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
	unsigned int i, number;
	listint_t *current, *new;

	current = *head;
	for (number = 0; current != NULL; number++)
	{
		current = current->next;
	}
	if (!head || idx > number)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1; i++)
		{
			current = current->next;
		}
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
