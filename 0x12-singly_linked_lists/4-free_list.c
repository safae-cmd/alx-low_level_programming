#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: struct pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		free(head->str);
		new = head->next;
		free(head);
		head = new;
	}
}
