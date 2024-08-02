#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	/* Traverse the list until the index is reached or the end of the list */
	while (current != NULL)
	{
		if (i == index)
			return (current);  /* Node found at the specified index */
		current = current->next;
		i++;
	}

	/* If the index is out of range, return NULL */
	return (NULL);
}