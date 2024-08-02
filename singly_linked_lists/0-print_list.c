#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Description:
 * The function prints each element of a linked list of type list_t.
 * Each element is printed in the format [len] str, where len is the length
 * of the string and str is the string itself. If str is NULL, the output
 * should be [0] (nil). After printing all the elements, the function returns
 * the total number of nodes in the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)

{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
