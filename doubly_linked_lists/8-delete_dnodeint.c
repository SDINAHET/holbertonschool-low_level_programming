#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0) /* cas 1: Deleting the head node */
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
/* cas 2: Traverse the list to find the node to delete */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL) /* cas 3: If the index is out of range */
		return (-1);

/* cas 4: Update the links to remove the node from the list */
	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
