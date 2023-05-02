#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: pointer to head
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *new;
	unsigned int i;

	if (!(*head))
	{
		return (-1);
	}
	new = *head;
	current = NULL;
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	for (i = 0; new && i < index; i++)
	{
		current = new;
		new = new->next;
	}
	if (!new)
	{
		return (-1);
	}
	current->next = new->next;
	free(new);
	return (1);
}
