#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head
 * @n: number in node
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
	}
	else
	{
		p = *head;
		while (p->next)
		{
			p = p->next;
		}
		p->next = new;
	}
	return (new);
}
