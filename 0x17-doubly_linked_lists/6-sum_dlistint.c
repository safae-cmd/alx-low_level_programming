#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list.
 * @head: pointer to list
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head)
	{
		while (head->prev)
		{
			head = head->prev;
		}
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
