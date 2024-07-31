#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_node - Creates a new node with a duplicated string.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 *
 * Description: This function creates a new node, duplicates the provided
 * string, and initializes the new node with the duplicated string and its
 * length. The new node's `next` pointer is set to NULL as it will be the
 * last node in the list.
 */
list_t *create_node(const char *str)
{
	list_t *new_node;  /* Pointer to the new node to be added */
	char *str_dup;     /* Pointer to hold the duplicated string */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);  /* Return NULL if memory allocation fails */
	}

	/* Duplicate the string and assign to the new node */
	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);  /* Free the allocated node if string duplication fails */
		return (NULL);
	}

	new_node->str = str_dup;
	new_node->len = strlen(str);  /* Set the length of the string */
	new_node->next = NULL;        /* New node will be the last node */

	return (new_node);
}
