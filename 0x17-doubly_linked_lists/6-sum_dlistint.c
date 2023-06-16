#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list.
 * @head: pointer to list
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	current = head;
	sum = 0;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
