#include "lists.h"

/**
 * pop_listint - deletes the head node of a list, and returns its data n
 * @head: pointer to head
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (!head)
	{
		return (0);
	}
	p = *head;
	*head = (*head)->next;
	i = p->n;
	p->next = NULL;
	free(p);
	return (i);
}
