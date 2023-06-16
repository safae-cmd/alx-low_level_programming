#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: list pointer
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a;
	dlistint_t *b;
	unsigned int i;

	a = *head;
	if (a)
		while (a->prev)
			a = a->prev;
	i = 0;
	while (a)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = a->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				b->next = a->next;

				if (a->next != NULL)
					a->next->prev = b;
			}

			free(a);
			return (1);
		}
		b = a;
		a = a->next;
		i++;
	}
	return (-1);
}
