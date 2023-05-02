#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: pointer to first node
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *p;

	if (!head)
	{
		return (0);
	}
	p = head;
	sum = 0;
	while (p->next)
	{
		sum += p->n;
		p = p->next;
	}
	sum += p->n;
	return (sum);
}


