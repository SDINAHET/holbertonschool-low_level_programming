#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linklist.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data (n) of the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	/* Traverse the list and accumulate the sum of node data */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
