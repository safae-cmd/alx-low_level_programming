#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head pointer to the first node
 * @index: node position
 * Return: the node index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}
	p = head;
	i = 0;
	while (p->next && i < index)
	{
		p = p->next;
		i++;
	}
	if (p == NULL)
	{
		return (0);
	}
	else
	{
		return (p);
	}
}
