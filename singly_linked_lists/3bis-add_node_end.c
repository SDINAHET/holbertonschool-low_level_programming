#include "lists.h"
#include <stdlib.h>
#include "list.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;  /* Pointer to the new node to be added */
	list_t *temp;      /* Temporary pointer to traverse the list */
	char *str_dup;     /* Pointer to hold the duplicated string */

	/* Create a new node */
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
