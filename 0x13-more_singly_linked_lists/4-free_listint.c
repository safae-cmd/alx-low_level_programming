#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to struct
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}


