#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * This function traverses a singly linked list of type list_t. For each node,
 * it prints the length of the string and the string itself. If the string is
 * NULL, it prints [0] (nil). The function counts the number of nodes in the
 * list while printing their contents.
 *
 * Return: The number of nodes in the list.
 *
 * Description:
 * The function starts from the head of the list and iterates through each node.
 * It checks whether the string pointer in each node is NULL. If it is NULL, 
 * it prints [0] (nil); otherwise, it prints the length of the string followed
 * by the string itself. After printing the details of each node, the function
 * moves to the next node and increments a counter. Once it reaches the end of 
 * the list (when the next pointer is NULL), it returns the total count of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
    {
        if (h->str == NULL)
			printf("[0] (nil)\n");
        else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
    }

    return count;
}