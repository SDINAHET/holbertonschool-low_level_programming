#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 *
 * Description:
 * This function allocates memory for a new node, duplicates the string d,
 * and inserts the new node at the beginning of the list. If memory allocation
 * for the node or string duplication fails, the function returns NULL.
 * The new node's `next` pointer is set to the current head of the list, and
 * the head is updated to point to the new node.
 */
list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;
	char *str_dup;

	/*Allocate memory for the new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	/*Duplicate the string and assign it to the new node*/
	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = str_dup;
	new_node->len = strlen(str);

	/*Insert the new node at the beginning of the list*/
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
