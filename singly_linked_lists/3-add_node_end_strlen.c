#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list_t list.
 * @str: String to be duplicated and added to the new node.
 *
 * Description: This function adds a new node to the end of a singly linked
 * list. If the list is empty, it makes the new node the head of the list.
 * If the list is not empty, it traverses to the end and appends the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;  /* Pointer to the new node to be added */
	list_t *temp;      /* Temporary pointer to traverse the list */

	/* Create and initialize the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);  /* Return NULL if memory allocation fails */
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);  /* Free the node if strdup fails */
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse to the end of the list */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* Link the new node at the end of the list */
		temp->next = new_node;
	}

	return (new_node);  /* Return the address of the new node */
}

