#include "lists.h"

/**
 * free_listint2 - frees list and set head to NULL
 * @head: pointer to head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	p = *head;
	free(*head);
	while (p)
	{
		p = p->next;
		free(p);
	}
}
