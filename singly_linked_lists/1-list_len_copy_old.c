#include "lists.h"

/**
 * list_len - Counts the number of elements in a list_t list.
 * @h: Pointer to the head of the list_t list.
 *
 * Description: This function traverses the list_t list and counts
 *              the number of nodes in the list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;  /* Initialize the count to 0 */

	while (h != NULL)  /* Traverse the list until the end */
	{
		count++;       /* Increment count for each node */
		h = h->next;  /* Move to the next node */
	}

	return (count);     /* Return the total number of nodes */
}
