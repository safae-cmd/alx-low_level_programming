#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to first element os struct
 * @str: pointer of string in node
 * Return: address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->str = strdup(str);
	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}
	p->len = strlen(str);
	p->next = *head;
	*head = p;
	return (p);
}
